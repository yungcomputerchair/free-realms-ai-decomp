// addr: 0x0144f860
// name: CWDoublePassState_actionPlayed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall CWDoublePassState_actionPlayed(int *param_1,int param_2,void *param_3,int param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  char *fmt;
  
                    /* Implements the operation identified by referenced string
                       'CWDoublePassState::actionPlayed %d, %d, %d (%d)'. */
  uVar1 = PackedActionId_getLow12Bits(param_4);
  uVar1 = PackedActionId_getHighBits(param_4,uVar1);
  fmt = "CWDoublePassState::actionPlayed %d, %d, %d (%d)";
  iVar4 = param_2;
  pvVar2 = (void *)StateMachineState_getGame
                             ("CWDoublePassState::actionPlayed %d, %d, %d (%d)",param_2,param_3,
                              uVar1);
  Game_logGeneral(pvVar2,fmt,iVar4);
  pvVar2 = (void *)StateMachineState_getCurrentTurn();
  uVar3 = get_field_8(pvVar2);
  if (uVar3 != 0) {
    pvVar2 = (void *)StateMachineState_getCurrentTurn();
    get_field_8(pvVar2);
    iVar4 = GamePlayer_getPlayerId();
    if (param_2 != iVar4) {
      (**(code **)(*param_1 + 0x88))();
      return 0;
    }
  }
  uVar3 = DoublePassState_actionPlayed(param_1,param_2,param_3,param_4);
  return uVar3;
}

