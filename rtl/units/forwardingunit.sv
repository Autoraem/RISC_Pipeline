`timescale 1ns/1ps
module forwardingunit (
    // IDs of source registers in EX stage (ID/EX pipeline register)
    input  logic [4:0] id_ex_rs1,
    input  logic [4:0] id_ex_rs2,

    // EX/MEM pipeline: destination reg and control
    input  logic [4:0] ex_mem_rd,
    input  logic       ex_mem_reg_write, // EX/MEM will write to regfile

    // MEM/WB pipeline: destination reg and control
    input  logic [4:0] mem_wb_rd,
    input  logic       mem_wb_reg_write, // MEM/WB will write to regfile

    input  a_sel_e ex_A_sel,
    input  b_sel_e ex_B_sel,
    // Branch
    input  logic   [4:0] if_id_rs1,
    input  logic   [4:0] if_id_rs2,
    // Outputs: forwarding select for ALU inputs and Branch
    output a_sel_e      forwardA_alu,
    output b_sel_e      forwardB_alu,
    output fwd_sel_e    forwardA_br,
    output fwd_sel_e    forwardB_br
);
    import control_pkg::*;
    // Default: no forwarding 
    always_comb begin
        forwardA_alu = ex_A_sel; // Default: no forwarding
        forwardB_alu = ex_B_sel; // Default: no forwarding
        // --- Forwarding for rs1 (operand A) ---
        // Priority: EX/MEM -> MEM/WB
        if (ex_mem_reg_write && (ex_mem_rd != 5'd0) && (ex_mem_rd == id_ex_rs1) ) begin
            forwardA_alu = SRC_A_EXMEM; // take from EX/MEM (most recent)
        end
        else if (mem_wb_reg_write && (mem_wb_rd != 5'd0) && (mem_wb_rd == id_ex_rs1)) begin
            forwardA_alu = SRC_A_MEMWB; // take from MEM/WB (older)
        end

        // --- Forwarding for rs2 (operand B) ---
        if (ex_mem_reg_write && (ex_mem_rd != 5'd0) && (ex_mem_rd == id_ex_rs2) && (ex_B_sel != SRC_B_IMM)) begin
            forwardB_alu = SRC_B_EXMEM;
        end
        else if (mem_wb_reg_write && (mem_wb_rd != 5'd0) && (mem_wb_rd == id_ex_rs2) && (ex_B_sel != SRC_B_IMM)) begin
            forwardB_alu = SRC_B_MEMWB;
        end
    end

    always_comb begin
        // Branch forwarding logic (2-bit select)
        // Priority: EX/MEM -> MEM/WB
        // rs1
        if (ex_mem_reg_write && (ex_mem_rd != 5'd0) && (ex_mem_rd == if_id_rs1)) begin
            forwardA_br = FWD_EXMEM;
        end
        else if (mem_wb_reg_write && (mem_wb_rd != 5'd0) && (mem_wb_rd == if_id_rs1)) begin
            forwardA_br = FWD_MEMWB;
        end
        else begin
            forwardA_br = FWD_NONE;
        end

        // rs2
        if (ex_mem_reg_write && (ex_mem_rd != 5'd0) && (ex_mem_rd == if_id_rs2)) begin
            forwardB_br = FWD_EXMEM;
        end
        else if (mem_wb_reg_write && (mem_wb_rd != 5'd0) && (mem_wb_rd == if_id_rs2)) begin
            forwardB_br = FWD_MEMWB;
        end
        else begin
            forwardB_br = FWD_NONE;
        end
    end

endmodule
