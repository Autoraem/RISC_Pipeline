    .section .text
    .globl _start

_start:
    addi x1, x0, 0      # x1 = counter = 0
    addi x2, x0, 5      # x2 = step = 5
    addi x3, x0, 10     # x3 = a constant
    addi x4, x0, 20     # x4 = another constant

loop:
    add  x1, x1, x2     # increment counter
    add  x5, x3, x4     # add constants to see non-counter activity
    andi x6, x5, 8      # mask some bits for observation
    bne  x1, x7, loop   # loop until x1 == x7 (x7 = 0, never taken initially)

end:
    nop                 # just terminate
    jal  x0, end        # infinite loop
