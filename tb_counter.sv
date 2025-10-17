// tb_counter.sv
module tb_counter;
    logic clk;
    logic reset;
    logic [3:0] count;

    // Instantiate DUT (Design Under Test)
    counter dut (
        .clk(clk),
        .reset(reset),
        .count(count)
    );

    // Clock generation: 10ns period
    initial clk = 0;
    always #5 clk = ~clk;

    // Test sequence
    initial begin
        // Create VCD file for GTKWave
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_counter);

        // Initialize
        reset = 1;
        #10;
        reset = 0;

        // Run for a while
        #1000;

        // End simulation
        $finish;
    end
endmodule
