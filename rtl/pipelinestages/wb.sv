module writeback (
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

    always_comb begin
        unique case (wb_sel)
            2'b00: wb_data = alu_result;  // ALU writes to register
            2'b01: wb_data = mem_data;    // Load from memory
            2'b10: wb_data = pc_plus_4;   // JAL/JALR write PC+4
            default: wb_data = 32'hDEADBEEF;
        endcase
    end

    assign wb_rd     = rd_in;
    assign wb_regwen = regwrite_in;

endmodule
