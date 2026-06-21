// addr: 0x013ef950
// name: StateMachine_sub_013ef950
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013ef950(void * this) */

void __fastcall StateMachine_sub_013ef950(void *this)

{
                    /* Asserts mCurrentState is present and forwards to the current state's vtable
                       slot 0x60. Evidence is StateMachine.cpp line 0x132 and mCurrentState
                       assertion; exact method name is not evident. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x132);
  }
                    /* WARNING: Could not recover jumptable at 0x013ef979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0x60))();
  return;
}

