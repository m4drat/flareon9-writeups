# -*- coding: utf-8 -*-
# @Author: madrat


import lief
from typing import Tuple, Optional
from triton import *

try:
    from triton_autocomplete import Instruction, TritonContext, CPUSIZE, MODE, ARCH, SOLVER_STATE, EXCEPTION, MemoryAccess, STUBS, SOLVER
except (ImportError, AttributeError):
    pass

BASE_STACK = 0x7FFFFFFFE000
LIBC_STUBS_START = 0x66600000
CALCULATIONS_START = 0x401114
FLAG_LEN = 0x2C
TARGET = [
    106, 196, 106, 178, 174, 102, 31, 91, 66, 255, 86, 196, 74, 139, 219, 166,
    106, 4, 211, 68, 227, 72, 156, 38, 239, 153, 223, 225, 73, 171, 51, 4, 234,
    50, 207, 82, 18, 111, 180, 212, 81, 189, 73, 76]


def build_model_and_solve(ctx: "TritonContext"):
    """Build a model and solve the constraints."""
    ast = ctx.getAstContext()
    expr = ast.land(
        # Constraints on the result
        [ctx.getSymbolicMemory(BASE_STACK + i).getAst() == b for i, b in enumerate(TARGET)] +
        # Constraints on the original symbolic variables (we want to make sure the flag is printable)
        [ast.variable(ctx.getSymbolicVariable(i)) >= 0x20 for i in range(FLAG_LEN)] +
        [ast.variable(ctx.getSymbolicVariable(i)) <= 0x7F
         for i in range(FLAG_LEN)]
    )

    return ctx.getModel(expr, status=True)


def solve_constraints(ctx: "TritonContext") -> Optional[bytes]:
    """Try to solve the constraints and return the flag if possible."""
    model, sat, solving_time = build_model_and_solve(ctx)

    if sat == SOLVER_STATE.UNSAT:
        print("[-] No solution")
        return None

    print(f"[+] Solution found in {solving_time} ms")

    return bytes([k.getValue() for _, k in list(sorted(model.items()))])


def emulate(ctx: "TritonContext", pc) -> Tuple[int, Optional[bytes]]:
    count = 0
    while pc:
        # Fetch opcodes
        opcodes = ctx.getConcreteMemoryAreaValue(pc, 16)
        # Create the Triton instruction
        instruction = Instruction(pc, opcodes)
        if ctx.processing(instruction) == EXCEPTION.FAULT_UD:
            print(f"[-] Instruction is not supported: {instruction}")
        count += 1

        print(instruction)

        if instruction.getAddress() == 0x40B848:
            print("Solving constraints...")
            return (count, solve_constraints(ctx))

        # Get next pc
        pc = ctx.getConcreteRegisterValue(ctx.registers.rip)

    return (count, None)


def load_binary(ctx: "TritonContext", binary):
    phdrs = binary.segments
    for phdr in phdrs:
        size = phdr.physical_size
        vaddr = phdr.virtual_address
        print(f"[+] Loading 0x{vaddr:016x} - 0x{vaddr+size:016x}")
        ctx.setConcreteMemoryAreaValue(vaddr, phdr.content)


def run(ctx: "TritonContext"):
    # Concretize context
    ctx.concretizeAllMemory()
    ctx.concretizeAllRegister()

    # Define a fake stack
    ctx.setConcreteRegisterValue(ctx.registers.rbp, BASE_STACK)
    ctx.setConcreteRegisterValue(ctx.registers.rsp, BASE_STACK - 0x1000)

    # Setup arguments
    ctx.setConcreteRegisterValue(ctx.registers.rax, FLAG_LEN)  # len
    ctx.setConcreteMemoryAreaValue(BASE_STACK, b"A" * FLAG_LEN)  # buf

    # Symbolize flag buffer
    for i in range(FLAG_LEN):
        ctx.symbolizeMemory(MemoryAccess(BASE_STACK + i, CPUSIZE.BYTE))

    print("[+] Starting emulation.")
    total_instructions, flag = emulate(ctx, CALCULATIONS_START)
    print(
        f"[+] Emulation completed. Instructions executed: {total_instructions}")

    if flag:
        print(f"[+] Flag: {flag.decode()}")
    else:
        print("[-] No flag found")

    # Get processed result
    print(
        "[+] Processed buffer: ",
        list(ctx.getConcreteMemoryAreaValue(BASE_STACK, FLAG_LEN))
    )


def main():
    ctx = TritonContext()
    ctx.setArchitecture(ARCH.X86_64)
    ctx.setSolver(SOLVER.BITWUZLA)

    ctx.setMode(MODE.ALIGNED_MEMORY, True)
    ctx.setMode(MODE.ONLY_ON_SYMBOLIZED, True)
    ctx.setMode(MODE.CONSTANT_FOLDING, True)

    binary = lief.parse("check_flag.elf")
    load_binary(ctx, binary)

    run(ctx)


if __name__ == "__main__":
    main()
