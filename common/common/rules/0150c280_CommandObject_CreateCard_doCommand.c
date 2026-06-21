// addr: 0x0150c280
// name: CommandObject_CreateCard_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObject_CreateCard_doCommand(int param_1)

{
  bool bVar1;
  bool bVar2;
  void *sourceEnv;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Executes CommandObject_CreateCard by creating/moving/playing the card and
                       setting return-map flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5d67;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff48);
  ExceptionList = &local_c;
  Game_logGeneral(*(void **)(param_1 + 0x30),"CommandObject_CreateCard::doCommand %d",
                  *(undefined4 *)(param_1 + 0x128));
  piVar3 = find_play_element_in_maps(*(void **)(param_1 + 0x30),*(int *)(param_1 + 0x128));
  if (piVar3 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  EvaluationEnvironment_ctor();
  local_4 = 0;
  pvVar7 = (void *)(param_1 + 0x84);
  EvaluationEnvironment_copyFrom(local_a0,pvVar7,sourceEnv);
  bVar1 = false;
  bVar2 = false;
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar4 = PlayElement_getId();
    uVar4 = PlayElement_getId(uVar4);
    Game_logGeneral(*(void **)(param_1 + 0x30),"card: %d, target: %d",uVar4);
    pvVar5 = EvaluationEnvironment_getMember14(pvVar7);
    if (pvVar5 != (void *)0x0) {
      EvaluationEnvironment_getMember14(pvVar7);
      PlayElement_getGame();
      iVar6 = FUN_0139d7c0();
      if (iVar6 == *(int *)(param_1 + 0x68)) {
        bVar1 = true;
        goto LAB_0150c387;
      }
    }
  }
  pvVar5 = EvaluationEnvironment_getMember14(pvVar7);
  if (pvVar5 != (void *)0x0) {
    EvaluationEnvironment_getMember14(pvVar7);
    PlayElement_getGame();
    iVar6 = FUN_0139d7a0();
    if (iVar6 == *(int *)(param_1 + 0x68)) {
      bVar2 = true;
    }
  }
LAB_0150c387:
  set_play_element_id_field(local_a0,piVar3);
  EvaluationEnvironment_setCurrentTargetFromElement(local_a0,*(void **)(param_1 + 0x68),sourceEnv);
  if ((bVar1) || (bVar2)) {
    pvVar7 = Mem_Alloc(0x13c);
    local_4._0_1_ = 2;
    if (pvVar7 == (void *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = CommandObject_Move_ctor(pvVar7,local_a0,0x32);
    }
    local_4 = (uint)local_4._1_3_ << 8;
  }
  else {
    uVar4 = (**(code **)(*piVar3 + 0xcc))();
    EvaluationEnvironment_setActionReturn(uVar4);
    pvVar7 = Mem_Alloc(0x124);
    local_4._0_1_ = 1;
    if (pvVar7 == (void *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = CommandObjectPlayCard_ctor(pvVar7,local_a0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    pvVar5 = Game_getCurrentTurn(*(void **)(param_1 + 0x30));
    piVar3 = GameTurn_getCurrentStateMachine(pvVar5);
    pvVar5 = (void *)(**(code **)(*piVar3 + 0x54))();
    CommandObjectPlayCard_setStateMachine(pvVar7,pvVar5,sourceEnv);
    ReturnValueMap_setBooleanKey31(1);
    ReturnValueMap_setBooleanKey11(1);
    ReturnValueMap_setBooleanKey33(1);
    uVar4 = PlayElement_getId();
    ReturnValueMap_setIntegerKey35(uVar4);
  }
  CommandObjectVector_pushBack(pvVar7,sourceEnv);
  local_4 = 0xffffffff;
  FUN_01385460();
  ExceptionList = local_c;
  return 1;
}

