// addr: 0x01471040
// name: ExecuteRuleState_updateState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ExecuteRuleState_updateState(int param_1)

{
  void *pvVar1;
  void *game;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void *outVector;
  char *pcVar6;
  undefined1 auStack_bc [4];
  void *pvStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 local_ac [4];
  undefined1 auStack_a8 [8];
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Implements the operation identified by referenced string '+++ Attempted to
                       load %d under version %d'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f051;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff38);
  ExceptionList = &local_c;
  uVar5 = *(undefined4 *)(param_1 + 0xf8);
  pcVar6 = "ExecuteRuleState::updateState %d";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,pcVar6,uVar5);
  FUN_012a0710();
  EvaluationEnvironment_ctor();
  local_4 = 0;
  EvaluationEnvironment_copyFrom(local_a0,*(void **)(param_1 + 0xe8),pvVar1);
  pvVar1 = (void *)StateMachineState_getCurrentTurn();
  uVar2 = get_field_8(pvVar1);
  FUN_013815b0(uVar2);
  iVar3 = StateMachineState_getGame();
  piVar4 = (int *)RuleSetDB_getRuleSet
                            (*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(iVar3 + 0x20));
  if (piVar4 == (int *)0x0) {
    uVar5 = *(undefined4 *)(param_1 + 0xf8);
    pcVar6 = "Couldn\'t get RuleSetID %d";
    pvVar1 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar1,pcVar6,uVar5);
    iVar3 = StateMachineState_getGame();
    uVar5 = *(undefined4 *)(param_1 + 0xf8);
    pcVar6 = " +++ Attempted to load %d under version %d";
    pvVar1 = (void *)StateMachineState_getGame
                               (" +++ Attempted to load %d under version %d",uVar5,
                                *(undefined4 *)(iVar3 + 0x20));
    Game_logGeneral(pvVar1,pcVar6,uVar5);
    local_4 = 0xffffffff;
    FUN_01385460();
    uVar5 = 1;
  }
  else {
    FUN_012fa910();
    local_4._0_1_ = 1;
    FUN_013815c0(2);
    (**(code **)(*piVar4 + 0x38))(local_ac,local_a0);
    PlayElementList_collectCommandObjects(auStack_a8,outVector);
    local_c = (void *)CONCAT31(local_c._1_3_,2);
    uVar5 = (**(code **)(**(int **)(param_1 + 8) + 0x40))();
    GameResult_appendValue(auStack_bc);
    uVar5 = StateMachine_setCurrentState(uVar5);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvStack_b8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_b8);
    }
    pvStack_b8 = (void *)0x0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_01300cd0();
    local_4 = 0xffffffff;
    FUN_01385460();
  }
  ExceptionList = local_c;
  return uVar5;
}

