// addr: 0x013efae0
// name: StateMachine_sub_013efae0
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efae0(void * this) */

void __fastcall StateMachine_sub_013efae0(void *this)

{
                    /* Asserts mCurrentState is present and forwards to current-state vtable slot
                       0xa8. Called from a user-input case carrying three values; the specific
                       handler name is unknown. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x16b);
  }
                    /* WARNING: Could not recover jumptable at 0x013efb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0xa8))();
  return;
}

