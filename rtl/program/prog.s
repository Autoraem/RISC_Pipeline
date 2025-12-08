    .section .text
    .globl _start
_start:
    addi x1, x0, 0      # counter = 0
    addi x2, x0, 10     # limit = 10

loop:
    addi x1, x1, 1      # counter++

    bne  x1, x2, loop   # if counter != limit, continue

