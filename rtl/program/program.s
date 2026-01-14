    .section .text
    .globl _start
_start:
    addi t0, zero, 0      # counter = 0
    addi t1, zero, 10     # limit = 10

loop:
    addi t0, t0, 1      # counter++

    bne  t1, t0, loop   # if counter != limit, continue

addi t1, zero, 11     # Set to 11
