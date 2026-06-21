// addr: 0x014723d0
// name: DoublePassState_finishAutoSkipAllowed
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool DoublePassState_finishAutoSkipAllowed(void) */

bool DoublePassState_finishAutoSkipAllowed(void)

{
  int *piVar1;
  
                    /* DoublePassState helper that notifies the game/state service through a virtual
                       call, runs a cleanup/advance helper, and returns true. */
  piVar1 = (int *)StateMachineState_getCurrentTurn();
  (**(code **)(*piVar1 + 0x3c))();
  FUN_013f7eb0();
  return true;
}

