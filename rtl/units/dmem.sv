// dmem.sv: single-ported synchronous RAM (byte-write enables)
module dmem #(
    parameter ADDR_WIDTH = 12,   // 4096 words (16 KB)
    parameter INIT_HEX   = ""
) (
    input  logic                 clk,
    // write port
    input  logic                 we,      // write enable
    input  logic [3:0]           byte_en, // byte enables [3]=MSB ... [0]=LSB (for little-endian)
    input  logic [ADDR_WIDTH-1:0] addr_w, // word address
    input  logic [31:0]          wdata,
    // read port (sync)
    input  logic [ADDR_WIDTH-1:0] addr_r,
    input  logic                 ren,
    output logic [31:0]          rdata
);

    localparam DEPTH = (1<<ADDR_WIDTH);
    reg [31:0] mem [0:DEPTH-1];
    reg [31:0] rdata_r;

    initial begin
        if (INIT_HEX != "") begin
            $display("DMEM: loading %s", INIT_HEX);
            $readmemh(INIT_HEX, mem);
        end else begin
            integer i;
            for (i=0;i<DEPTH;i=i+1) mem[i] = 32'h0;
        end
    end

    // synchronous write and read
    always_ff @(posedge clk) begin
        if (we) begin
            // apply byte enables (little-endian)
            if (byte_en[0]) mem[addr_w][7:0]   <= wdata[7:0];
            if (byte_en[1]) mem[addr_w][15:8]  <= wdata[15:8];
            if (byte_en[2]) mem[addr_w][23:16] <= wdata[23:16];
            if (byte_en[3]) mem[addr_w][31:24] <= wdata[31:24];
        end
        if (ren) begin
            rdata_r <= mem[addr_r];
        end
    end

    assign rdata = rdata_r;

endmodule
