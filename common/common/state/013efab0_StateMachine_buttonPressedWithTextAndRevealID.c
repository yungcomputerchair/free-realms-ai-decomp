// addr: 0x013efab0
// name: StateMachine_buttonPressedWithTextAndRevealID
// subsystem: common/common/game
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 StateMachine_buttonPressedWithTextAndRevealID(void * this,
   undefined4) */

undefined4 __fastcall StateMachine_buttonPressedWithTextAndRevealID(void *this,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* Forwards a richer button/text/reveal user-input event to the current
                       StateMachineState after the mCurrentState assert; evidence is
                       StateMachine.cpp plus Game_buttonPressedWithTextAndRevealID and dispatcher
                       case 0xc. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x164);
  }
                    /* WARNING: Could not recover jumptable at 0x013efadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0xa4))();
  return uVar1;
}

