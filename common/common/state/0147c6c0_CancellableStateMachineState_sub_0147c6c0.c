// addr: 0x0147c6c0
// name: CancellableStateMachineState_sub_0147c6c0
// subsystem: common/common/state
// source (binary assert): common/common/state/CancellableStateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CancellableStateMachineState_sub_0147c6c0(void * this) */

void __fastcall CancellableStateMachineState_sub_0147c6c0(void *this)

{
                    /* Asserts mPreviousState exists and forwards to previous-state vtable slot
                       0x88. The delegated method is not named in the available context. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPreviousState","..\\common\\common\\state\\CancellableStateMachineState.cpp",0x4a
                );
  }
                    /* WARNING: Could not recover jumptable at 0x0147c6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 4) + 0x88))();
  return;
}

