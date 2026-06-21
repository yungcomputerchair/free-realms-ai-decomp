// addr: 0x0150fe40
// name: ProcessEventEmissionStateForActivePlayer_leaveState
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProcessEventEmissionStateForActivePlayer_leaveState(void * this) */

void __fastcall ProcessEventEmissionStateForActivePlayer_leaveState(void *this)

{
  int *piVar1;
  
                    /* Leave-state handler for ProcessEventEmissionStateForActivePlayer, notifying
                       the previous state if present or falling back to virtual leave handling. */
  if (*(int *)((int)this + 0xf4) != 0) {
    if (*(int *)((int)this + 0x13c) != 0) {
      piVar1 = (int *)StateMachineState_getCurrentTurn();
      (**(code **)(*piVar1 + 0x48))(*(undefined4 *)((int)this + 0x13c));
    }
    StateMachineState_resumePreviousWaitState();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0150fe7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x124))();
  return;
}

