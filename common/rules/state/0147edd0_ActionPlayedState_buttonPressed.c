// addr: 0x0147edd0
// name: ActionPlayedState_buttonPressed
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall ActionPlayedState_buttonPressed(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  void *state;
  undefined4 uVar5;
  int playerId_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles ActionPlayedState yes/no button responses while in state 0xe, updates
                       internal accepted/cancel flags, dispatches a ButtonPressed command, and
                       advances updateState. Evidence is action-play field layout and pairing with
                       the string-based button handler at 0147f020. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a063b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((param_1[0x45] == 0xe) && (param_1[0x48] != 0)) &&
     (uVar2 = GamePlayer_getPlayerId(DAT_01b839d8 ^ (uint)&stack0xffffffe4), param_2 == uVar2)) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 0x47) = 1;
      *(undefined1 *)((int)param_1 + 0x125) = 1;
    }
    else if (param_3 == 2) {
      piVar3 = (int *)StateMachineState_getCurrentTurn();
      playerId_ = param_1[0x3f];
      iVar1 = *piVar3;
      pvVar4 = (void *)StateMachineState_getGame();
      pvVar4 = PlayArea_findPlayerElementById(pvVar4,playerId_);
      (**(code **)(iVar1 + 0x48))(pvVar4);
      *(undefined1 *)(param_1 + 0x47) = 0;
    }
    pvVar4 = Mem_Alloc(0x30);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      state = (void *)StateMachineState_getGame();
      pvVar4 = GameCommand_ButtonPressed_ctor(pvVar4,state);
    }
    local_4 = 0xffffffff;
    set_field_4(pvVar4,param_2);
    StateCommand_setField24(pvVar4,param_3);
    StateMachineState_getGame(param_2,pvVar4);
    Game_dispatchCommandToPlayerOrAll(param_2,pvVar4);
    uVar5 = (**(code **)(*param_1 + 0x38))();
    ExceptionList = local_c;
    return uVar5;
  }
  ExceptionList = local_c;
  return 2;
}

