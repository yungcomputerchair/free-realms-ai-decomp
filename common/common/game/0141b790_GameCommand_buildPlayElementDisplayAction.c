// addr: 0x0141b790
// name: GameCommand_buildPlayElementDisplayAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall GameCommand_buildPlayElementDisplayAction(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int value_;
  void *this;
  undefined8 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds a display action from a command/play element context, adding object
                       and integer arguments for the local/current player and state. Exact command
                       subclass is not identified. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01693a5b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  pvVar2 = (void *)StateMachineState_getCurrentTurn(uVar1);
  uVar3 = get_field_8(pvVar2);
  if (uVar3 != 0) {
    pvVar2 = (void *)StateMachineState_getCurrentTurn(uVar1);
    get_field_8(pvVar2);
    iVar4 = GamePlayer_getPlayerId();
    pvVar2 = (void *)StateMachineState_getGame();
    iVar5 = Game_getMyPlayerID(pvVar2);
    if (iVar5 == iVar4) {
      iVar5 = 0;
      iVar4 = 0;
      uVar6 = (**(code **)(*param_1 + 0xb8))
                        (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
      uVar8 = StateMachineState_getGame(uVar6);
      pvVar2 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      piVar7 = (int *)FUN_00d8d382(pvVar2);
      if (piVar7 != (int *)0x0) {
        iVar4 = PlayElement_getId();
        iVar5 = (**(code **)(*piVar7 + 0x15c))(0x472,param_1[0x3a]);
      }
      pvVar2 = Mem_Alloc(0x14);
      this = (void *)0x0;
      uStack_4 = 0;
      if (pvVar2 != (void *)0x0) {
        this = (void *)FUN_012f9eb0();
      }
      uStack_4 = 0xffffffff;
      FUN_012f8c70(0x70);
      StateMachineState_getGame();
      value_ = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(this,value_);
      DisplayActionBuilder_addObjectArg(this,param_1 + 0x4a);
      DisplayActionBuilder_addIntArg(this,iVar4);
      DisplayActionBuilder_addIntArg(this,iVar5);
      piVar7 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar7 + 0x154))(this);
    }
  }
  ExceptionList = local_c;
  return;
}

