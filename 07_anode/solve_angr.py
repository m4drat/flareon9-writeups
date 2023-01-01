# -*- coding: utf-8 -*-
# @Author: madrat

import angr
import claripy


FLAG_LEN = 44
FIND_ADDR = 0x40B886
AVOID_ADDR = [0x40B8E7, 0x40B8B7]


def main():
    proj = angr.Project("./check_flag.elf", load_options={"auto_load_libs": True})

    argv1 = claripy.BVS("argv1", FLAG_LEN * 8)
    initial_state = proj.factory.entry_state(
        args=["./check_flag", argv1], add_options={angr.options.LAZY_SOLVES}
    )  # angr.options.unicorn

    for i in range(FLAG_LEN):
        initial_state.solver.add(argv1.get_byte(i) >= 0x20)  # '\x20'
        initial_state.solver.add(argv1.get_byte(i) <= 0x7F)  # '\x7e'

    simulation_manager = proj.factory.simulation_manager(initial_state)

    import IPython

    IPython.embed()

    simulation_manager.explore(find=FIND_ADDR, avoid=AVOID_ADDR)

    try:
        found = simulation_manager.found[0]
        solution = found.solver.eval(argv1, cast_to=bytes)
        print("[+] Found flag: %s" % solution)
    except Exception as e:
        print("[-] Flag not found!")
        print(e.message)


if __name__ == "__main__":
    main()
