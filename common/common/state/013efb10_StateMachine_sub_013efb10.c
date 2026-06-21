// addr: 0x013efb10
// name: StateMachine_sub_013efb10
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efb10(void * this) */

void __fastcall StateMachine_sub_013efb10(void *this)

{
                    /* Asserts mCurrentState is present and forwards to current-state vtable slot
                       0xac. It is reached from a user-input switch case, but exact semantics are
                       not named. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x171);
  }
                    /* WARNING: Could not recover jumptable at 0x013efb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0xac))();
  return;
}

