// addr: 0x013f0050
// name: StateMachine_sub_013f0050
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013f0050(void * this) */

void __fastcall StateMachine_sub_013f0050(void *this)

{
                    /* Asserts mCurrentState is present and forwards to current-state vtable slot
                       0x110. Callers in game flow use it, but no strings identify the method. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x34f);
  }
                    /* WARNING: Could not recover jumptable at 0x013f007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0x110))();
  return;
}

