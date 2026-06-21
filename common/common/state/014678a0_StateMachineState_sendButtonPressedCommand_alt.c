// addr: 0x014678a0
// name: StateMachineState_sendButtonPressedCommand_alt
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StateMachineState_sendButtonPressedCommand_alt(int button_) */

bool StateMachineState_sendButtonPressedCommand_alt(int button_)

{
  uint uVar1;
  void *pvVar2;
  void *state;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates GameCommand_ButtonPressed, marks it with field24=1, and dispatches
                       it through the game command path. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169dfdb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    state = (void *)StateMachineState_getGame(uVar1);
    pvVar2 = GameCommand_ButtonPressed_ctor(pvVar2,state);
  }
  local_4 = 0xffffffff;
  set_field_4(pvVar2,button_);
  StateCommand_setField24(pvVar2,1);
  StateMachineState_getGame(button_,pvVar2);
  Game_dispatchCommandToPlayerOrAll(button_,pvVar2);
  ExceptionList = local_c;
  return true;
}

