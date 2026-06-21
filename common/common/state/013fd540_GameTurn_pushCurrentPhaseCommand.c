// addr: 0x013fd540
// name: GameTurn_pushCurrentPhaseCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall GameTurn_pushCurrentPhaseCommand(int *param_1)

{
  void *this;
  void **unaff_ESI;
  undefined1 *vector;
  int *piStack_4;
  
                    /* Gets the current state/phase from a command object, wraps it with
                       FUN_013fd310, and pushes it onto a pointer vector. Used by ActionPlayedState
                       and command execution code. */
  piStack_4 = param_1;
  piStack_4 = (int *)(**(code **)(*param_1 + 0x3c))();
  vector = &stack0x00000004;
  this = (void *)GameTurn_CommandTree_getOrInsert(&piStack_4);
  PointerVector_pushBack(this,vector,unaff_ESI);
  return;
}

