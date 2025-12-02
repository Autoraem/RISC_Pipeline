module regfile(
    input logic         clk, //clock
    input logic         rst, //reset
    input logic         we, //write enable
    input logic  [4:0]  rs1, rs2, //read addresses
    input logic  [4:0]  rd, //write address
    input logic  [31:0] wd, //write data
    output logic [31:0] rd1, rd2 //read data outputs
);
//two read ports, one write port
//read up on specifications
    logic [31:0] regfile [31:0];

    always_ff @(posedge clk) begin
        if (rst) begin
            // Initialize register file to zero on reset
            integer i;
            for (i = 0; i < 32; i = i + 1) begin
                regfile[i] <= 32'b0;
            end
        end else if (we) begin
            regfile[rd] <= wd;
        end
    end

    assign rd1 = regfile[rs1];
    assign rd2 = regfile[rs2];

endmodule
