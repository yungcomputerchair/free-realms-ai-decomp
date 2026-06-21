// addr: 0x01467640
// name: PlayCardState_actionPlayed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
PlayCardState_actionPlayed(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int *this;
  int iVar4;
  void *this_00;
  undefined8 uVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Implements the operation identified by referenced string 'Got an actionPlayed
                       from %d instead of %d.'. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169dfab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = PackedActionId_getLow12Bits(param_4,DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  uVar1 = PackedActionId_getHighBits(param_4,uVar1);
  pcVar6 = "PlayCardState::actionPlayed (%d,%d,%d - %d)\n";
  iVar3 = param_2;
  pvVar2 = (void *)StateMachineState_getGame
                             ("PlayCardState::actionPlayed (%d,%d,%d - %d)\n",param_2,param_3,uVar1)
  ;
  Game_logGeneral(pvVar2,pcVar6,iVar3);
  StateMachineState_getActivePlayer();
  iVar3 = GamePlayer_getPlayerId();
  if (iVar3 == param_2) {
    uVar5 = StateMachineState_getGame(param_3);
    pvVar2 = find_play_element_in_maps((void *)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if (pvVar2 == (void *)0x0) {
      uVar1 = StateMachineState_getGame("couldn\'t get element from id %d!\n",param_3);
      Game_logGeneralFormatted(uVar1);
      (**(code **)(*param_1 + 0x88))();
      uVar1 = 0;
    }
    else {
      this = (int *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
      if (this == (int *)0x0) {
        uVar1 = StateMachineState_getGame("couldn\'t get card from element %d!\n",param_3);
        Game_logGeneralFormatted(uVar1);
        (**(code **)(*param_1 + 0x88))();
        uVar1 = 0;
      }
      else {
        uVar5 = (**(code **)(*this + 0xcc))();
        iVar3 = (int)((ulonglong)uVar5 >> 0x20);
        if ((int)uVar5 != 0) {
          uVar5 = FUN_01321f20();
          iVar3 = (int)((ulonglong)uVar5 >> 0x20);
          if ((int)uVar5 == param_4) {
            iVar4 = (**(code **)(*this + 0x30))();
            iVar3 = param_2;
            pvVar2 = (void *)StateMachineState_getGame();
            pvVar2 = PlayArea_findPlayerElementById(pvVar2,iVar3);
            PlayElement_getGame();
            uVar5 = FUN_0139d7c0();
            iVar3 = (int)((ulonglong)uVar5 >> 0x20);
            if (iVar4 != (int)uVar5) {
              pcVar6 = "You may only play cards out of hand.";
              this_00 = (void *)StateMachineState_getGame();
              GamePlayer_logFormattedMessage(this_00,(int)pvVar2,pcVar6);
              uVar1 = StateMachineState_getGame("tried to play card not in hand!\n");
              Game_logGeneralFormatted(uVar1);
              (**(code **)(*param_1 + 0x88))();
              ExceptionList = local_c;
              return 0;
            }
          }
        }
        pvVar2 = Card_getActionByID(this,iVar3);
        uVar1 = 0;
        if (pvVar2 == (void *)0x0) {
          FUN_012f5dc0("PlayCardState::actionPlayed couldn\'t get action: %d, %d",param_3,param_4);
        }
        *(undefined1 *)(param_1 + 0x3e) = 1;
        pvVar2 = Mem_Alloc(0x18);
        uStack_4 = 0;
        if (pvVar2 != (void *)0x0) {
          uVar1 = ReturnValueMap_ctor();
        }
        uStack_4 = 0xffffffff;
        ReturnValueMap_setInteger(4,param_2);
        ReturnValueMap_setInteger(3,param_3);
        ReturnValueMap_setInteger(5,param_4);
        StateMachine_pushPendingState(uVar1);
        uVar1 = (**(code **)(*(int *)param_1[2] + 0x4c))();
        uVar1 = StateMachine_setCurrentState(uVar1);
      }
    }
  }
  else {
    StateMachineState_getActivePlayer(param_2);
    uVar1 = GamePlayer_getPlayerId();
    uVar1 = StateMachineState_getGame("Got an actionPlayed from %d instead of %d.",uVar1);
    Game_logGeneralFormatted(uVar1);
    (**(code **)(*param_1 + 0x88))();
    uVar1 = 0;
  }
  ExceptionList = local_c;
  return uVar1;
}

