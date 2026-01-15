`timescale 1ns/1ps

module tb_core;

    // Clock + Reset
    logic clk;
    logic rst;

    // DUT
    riscv_core_min dut (
        .clk(clk),
        .rst(rst)
    );

    // Clock generator — 10ns period
    always #5 clk = ~clk;

    initial begin
        // Create VCD file for GTKWave
        $dumpfile("sim/waves/tb_core_wave.vcd");
        $dumpvars(0, tb_core);

        // Init
        clk   = 0;
        rst   = 1;
        #20;
        rst   = 0;
        // Run simulation for some cycles
        repeat (500) @(posedge clk);
        // Finish
        $finish;
    end

endmodule
