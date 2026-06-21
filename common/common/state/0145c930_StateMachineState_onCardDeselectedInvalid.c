// addr: 0x0145c930
// name: StateMachineState_onCardDeselectedInvalid
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachineState_onCardDeselectedInvalid(void * this) */

int __fastcall StateMachineState_onCardDeselectedInvalid(void *this)

{
  uint uVar1;
  char *pcVar2;
  
                    /* Default invalid-state handler for a card deselection: validates mMachine,
                       logs 'Card attempted to be deselected in an invalid state.', and returns 0.
                        */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pcVar2 = "Card attempted to be deselected in an invalid state.";
  uVar1 = get_field_4(*(void **)((int)this + 8));
  Game_logGeneralFormatted(uVar1,pcVar2);
  return 0;
}

