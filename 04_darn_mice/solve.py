import z3


# Creates a list of z3 bit vectors of length 8
def BitVecVector(name, n):
    return [z3.BitVec('%s_%s' % (name, i), 8) for i in range(n)]


def main():
    constraints = [0x50, 0x5E, 0x5E, 0x0A3, 0x4F, 0x5B, 0x51, 0x5E, 0x5E, 0x97, 0x0A3, 0x80, 0x90, 0x0A3, 0x80, 0x90, 0x0A3, 0x80, 0x90, 0x0A3, 0x80, 0x90, 0x0A3, 0x80, 0x90, 0x0A3, 0x80, 0x90, 0x0A3, 0x80, 0x90, 0x0A2, 0x0A3, 0x6B, 0x7F]
    arg = BitVecVector('arg', len(constraints))

    solver = z3.Solver()
    for i, byte in enumerate(arg):
        solver.add(byte + constraints[i] == 0xC3)

    if solver.check() == z3.sat:
        m = solver.model()
        print(''.join(chr(m.evaluate(byte).as_long()) for byte in arg))


if __name__ == '__main__':
    main()
