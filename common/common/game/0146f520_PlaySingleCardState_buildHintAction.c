// addr: 0x0146f520
// name: PlaySingleCardState_buildHintAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall PlaySingleCardState_buildHintAction(int param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *extraout_EAX;
  int value_;
  void *this;
  undefined8 uVar6;
  int local_30;
  void *pvStack_2c;
  int iStack_28;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  void *pvStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds a hint display action for PlaySingleCardState using the local player
                       id, current state, target object, and property-tree data. Used by several
                       PlaySingleCardState/GetSimultaneousTargetState hint paths. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169ec33;
  local_c = ExceptionList;
  piVar3 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  pvVar4 = (void *)StateMachineState_getGame();
  bVar2 = Game_getFlag_14d(pvVar4);
  if (!bVar2) {
    local_30 = 0;
    uVar6 = StateMachineState_getGame
                      (*(undefined4 *)(param_1 + 0xc),0,&PlayElement::RTTI_Type_Descriptor,
                       &Card::RTTI_Type_Descriptor,0);
    pvVar4 = find_play_element_in_maps((void *)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    piVar5 = (int *)FUN_00d8d382(pvVar4);
    if (piVar5 != (int *)0x0) {
      local_30 = (**(code **)(*piVar5 + 0x15c))(0x472,*(undefined4 *)(param_1 + 0xe8));
    }
    pvVar4 = (void *)StateMachineState_getGame();
    pvStack_2c = (void *)Game_getMyPlayerID(pvVar4);
    PropertyTree21_lowerBound((void *)(param_1 + 0xf8),auStack_24,&pvStack_2c,piVar3);
    pvVar4 = (void *)*extraout_EAX;
    iStack_28 = *(int *)(param_1 + 0xfc);
    iVar1 = extraout_EAX[1];
    if ((pvVar4 == (void *)0x0) || (pvVar4 != (void *)(param_1 + 0xf8))) {
      FUN_00d83c2d();
    }
    if (iVar1 != iStack_28) {
      pvStack_2c = Mem_Alloc(0x14);
      this = (void *)0x0;
      uStack_4 = 0;
      if (pvStack_2c != (void *)0x0) {
        this = (void *)FUN_012f9eb0();
      }
      uStack_4 = 0xffffffff;
      FUN_012f8c70(0x70);
      StateMachineState_getGame();
      value_ = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(this,value_);
      if (pvVar4 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar1 == *(int *)((int)pvVar4 + 4)) {
        FUN_00d83c2d();
      }
      FUN_005f15f0(iVar1 + 0x10);
      uStack_4 = 1;
      DisplayActionBuilder_addObjectArg(this,auStack_1c);
      DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0xc));
      DisplayActionBuilder_addIntArg(this,local_30);
      piVar3 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar3 + 0x154))(this);
      uStack_4 = 0xffffffff;
      if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

