// addr: 0x01466130
// name: PlaySingleCardState_actionPlayed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
PlaySingleCardState_actionPlayed(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string 'Got an actionPlayed
                       from %d instead of %d.'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169dd16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = PackedActionId_getLow12Bits(param_4,DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  uVar2 = PackedActionId_getHighBits(param_4,uVar2);
  fmt = "PlaySingleCardState::actionPlayed (%d,%d,%d - %d)\n";
  iVar4 = param_2;
  pvVar3 = (void *)StateMachineState_getGame
                             ("PlaySingleCardState::actionPlayed (%d,%d,%d - %d)\n",param_2,param_3,
                              uVar2);
  Game_logGeneral(pvVar3,fmt,iVar4);
  piVar1 = (int *)param_1[0x40];
  if (piVar1 < (int *)param_1[0x3f]) {
    FUN_00d83c2d();
  }
  piVar5 = (int *)param_1[0x3f];
  if ((int *)param_1[0x40] < piVar5) {
    FUN_00d83c2d();
  }
  for (; (piVar5 != piVar1 && (*piVar5 != param_3)); piVar5 = piVar5 + 1) {
  }
  piVar1 = (int *)param_1[0x40];
  if (piVar1 < (int *)param_1[0x3f]) {
    FUN_00d83c2d();
  }
  if (param_1 == (int *)0xffffff08) {
    FUN_00d83c2d();
  }
  if (piVar5 == piVar1) {
    uVar2 = StateMachineState_getGame("Got a non valid target!");
    Game_logGeneralFormatted(uVar2);
    (**(code **)(*param_1 + 0x88))();
    uVar2 = 0;
  }
  else {
    StateMachineState_getActivePlayer();
    iVar4 = GamePlayer_getPlayerId();
    if (iVar4 == param_2) {
      uVar6 = StateMachineState_getGame(param_3);
      pvVar3 = find_play_element_in_maps((void *)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar2 = 0;
      if (pvVar3 == (void *)0x0) {
        uVar2 = StateMachineState_getGame("couldn\'t get element from id %d!\n",param_3);
        Game_logGeneralFormatted(uVar2);
        (**(code **)(*param_1 + 0x88))();
        uVar2 = 0;
      }
      else {
        iVar4 = FUN_00d8d382(pvVar3,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor
                             ,0);
        if (iVar4 == 0) {
          uVar2 = StateMachineState_getGame("couldn\'t get card from element %d!\n",param_3);
          Game_logGeneralFormatted(uVar2);
          (**(code **)(*param_1 + 0x88))();
          uVar2 = 0;
        }
        else {
          pvVar3 = Mem_Alloc(0x18);
          local_4 = 0;
          if (pvVar3 != (void *)0x0) {
            uVar2 = ReturnValueMap_ctor();
          }
          local_4 = 0xffffffff;
          ReturnValueMap_setInteger(4,param_2);
          ReturnValueMap_setInteger(3,param_3);
          ReturnValueMap_setInteger(5,param_4);
          set_boolean_value_key_17(true);
          set_boolean_value_key_18(true);
          set_value_boolean(0x1d,true);
          set_value_boolean(8,true);
          StateMachine_pushPendingState(uVar2);
          pvVar3 = Mem_Alloc(0x19c);
          local_4 = 1;
          if (pvVar3 == (void *)0x0) {
            pvVar3 = (void *)0x0;
          }
          else {
            pvVar3 = ActionPlayedState_copy_ctor(pvVar3,(void *)param_1[2]);
          }
          local_4 = 0xffffffff;
          uVar2 = StateMachine_setCurrentState(pvVar3);
        }
      }
    }
    else {
      StateMachineState_getActivePlayer(param_2);
      uVar2 = GamePlayer_getPlayerId();
      uVar2 = StateMachineState_getGame("Got an actionPlayed from %d instead of %d.",uVar2);
      Game_logGeneralFormatted(uVar2);
      (**(code **)(*param_1 + 0x88))();
      uVar2 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar2;
}

