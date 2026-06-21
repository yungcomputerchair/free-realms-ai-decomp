// addr: 0x0147c680
// name: CancellableStateMachineState_sub_0147c680
// subsystem: common/common/state
// source (binary assert): common/common/state/CancellableStateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CancellableStateMachineState_sub_0147c680(void * this) */

void __fastcall CancellableStateMachineState_sub_0147c680(void *this)

{
                    /* Asserts mPreviousState exists and forwards to previous-state vtable slot
                       0x78. Exact operation is unknown; likely delegates an input/state query to
                       the saved state. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPreviousState","..\\common\\common\\state\\CancellableStateMachineState.cpp",0x3f
                );
  }
                    /* WARNING: Could not recover jumptable at 0x0147c6a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 4) + 0x78))();
  return;
}

