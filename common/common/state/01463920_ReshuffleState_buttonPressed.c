// addr: 0x01463920
// name: ReshuffleState_buttonPressed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ReshuffleState_buttonPressed(void * this, int playerId_, int buttonId_)
    */

uint __thiscall ReshuffleState_buttonPressed(void *this,int playerId_,int buttonId_)

{
  uint uVar1;
  void *pvVar2;
  void *state;
  undefined4 uVar3;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles ReshuffleState button presses by logging, creating a state command,
                       setting its field, and scheduling it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d77b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  fmt = "ReshuffleState::buttonPressed";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,fmt,uVar1);
  if (playerId_ == *(int *)((int)this + 0xe0)) {
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
    set_field_4(pvVar2,*(uint *)((int)this + 0xe0));
    StateCommand_setField24(pvVar2,buttonId_);
    uVar3 = *(undefined4 *)((int)this + 0xe0);
    StateMachineState_getGame(uVar3,pvVar2);
    Game_dispatchCommandToPlayerOrAll(uVar3,pvVar2);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

