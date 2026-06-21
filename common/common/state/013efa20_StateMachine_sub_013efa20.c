// addr: 0x013efa20
// name: StateMachine_sub_013efa20
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efa20(void * this) */

void __fastcall StateMachine_sub_013efa20(void *this)

{
                    /* Asserts mCurrentState is present and forwards to the current state's vtable
                       slot 0x7c. Used by a user-input case with one argument; method identity is
                       otherwise unknown. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x151);
  }
                    /* WARNING: Could not recover jumptable at 0x013efa49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0x7c))();
  return;
}

