module wb (
    // From MEM/WB pipeline register
    input  logic [31:0] mem_data,       // loaded data from memory
    input  logic [31:0] alu_result,     // ALU result from EX/MEM
    input  logic [31:0] pc_plus_4,      // for JAL/JALR writeback
    input  logic [1:0]  wb_sel,         // select source for writeback
    input  logic [4:0]  rd_in,          // register to write
    input  logic        regwrite_in,    // write enable coming from control

    // To register file (decode stage)
    output logic [4:0]  wb_rd,
    output logic [31:0] wb_data,
    output logic        wb_regwen
);
    import control_pkg::*;
    always_comb begin
        unique case (wb_sel)
            WB_FROM_ALU         : wb_data = alu_result;  // ALU writes to register
            WB_FROM_MEM         : wb_data = mem_data;    // Load from memory
            WB_FROM_PC_PLUS_4   : wb_data = pc_plus_4;   // JAL/JALR write PC+4
            default: wb_data = 32'hDEADBEEF;
        endcase
    end

    assign wb_rd     = rd_in;
    assign wb_regwen = regwrite_in;

endmodule
