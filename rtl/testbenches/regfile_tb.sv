module regfile_tb;
    logic         clk;
    logic         we;
    logic         rst;
    logic  [4:0]  rs1, rs2;
    logic  [4:0]  rd;
    logic  [31:0] wd;
    logic [31:0] rd1, rd2;

    regfile dut (
        .clk(clk),
        .we(we),
        .rst(rst),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .wd(wd),
        .rd1(rd1),
        .rd2(rd2)
    );

    // Clock generation: 10ns period
    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        // Create VCD file for GTKWave
        $dumpfile("sim/waves/regfile_tb_wave.vcd");
        $dumpvars(0, regfile_tb);

        // Test sequence
        rst = 1;
        we = 0;
        rs1 = 5'd0; rs2 = 5'd0; rd = 5'd0; wd = 32'd0;
        #10;
        rst = 0;

        // Write to register 5
        we = 1; rd = 5'd5; wd = 32'd42;
        #10;

        // Read from register 5
        we = 0; rs1 = 5'd5; rs2 = 5'd0;
        #10;

        // Write to register 10
        we = 1; rd = 5'd10; wd = 32'd84;
        #10;

        // Read from registers 5 and 10
        we = 0; rs1 = 5'd5; rs2 = 5'd10;
        #10;
        
        rst = 1; // Reset
        #10;
        rst = 0; // Release reset
        // End simulation
        $finish;
    end

endmodule