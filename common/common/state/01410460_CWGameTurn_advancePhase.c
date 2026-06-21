// addr: 0x01410460
// name: CWGameTurn_advancePhase
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall CWGameTurn_advancePhase(int *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  void *this;
  void *pvVar6;
  undefined4 uVar7;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Implements the operation identified by referenced string 'moveToNextGame is
                       set, going to clear state and start next game.'. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016925d5;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff50;
  ExceptionList = &local_c;
  pvVar5 = (void *)param_1[6];
  param_1[4] = 0x1b;
  if ((char)param_1[0x1f] == '\x01') {
    param_1[3] = param_1[0x20];
    (**(code **)(*param_1 + 0x60))();
    ExceptionList = local_c;
    return (void *)0x2;
  }
  (**(code **)(*(int *)param_1[1] + 500))();
  FUN_013f3910();
  Game_logGeneral((void *)param_1[1],"CWGameTurn::advancePhase",uVar3);
  pvVar6 = (void *)0x0;
  FUN_00d8d382(param_1[1],0,&CTP::Game::RTTI_Type_Descriptor,&CWGame::RTTI_Type_Descriptor,0);
  cVar2 = CWGame_getMoveToNextGame();
  if (cVar2 != '\0') {
    Game_logGeneral((void *)param_1[1],
                    "moveToNextGame is set, going to clear state and start next game.",uVar3);
    iVar4 = Game_getGameNumber((void *)param_1[1]);
    FUN_01347940(iVar4 + 1);
    (**(code **)(*(int *)param_1[1] + 0x50))(1);
    set_field_14(param_1,1);
    pcVar1 = *(code **)(*param_1 + 0x60);
    param_1[3] = 0x29;
    (*pcVar1)();
    pvVar6 = Mem_Alloc(0x104);
    uStack_4 = 0;
    if (pvVar6 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = CWStartOfGameState_ctorWithMachine(pvVar6,pvVar5);
    }
    uStack_4 = 0xffffffff;
    pvVar5 = (void *)StateMachine_setCurrentState(pvVar5);
    ExceptionList = local_c;
    return pvVar5;
  }
  EvaluationEnvironment_ctor();
  uStack_4 = 1;
  EvaluationEnvironment_setGame(param_1[1]);
  (**(code **)(*(int *)param_1[1] + 400))(auStack_a0);
  if (param_1[0x22] != 0) {
    (**(code **)(*param_1 + 0x4c))(param_1[0x22]);
    uStack_4 = 0xffffffff;
    FUN_01385460();
    ExceptionList = local_c;
    return (void *)0x2;
  }
  iVar4 = (**(code **)(*param_1 + 0x3c))();
  if (iVar4 == 0x29) {
    iVar4 = (**(code **)(*(int *)param_1[1] + 0x54))();
    if (iVar4 < 2) {
      (**(code **)(*(int *)param_1[1] + 0x50))(1);
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*(int *)param_1[1] + 0x54))();
    }
    set_field_14(param_1,uVar3);
    Game_setPendingFlag_131((void *)param_1[1],false);
    uVar7 = 0;
    FUN_00d8d382(param_1[1],0,&CTP::Game::RTTI_Type_Descriptor,&CWGame::RTTI_Type_Descriptor,0,0);
    CWGame_setMoveToNextGame(uVar7);
    pcVar1 = *(code **)(*param_1 + 0x60);
    param_1[3] = 0x1adb1;
    (*pcVar1)();
    FUN_01410050();
    this = Mem_Alloc(0x100);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  }
  else {
    if (iVar4 != 0x1adb1) goto LAB_014106ff;
    param_1[3] = 0x1adb1;
    Game_sendPickListDisplayAction((void *)param_1[1],1000);
    (**(code **)(*param_1 + 0x60))();
    FUN_01410050();
    this = Mem_Alloc(0x100);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  }
  if (this != (void *)0x0) {
    pvVar6 = ExecuteRuleState_copy_ctor(this,pvVar5);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  StateMachineState_setDeferredStateId(pvVar6,0xf42f3);
  StateMachineState_setDeferredStatePending(pvVar6,true);
  pvVar6 = (void *)StateMachine_setCurrentState(pvVar6);
LAB_014106ff:
  (**(code **)(*(int *)param_1[1] + 0x17c))();
  uStack_4 = 0xffffffff;
  FUN_01385460();
  ExceptionList = local_c;
  return pvVar6;
}

