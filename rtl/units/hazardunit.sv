`timescale 1ns/1ps
module hazardunit
(
    // -------------------------------
    // Inputs
    // -------------------------------

    // From ID stage (IF/ID register)
    input  logic        id_valid,
    input  logic [4:0]  id_rs1,
    input  logic [4:0]  id_rs2,
    // input  logic        id_uses_rs1,
    // input  logic        id_uses_rs2,
    input  instruction_type_e id_instruction_type,
    input  instruction_type_e ex_instruction_type,
    // From EX stage (ID/EX register)
    input  logic        ex_valid,
    input  logic [4:0]  ex_rd,
    // input  logic        ex_is_load,     // EX instruction is LW/LH/LHU/LB/LBU

    // Branch/jump resolved in EX
    // input  logic        ex_branch,
    // input  logic        ex_jump,
    input  logic        ex_taken,
    input  logic [31:0] ex_target,
    input  logic [31:0] ex_pc_plus_4,

    // -------------------------------
    // Outputs
    // -------------------------------
    output logic        stall_pc,
    output logic        stall_ifid,
    output logic        flush_ifid,
    output logic        flush_idex
);
    import control_pkg::*;
    // instruction decoding
    logic id_uses_rs1;
    logic id_uses_rs2;
    logic ex_is_load;
    logic ex_branch;
    logic ex_jump;

    always_comb begin
        // -----------------------------
        // Determine if ID instruction uses rs1/rs2
        // -----------------------------
        case (id_instruction_type)
            OP_R_TYPE: begin
                id_uses_rs1 = 1'b1;
                id_uses_rs2 = 1'b1;
            end
            OP_I_TYPE: begin
                id_uses_rs1 = 1'b1;
                id_uses_rs2 = 1'b0;
            end
            OP_LOAD: begin
                id_uses_rs1 = 1'b1;
                id_uses_rs2 = 1'b0;
            end
            OP_STORE: begin
                id_uses_rs1 = 1'b1;
                id_uses_rs2 = 1'b1;
            end
            OP_BRANCH: begin
                id_uses_rs1 = 1'b1;
                id_uses_rs2 = 1'b1;
            end
            OP_JAL,
            OP_JALR: begin
                id_uses_rs1 = 1'b1;
                id_uses_rs2 = 1'b0;
            end
            OP_LUI: begin
                id_uses_rs1 = 1'b0;
                id_uses_rs2 = 1'b0;
            end
            OP_AUIPC: begin
                id_uses_rs1 = 1'b0;
                id_uses_rs2 = 1'b0;
            end
            OP_SYSTEM: begin
                id_uses_rs1 = 1'b0;
                id_uses_rs2 = 1'b0;
            end
            OP_FENCE: begin
                id_uses_rs1 = 1'b0;
                id_uses_rs2 = 1'b0;
            end
            OP_NOP: begin
                id_uses_rs1 = 1'b0;
                id_uses_rs2 = 1'b0;
            end
            default: begin
                id_uses_rs1 = 1'b0;
                id_uses_rs2 = 1'b0;
            end
        endcase

        // -----------------------------
        // Determine if EX instruction is load
        // -----------------------------
        ex_is_load = (ex_instruction_type == OP_LOAD);

        // -----------------------------
        // Determine if EX instruction is branch/jump
        // -----------------------------
        ex_branch = (ex_instruction_type == OP_BRANCH);
        ex_jump   = (ex_instruction_type == OP_JAL) || 
                    (ex_instruction_type == OP_JALR);
    end


    // ------------------------------------------------------------
    // 1. Load-Use Hazard (requires stall + bubble)
    // ------------------------------------------------------------
    // Condition:
    //   EX is a load, and ID uses rs1/rs2 equal to EX.rd
    // ------------------------------------------------------------

    logic load_use_hazard;

    assign load_use_hazard =
        ex_valid && ex_is_load &&
        (
            (id_uses_rs1 && (id_rs1 == ex_rd) && (id_rs1 != 5'd0)) ||
            (id_uses_rs2 && (id_rs2 == ex_rd) && (id_rs2 != 5'd0))
        );

    // ------------------------------------------------------------
    // 2. Control Hazard: Always predict not taken
    // ------------------------------------------------------------
    // Mispredict when a branch is actually taken.
    // Jumps always redirect.
    // ------------------------------------------------------------

    logic mispredict;
    logic jump_redirect;
    logic do_redirect;

    assign mispredict    = ex_valid && ex_branch && ex_taken;
    assign jump_redirect = ex_valid && ex_jump;
    assign do_redirect   = mispredict || jump_redirect;

    // ------------------------------------------------------------
    // Stall and Flush Policy
    // ------------------------------------------------------------
    //
    // Priorities:
    //   (1) Load-use hazard → stall IF & ID, bubble EX
    //   (2) Control redirect → flush IF/ID & ID/EX
    //
    // These two cannot occur in the same cycle because the load is
    // in EX and the branch would be in EX — mutually exclusive.
    // ------------------------------------------------------------

    // Default no stalls/flushes
    assign stall_pc    = load_use_hazard;
    assign stall_ifid  = load_use_hazard;
    assign flush_idex  = load_use_hazard || do_redirect;
    assign flush_ifid  = do_redirect;    // DO NOT flush IF/ID for load-use

endmodule
