// addr: 0x01472810
// name: DoublePassState_finishAutoSkipRejected
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool DoublePassState_finishAutoSkipRejected(void) */

bool DoublePassState_finishAutoSkipRejected(void)

{
  int *piVar1;
  
                    /* DoublePassState helper that performs the same state-service
                       notification/cleanup path as the success helper but returns false. */
  piVar1 = (int *)StateMachineState_getCurrentTurn();
  (**(code **)(*piVar1 + 0x3c))();
  FUN_013f7eb0();
  return false;
}

