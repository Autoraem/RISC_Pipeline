    .section .text
    .globl main

#-------------------------------------------------------
# main:
#-------------------------------------------------------
main:
    addi    a0, x0, 4     # n = 10
    call    fib            # call fib(n)
    # result returned in a0
    # loop here
end:
    j       end

#-------------------------------------------------------
# fib(n):
# a0 = n
# returns fib(n) in a0
#-------------------------------------------------------
fib:
    addi    sp, sp, -16    # create stack frame
    sw      ra, 12(sp)     # save return address
    sw      a0, 8(sp)      # save n

    # base case: if n <= 1, return n
    li      t0, 1
    ble     a0, t0, fib_base

    # recursive case: fib(n-1) + fib(n-2)

    # fib(n-1)
    lw      a0, 8(sp)
    addi    a0, a0, -1
    call    fib
    mv      t1, a0         # save fib(n-1) in t1

    # fib(n-2)
    lw      a0, 8(sp)
    addi    a0, a0, -2
    call    fib

    add     a0, a0, t1     # a0 = fib(n-1) + fib(n-2)

    j       fib_end

fib_base:
    # return n
    lw      a0, 8(sp)

fib_end:
    lw      ra, 12(sp)
    addi    sp, sp, 16
    ret
