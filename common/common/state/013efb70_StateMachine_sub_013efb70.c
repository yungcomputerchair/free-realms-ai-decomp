// addr: 0x013efb70
// name: StateMachine_sub_013efb70
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efb70(void * this) */

void __fastcall StateMachine_sub_013efb70(void *this)

{
                    /* Asserts mCurrentState is present and forwards to current-state vtable slot
                       0x68. Called by user-input type 5; exact handler name is not evident. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x17f);
  }
                    /* WARNING: Could not recover jumptable at 0x013efb99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0x68))();
  return;
}

