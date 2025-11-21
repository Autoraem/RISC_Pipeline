module alu_tb;
    logic       [31:0]    A;
    logic       [31:0]    B;
    logic       [3:0]     Opcode;
    logic       [31:0]    Q;
    logic                Zero;
    logic                Neg;
    logic                Overflow;


    alu dut (
        .A(A),
        .B(B),
        .Opcode(Opcode),
        .Q(Q),
        .Zero(Zero),
        .Neg(Neg),
        .Overflow(Overflow)
    );

    initial begin
        // Create VCD file for GTKWave
        $dumpfile("sim/waves/wave.vcd");
        $dumpvars(0, alu_tb);
        // Test cases
        A = 32'd15; B = 32'd10; Opcode = 4'd0; // ADD
        #10;
        A = 32'd20; B = 32'd5; Opcode = 4'd1;  // SUB
        #10;
        A = 32'd12; B = 32'd5; Opcode = 4'd2;  // AND
        #10;
        A = 32'd12; B = 32'd5; Opcode = 4'd3;  // OR
        #10;
        A = 32'd12; B = 32'd5; Opcode = 4'd4;  // XOR
        #10;
        A = 32'd8; B = 32'd2; Opcode = 4'd5;   // SLL
        #10;
        A = 32'd8; B = 32'd2; Opcode = 4'd6;   // SRL
        #10;
        A = -32'sd8; B = 32'd2; Opcode = 4'd7; // SRA
        #10;
        A = -32'sd5; B = 32'sd3; Opcode = 4'd8; // SLT
        #10;
        A = 32'd5; B = 32'd3; Opcode = 4'd9;   // SLTU
        #10;

        $finish;
        //output zero, neg, overflow flags
        $display("Zero: %b, Neg: %b, Overflow: %b", Zero, Neg, Overflow);
    end

endmodule