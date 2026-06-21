// addr: 0x013efbd0
// name: StateMachine_sub_013efbd0
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efbd0(void * this) */

void __fastcall StateMachine_sub_013efbd0(void *this)

{
                    /* Asserts mCurrentState is present and forwards to current-state vtable slot
                       0x70. Called by user-input type 7; method name is not otherwise evidenced. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x18b);
  }
                    /* WARNING: Could not recover jumptable at 0x013efbf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0x70))();
  return;
}

