// addr: 0x0147c5d0
// name: CancellableStateMachineState_sub_0147c5d0
// subsystem: common/common/state
// source (binary assert): common/common/state/CancellableStateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CancellableStateMachineState_sub_0147c5d0(void * this) */

void __fastcall CancellableStateMachineState_sub_0147c5d0(void *this)

{
                    /* Asserts mPreviousState exists and forwards to the previous state's vtable
                       slot 0xbc. This is a CancellableStateMachineState delegating behavior to the
                       previous state; exact method name is not evident. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPreviousState","..\\common\\common\\state\\CancellableStateMachineState.cpp",0x1f
                );
  }
                    /* WARNING: Could not recover jumptable at 0x0147c5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 4) + 0xbc))();
  return;
}

