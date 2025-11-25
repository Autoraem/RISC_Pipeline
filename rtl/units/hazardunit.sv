// -----------------------------------------------------------
// Hazard detection unit for a 5-stage RISC-V pipeline
// Detects:
//   • Load-use data hazards
//   • (Optional) EX-stage hazards for branches in ID
// Generates:
//   • stall_pc      – stops PC from updating
//   • stall_if_id   – freezes IF/ID pipeline register
//   • flush_id_ex   – inserts bubble into ID/EX
// -----------------------------------------------------------
module hazard_unit (
    // ID stage (current instruction)
    input  logic [4:0] id_rs1,
    input  logic [4:0] id_rs2,
    input  logic       id_uses_rs1,
    input  logic       id_uses_rs2,
    input  logic       id_is_branch,   // for branch hazard detection

    // EX stage (instruction ahead of ID)
    input  logic [4:0] ex_rd,
    input  logic       ex_reg_write,
    input  logic       ex_mem_read,    // EX is a load instruction?

    // Outputs
    output logic       stall_pc,
    output logic       stall_if_id,
    output logic       flush_id_ex
);

    // ==========================================
    // Load-use Hazard
    // ==========================================
    logic load_use_hazard;

    assign load_use_hazard =
        ex_mem_read &&                            // EX is a load
        (ex_rd != 0) &&                            // not x0
        ((id_uses_rs1 && (ex_rd == id_rs1)) ||
         (id_uses_rs2 && (ex_rd == id_rs2)));      // ID depends on it

    // ==========================================
    // Branch Operand Hazard
    // (If branch is in ID and EX will write rs1/rs2)
    // ==========================================
    logic branch_hazard;

    assign branch_hazard =
        id_is_branch &&
        ex_reg_write &&
        (ex_rd != 0) &&
        ((id_uses_rs1 && (ex_rd == id_rs1)) ||
         (id_uses_rs2 && (ex_rd == id_rs2)));

    // ==========================================
    // Stall & Flush Logic
    // ==========================================
    assign stall_pc    = load_use_hazard || branch_hazard;
    assign stall_if_id = load_use_hazard || branch_hazard;

    // Insert bubble into ID/EX stage
    assign flush_id_ex = load_use_hazard || branch_hazard;

endmodule
