// imem.sv
module imem #(
    parameter ADDR_WIDTH = 10,         // 2^10 words = 1024 words
    parameter INIT_HEX   = ""
) (
    input  logic                 clk,
    input  logic                 en,      // enable fetch
    input  logic [ADDR_WIDTH-1:0] addr,   // word address (instr_addr >> 2)
    output logic [31:0]          dout
);

    localparam DEPTH = (1<<ADDR_WIDTH);

    // memory array of 32-bit words
    reg [31:0] mem [0:DEPTH-1];

    // synchronous read register
    reg [31:0] dout_r;

    initial begin
        if (INIT_HEX != "") begin
            $display("IMEM: loading %s", INIT_HEX);
            $readmemh(INIT_HEX, mem);
        end else begin
            // optional: zero-init
            integer i;
            for (i = 0; i < DEPTH; i = i + 1) mem[i] = 32'h0000_0000;
        end 
    end

    always_ff @(posedge clk) begin
        if (en) dout_r <= mem[addr];
    end
    assign dout = dout_r;
endmodule
