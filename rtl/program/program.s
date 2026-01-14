# Example RISC-V Assembly Test Program
# This tests the fixed bugs in your pipeline CPU

.section .text
.globl _start

_start:
    # ==========================================
    # Test 1: Basic ALU operations
    # ==========================================
    addi x1, x0, 10         # x1 = 10
    addi x2, x0, 20         # x2 = 20
    add  x3, x1, x2         # x3 = 30
    sub  x4, x2, x1         # x4 = 10
    
    # ==========================================
    # Test 2: Data hazard forwarding
    # This tests the forwarding unit fix
    # ==========================================
    addi x5, x0, 5          # x5 = 5
    addi x6, x5, 3          # x6 = 8 (needs forwarding from previous)
    add  x7, x6, x5         # x7 = 13 (needs forwarding from x6)
    
    # ==========================================
    # Test 3: Branch instructions (B-type immediate)
    # This tests the B-immediate generation fix
    # ==========================================
    addi x10, x0, 5         # x10 = 5
    addi x11, x0, 5         # x11 = 5
    beq  x10, x11, equal    # Should branch (forward branch)
    addi x12, x0, 99        # Should be skipped
    
equal:
    addi x13, x0, 42        # x13 = 42

    # Test backward branch
    addi x14, x0, 3         # x14 = 3
    addi x15, x0, 0         # x15 = 0
    
back_loop:
    addi x15, x15, 1        # x15++
    bne  x15, x14, back_loop # Loop until x15 == 3
    
    # Test other branch types
    addi x16, x0, 10        # x16 = 10
    addi x17, x0, 5         # x17 = 5
    blt  x17, x16, less     # Should branch (5 < 10)
    addi x18, x0, 99        # Should be skipped
    
less:
    addi x19, x0, 11        # x19 = 11
    
    # ==========================================
    # Test 4: JAL instruction (J-type immediate)
    # This tests the J-immediate generation fix
    # ==========================================
    addi x20, x0, 100       # x20 = 100
    jal  x21, function      # Jump to function, save return address
    addi x22, x0, 200       # x22 = 200 (after return)
    jal  x0, end            # Jump to end
    
function:
    addi x23, x0, 150       # x23 = 150
    jalr x0, x21, 0         # Return (jump to address in x21)
    
    # ==========================================
    # Test 5: Logical operations
    # ==========================================
end:
    addi x24, x0, 0x0F      # x24 = 0x0F
    addi x25, x0, 0x33      # x25 = 0x33
    and  x26, x24, x25      # x26 = 0x03
    or   x27, x24, x25      # x27 = 0x3F
    xor  x28, x24, x25      # x28 = 0x3C
    
    # ==========================================
    # Test 6: Shift operations
    # ==========================================
    addi x29, x0, 8         # x29 = 8
    slli x30, x29, 2        # x30 = 32 (8 << 2)
    srli x31, x30, 1        # x31 = 16 (32 >> 1)
    
    # ==========================================
    # Test 7: Set less than operations
    # ==========================================
    addi x1, x0, -5         # x1 = -5 (0xFFFFFFFB)
    addi x2, x0, 5          # x2 = 5
    slt  x3, x1, x2         # x3 = 1 (-5 < 5 signed)
    sltu x4, x1, x2         # x4 = 0 (0xFFFFFFFB > 5 unsigned)
    
    # ==========================================
    # Test 8: LUI and AUIPC
    # ==========================================
    lui   x5, 0x12345       # x5 = 0x12345000
    auipc x6, 0             # x6 = current PC
    
    # ==========================================
    # Infinite loop to end program
    # ==========================================
final_loop:
    beq  x0, x0, final_loop # Infinite loop

    # ==========================================
    # Expected Results (for verification):
    # ==========================================
    # x1  = 0xFFFFFFFB (-5)
    # x2  = 5
    # x3  = 30 (then 1)
    # x4  = 10 (then 0)
    # x5  = 0x12345000
    # x6  = 8 (then PC value)
    # x7  = 13
    # x10 = 5
    # x11 = 5
    # x12 = 0 (skipped)
    # x13 = 42
    # x14 = 3
    # x15 = 3
    # x16 = 10
    # x17 = 5
    # x18 = 0 (skipped)
    # x19 = 11
    # x20 = 100
    # x21 = return address
    # x22 = 200
    # x23 = 150
    # x24 = 0x0F
    # x25 = 0x33
    # x26 = 0x03
    # x27 = 0x3F
    # x28 = 0x3C
    # x29 = 8
    # x30 = 32
    # x31 = 16