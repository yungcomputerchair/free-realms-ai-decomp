// addr: 0x013ef980
// name: StateMachine_sub_013ef980
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013ef980(void * this) */

void __fastcall StateMachine_sub_013ef980(void *this)

{
                    /* Asserts mCurrentState is present and forwards to the current state's vtable
                       slot 0x54. Called from the user-input switch for type 1, but the concrete
                       method name is not evident. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x139);
  }
                    /* WARNING: Could not recover jumptable at 0x013ef9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0x54))();
  return;
}

