module execute (
    input  logic        clk,
    input  logic        reset,

    // From ID/EX pipeline register
    input  logic [31:0] rs1_data,
    input  logic [31:0] rs2_data,
    input  logic [31:0] imm,
    input  alu_op_e     alu_op,
    input  a_sel_e      A_sel,
    input  b_sel_e      B_sel,
    input  logic [31:0] pc,
    input  logic        is_branch,

    // Outputs to EX/MEM pipeline register
    output logic [31:0] alu_result,
    // output logic        zero,
    // output logic        neg,
    // output logic        overflow,
    output logic [31:0] sd,       // Store data (rs2)
    
    // To Prefetch / PC Select logic
    output logic        br_taken
);

    // -----------------------
    // ALU operand muxing
    // -----------------------
    logic [31:0] alu_A, alu_B;

    always_comb begin
        unique case (A_sel)
            A_RS1: alu_A = rs1_data;
            A_PC:  alu_A = pc;
            default: alu_A = 32'hDEADBEEF;
        endcase
    end

    always_comb begin
        unique case (B_sel)
            B_RS2: alu_B = rs2_data;
            B_IMM: alu_B = imm;
            default: alu_B = 32'hDEADBEEF;
        endcase
    end

    // -----------------------
    // ALU
    // -----------------------
    alu alu_inst (
        .A(alu_A),
        .B(alu_B),
        .alu_op(alu_op),
        .result(alu_result),
        .zero(zero),
        .neg(neg),
        .overflow(overflow)
    );
    // -----------------------
    // Store data passthrough
    // -----------------------
    assign sd = rs2_data;

    // -----------------------
    // Branch decision
    // -----------------------
    always_comb begin
        if (!is_branch)
            br_taken = 1'b0;
        else
            br_taken = zero;   // For BEQ-style branching
    end

endmodule
