// addr: 0x01503e50
// name: MoveActionNode_setMoveDestination
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall MoveActionNode_setMoveDestination(int param_1,undefined4 param_2)

{
                    /* Stores a 32-bit value at offset 0x124; one caller is MoveActionNode_evaluate
                       and action-play update uses it while resolving move actions. Evidence is the
                       named MoveActionNode_evaluate caller. */
  *(undefined4 *)(param_1 + 0x124) = param_2;
  return;
}

