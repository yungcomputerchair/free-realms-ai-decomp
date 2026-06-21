// addr: 0x014644a0
// name: ProcessEventEmissionState_leaveState
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProcessEventEmissionState_leaveState(void * this) */

void __fastcall ProcessEventEmissionState_leaveState(void *this)

{
  int *piVar1;
  
                    /* Leaves ProcessEventEmissionState by notifying the game object about the
                       previous state when present, otherwise dispatching the base/virtual
                       leave-state behavior. */
  if (*(int *)((int)this + 0xf4) != 0) {
    if (*(int *)((int)this + 0x13c) != 0) {
      piVar1 = (int *)StateMachineState_getCurrentTurn();
      (**(code **)(*piVar1 + 0x48))(*(undefined4 *)((int)this + 0x13c));
    }
    StateMachineState_resumePreviousWaitState();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014644db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x124))();
  return;
}

