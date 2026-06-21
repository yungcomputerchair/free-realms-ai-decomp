// addr: 0x0147c620
// name: CancellableStateMachineState_sub_0147c620
// subsystem: common/common/state
// source (binary assert): common/common/state/CancellableStateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CancellableStateMachineState_sub_0147c620(void * this) */

void __fastcall CancellableStateMachineState_sub_0147c620(void *this)

{
                    /* Asserts mPreviousState exists and forwards to previous-state vtable slot
                       0xb8. Exact delegated method is not evidenced by strings. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPreviousState","..\\common\\common\\state\\CancellableStateMachineState.cpp",0x33
                );
  }
                    /* WARNING: Could not recover jumptable at 0x0147c649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 4) + 0xb8))();
  return;
}

