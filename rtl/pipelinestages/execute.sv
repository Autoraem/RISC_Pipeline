module execute (
    input  logic        clk,
    input  logic        rst,
    input  logic        valid, //for branch prediction
    // From ID/EX pipeline register
    input  logic [31:0] rs1_data,
    input  logic [31:0] rs2_data,
    input  logic [31:0] exmem_forwarded_data, 
    input  logic [31:0] memwb_forwarded_data, 
    input  logic [31:0] imm,
    input  alu_op_e     alu_op,
    input  a_sel_e      A_sel,
    input  b_sel_e      B_sel,
    input  logic [31:0] pc,
    
    // Branching unit
    input  logic [31:0] rs1,
    input  logic [31:0] rs2,
    input  fwd_sel_e    forwardA_br,
    input  fwd_sel_e    forwardB_br,
    input  logic [31:0] ex_mem_alu_result,
    input  logic [31:0] mem_wb_alu_or_mem_val,
    input  branch_type_e branch_type,
    // Outputs to EX/MEM pipeline register
    output logic [31:0] alu_result,
    output logic        zero,
    output logic        neg,
    output logic        overflow,
    output logic [31:0] sd,       // Store data (rs2)
    
    // To Prefetch / PC Select logic
    output logic        take_branch
);
    import control_pkg::*;
    // -----------------------
    // ALU operand muxing
    // -----------------------
    logic [31:0] alu_A, alu_B;

    always_comb begin
        unique case (A_sel)
            SRC_A_RS1: alu_A = rs1_data;
            SRC_A_PC:  alu_A = pc; 
            SRC_A_ZERO:alu_A = 32'd0;
            SRC_A_EXMEM: alu_A = exmem_forwarded_data; 
            SRC_A_MEMWB: alu_A = memwb_forwarded_data; 
            default: alu_A = 32'hDEADBEEF;
        endcase
    end

    always_comb begin
        unique case (B_sel)
            SRC_B_RS2: alu_B = rs2_data;
            SRC_B_IMM: alu_B = imm;
            SRC_B_FOUR: alu_B = 32'd4;
            SRC_B_EXMEM: alu_B = exmem_forwarded_data;  
            SRC_B_MEMWB: alu_B = memwb_forwarded_data; 
            default: alu_B = 32'hDEADBEEF;
        endcase
    end
    
    // -----------------------
    // ALU
    // -----------------------
    alu alu_inst (
        .A(alu_A),
        .B(alu_B),
        .Opcode(alu_op),
        .Q(alu_result),
        .Zero(zero),
        .Neg(neg),
        .Overflow(overflow)
    );
    // -----------------------
    // Store data passthrough
    // -----------------------
    assign sd = rs2_data;

    // -----------------------
    // Branch decision
    // -----------------------
    logic [31:0] rs1_br;
    logic [31:0] rs2_br;
    always_comb begin
        if (!valid) begin
            rs1_br = rs1;
            rs2_br = rs2;
        end else begin
            unique case (forwardA_br)
                FWD_NONE: rs1_br = rs1;
                FWD_EXMEM: rs1_br = ex_mem_alu_result;
                FWD_MEMWB: rs1_br = mem_wb_alu_or_mem_val;
                default: rs1_br = 32'hDEADBEEF;
            endcase
            unique case (forwardB_br)
                FWD_NONE: rs2_br = rs2;
                FWD_EXMEM: rs2_br = ex_mem_alu_result;
                FWD_MEMWB: rs2_br = mem_wb_alu_or_mem_val;
                default: rs2_br = 32'hDEADBEEF;
            endcase
        end
    end

    brcmp brcmp_inst (
        .valid(valid),
        .rs1(rs1_br),
        .rs2(rs2_br),
        .branch_type(branch_type),
        .take_branch(take_branch)
    );

endmodule
