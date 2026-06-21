// addr: 0x013efc30
// name: StateMachine_sub_013efc30
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efc30(void * this) */

void __fastcall StateMachine_sub_013efc30(void *this)

{
                    /* Asserts mCurrentState is present and forwards to current-state vtable slot
                       0xb0. Used by user-input type 0x10; exact method is not named. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x199);
  }
                    /* WARNING: Could not recover jumptable at 0x013efc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0xb0))();
  return;
}

