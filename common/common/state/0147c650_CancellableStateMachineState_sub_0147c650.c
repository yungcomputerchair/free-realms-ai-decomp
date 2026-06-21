// addr: 0x0147c650
// name: CancellableStateMachineState_sub_0147c650
// subsystem: common/common/state
// source (binary assert): common/common/state/CancellableStateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CancellableStateMachineState_sub_0147c650(void * this) */

void __fastcall CancellableStateMachineState_sub_0147c650(void *this)

{
                    /* Asserts mPreviousState exists and forwards to previous-state vtable slot
                       0xc0. This is a cancellable-state delegation stub with no named method
                       evidence. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPreviousState","..\\common\\common\\state\\CancellableStateMachineState.cpp",0x39
                );
  }
                    /* WARNING: Could not recover jumptable at 0x0147c679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 4) + 0xc0))();
  return;
}

