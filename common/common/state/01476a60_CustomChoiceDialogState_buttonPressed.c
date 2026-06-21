// addr: 0x01476a60
// name: CustomChoiceDialogState_buttonPressed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CustomChoiceDialogState_buttonPressed(void * this, int playerId_, int
   buttonId_) */

uint __thiscall CustomChoiceDialogState_buttonPressed(void *this,int playerId_,int buttonId_)

{
  code *pcVar1;
  void *pvVar2;
  uint uVar3;
  void *state;
  char *fmt;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles CustomChoiceDialogState button presses by logging the player/button
                       and scheduling a state command for the selection. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f91b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fmt = "CustomChoiceDialogState::button pressed, player %d, button %d";
  iVar4 = playerId_;
  pvVar2 = (void *)StateMachineState_getGame
                             ("CustomChoiceDialogState::button pressed, player %d, button %d",
                              playerId_,buttonId_,DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  Game_logGeneral(pvVar2,fmt,iVar4);
  if (playerId_ == *(int *)((int)this + 0xf8)) {
    pvVar2 = Mem_Alloc(0x30);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      state = (void *)StateMachineState_getGame();
      pvVar2 = GameCommand_ButtonPressed_ctor(pvVar2,state);
    }
    local_4 = 0xffffffff;
    set_field_4(pvVar2,playerId_);
    StateCommand_setField24(pvVar2,buttonId_);
    StateMachineState_getGame(playerId_,pvVar2);
    Game_dispatchCommandToPlayerOrAll(playerId_,pvVar2);
    if (*(int *)((int)this + 0x124) == 3) {
      pcVar1 = *(code **)(*(int *)this + 0x3c);
      *(int *)((int)this + 0x120) = buttonId_;
      *(undefined4 *)((int)this + 0x124) = 4;
      uVar3 = (*pcVar1)();
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 0;
  }
  ExceptionList = local_c;
  return uVar3;
}

