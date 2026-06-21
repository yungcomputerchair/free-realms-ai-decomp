// addr: 0x014603a0
// name: StateMachineState_buttonPressedForExpectedPlayer
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
StateMachineState_buttonPressedForExpectedPlayer(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  void *state;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles a button press only when the player matches the expected player field
                       and button 1 was pressed, dispatching a ButtonPressed command and resuming
                       the previous wait state. Exact class is unclear from this isolated function.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d2cb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  if ((param_2 == *(uint *)(param_1 + 0xf8)) && (param_3 == 1)) {
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
    set_field_4(pvVar2,param_2);
    StateCommand_setField24(pvVar2,1);
    StateMachineState_getGame(param_2,pvVar2);
    Game_dispatchCommandToPlayerOrAll(param_2,pvVar2);
    uVar3 = StateMachineState_resumePreviousWaitState();
    ExceptionList = local_c;
    return uVar3;
  }
  return 2;
}

