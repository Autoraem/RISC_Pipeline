module brcmp (
    input  logic        valid,
    input  logic [31:0] rs1,
    input  logic [31:0] rs2,
    input  branch_type_e branch_type,  // from instruction[14:12]
    output logic        take_branch
);
    import control_pkg::*;

    always_comb begin        
        take_branch = 1'b0;
        if (valid) begin
            unique case (branch_type)
                BR_EQ: take_branch = (rs1 == rs2);                   // BEQ
                BR_NE: take_branch = (rs1 != rs2);                   // BNE
                BR_LT: take_branch = ($signed(rs1) <  $signed(rs2)); // BLT
                BR_GE: take_branch = ($signed(rs1) >= $signed(rs2)); // BGE
                BR_LTU: take_branch = (rs1 < rs2);                    // BLTU
                BR_GEU: take_branch = (rs1 >= rs2);              // BGEU
                BR_NONE: take_branch = 1'b0;                // no branch
                BR_UNCOND: take_branch = 1'b1;              // unconditional branch
                default: take_branch = 1'b0;
            endcase
        end
    end

endmodule
