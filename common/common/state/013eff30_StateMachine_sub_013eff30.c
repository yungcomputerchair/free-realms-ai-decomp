// addr: 0x013eff30
// name: StateMachine_sub_013eff30
// subsystem: common/common/game
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 StateMachine_sub_013eff30(void * this, undefined4) */

undefined4 __fastcall StateMachine_sub_013eff30(void *this,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* StateMachine.cpp current-state forwarding stub: asserts mCurrentState and
                       dispatches through the current state vtable at offset 0xe4. Event identity is
                       not evident from strings/caller name. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x2ab);
  }
                    /* WARNING: Could not recover jumptable at 0x013eff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0xe4))();
  return uVar1;
}

