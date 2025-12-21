    .section .text
    .globl _start
_start:
    # Initialize
    addi x1, x0, 0        # x1 = 0
    addi x2, x0, 1        # x2 = 1
    addi x3, x0, 2        # x3 = 2
    addi x4, x0, 3        # x4 = 3

loop:
    add  x5, x1, x2       # x5 = x1 + x2
    add  x6, x3, x4       # x6 = x3 + x4
    add  x7, x5, x6       # x7 = x5 + x6

    # Update x1/x2/x3/x4 to create dependencies and test forwarding
    add  x1, x5, x0       # x1 = x5
    add  x2, x6, x0       # x2 = x6
    add  x3, x7, x0       # x3 = x7
    addi x4, x4, 1        # x4 = x4 + 1

    # Loop a few times with branch
    li   x0, 0            # x0 = 0 (no effect, just for blt pseudo)
    li   x6, 10           # loop counter (10 iterations)
    blt  x1, x6, loop     # loop if x1 < 10

end:
    j end                 # infinite loop
