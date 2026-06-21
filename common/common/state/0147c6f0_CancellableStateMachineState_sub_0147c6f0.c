// addr: 0x0147c6f0
// name: CancellableStateMachineState_sub_0147c6f0
// subsystem: common/common/state
// source (binary assert): common/common/state/CancellableStateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CancellableStateMachineState_sub_0147c6f0(void * this) */

void __fastcall CancellableStateMachineState_sub_0147c6f0(void *this)

{
                    /* Asserts mPreviousState exists and forwards to previous-state vtable slot
                       0x8c. This is a forwarding method; exact name is not evident. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPreviousState","..\\common\\common\\state\\CancellableStateMachineState.cpp",0x55
                );
  }
                    /* WARNING: Could not recover jumptable at 0x0147c719. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 4) + 0x8c))();
  return;
}

