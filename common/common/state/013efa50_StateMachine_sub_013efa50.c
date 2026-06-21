// addr: 0x013efa50
// name: StateMachine_sub_013efa50
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_sub_013efa50(void * this) */

void __fastcall StateMachine_sub_013efa50(void *this)

{
                    /* Asserts mCurrentState is present and forwards to the current state's vtable
                       slot 0x80. The calling switch suggests a state input handler, but no symbolic
                       method evidence is present. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x157);
  }
                    /* WARNING: Could not recover jumptable at 0x013efa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0x18) + 0x80))();
  return;
}

