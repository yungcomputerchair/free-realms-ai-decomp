// addr: 0x013efc00
// name: StateMachine_sub_013efc00
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efc00(void * this) */

void __fastcall StateMachine_sub_013efc00(void *this)

{
                    /* Asserts mCurrentState is present and forwards to current-state vtable slot
                       0x74. Called by user-input type 8; specific handler unknown. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x193);
  }
                    /* WARNING: Could not recover jumptable at 0x013efc29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0x74))();
  return;
}

