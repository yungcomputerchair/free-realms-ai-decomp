// addr: 0x013efed0
// name: StateMachine_sub_013efed0
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efed0(void * this) */

void __fastcall StateMachine_sub_013efed0(void *this)

{
                    /* Asserts mCurrentState is present and forwards to current-state vtable slot
                       0xd4. The method name is not evident from strings or callers. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x29f);
  }
                    /* WARNING: Could not recover jumptable at 0x013efefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0xd4))();
  return;
}

