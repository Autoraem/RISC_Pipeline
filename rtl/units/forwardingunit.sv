// forwarding_unit.sv
// Forwarding (bypass) unit for a 5-stage pipeline (IF-ID-ID/EX-EX-EX/MEM-MEM/WB-WB)
//
// Produces forward controls for ALU input A and B in EX stage:
//   2'b00 -> use operand from register file (no forward)
//   2'b01 -> forward from MEM/WB (writeback stage)
//   2'b10 -> forward from EX/MEM (just-computed ALU result in MEM stage)
//
// Note: load-use hazards still require the hazard unit to insert a stall
// when EX stage is a load that produces the needed data.

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

    // Outputs: forwarding select for ALU inputs
    // forwardA selects source for ALU operand A (rs1)
    // forwardB selects source for ALU operand B (rs2)
    output logic [1:0] forwardA,
    output logic [1:0] forwardB
);

    // Default: no forwarding
    always_comb begin
        forwardA = 2'b00;
        forwardB = 2'b00;

        // --- Forwarding for rs1 (operand A) ---
        // Priority: EX/MEM -> MEM/WB
        if (ex_mem_reg_write && (ex_mem_rd != 5'd0) && (ex_mem_rd == id_ex_rs1)) begin
            forwardA = 2'b10; // take from EX/MEM (most recent)
        end
        else if (mem_wb_reg_write && (mem_wb_rd != 5'd0) && (mem_wb_rd == id_ex_rs1)) begin
            forwardA = 2'b01; // take from MEM/WB (older)
        end

        // --- Forwarding for rs2 (operand B) ---
        if (ex_mem_reg_write && (ex_mem_rd != 5'd0) && (ex_mem_rd == id_ex_rs2)) begin
            forwardB = 2'b10;
        end
        else if (mem_wb_reg_write && (mem_wb_rd != 5'd0) && (mem_wb_rd == id_ex_rs2)) begin
            forwardB = 2'b01;
        end
    end

endmodule
