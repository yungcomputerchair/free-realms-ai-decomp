// addr: 0x013efa80
// name: StateMachine_buttonPressedWithText
// subsystem: common/common/game
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 StateMachine_buttonPressedWithText(void * this, undefined4) */

undefined4 __fastcall StateMachine_buttonPressedWithText(void *this,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* Forwards a user-input/button event to the current StateMachineState after
                       asserting mCurrentState is non-null; caller
                       Game_buttonPressedWithTextAndRevealID and dispatcher case 0xb provide the
                       event context. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x15d);
  }
                    /* WARNING: Could not recover jumptable at 0x013efaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0xa0))();
  return uVar1;
}

