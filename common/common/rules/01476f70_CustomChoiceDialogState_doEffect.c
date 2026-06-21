// addr: 0x01476f70
// name: CustomChoiceDialogState_doEffect
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CustomChoiceDialogState_doEffect(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  void *game;
  undefined4 uVar5;
  undefined1 *extraout_EDX;
  undefined1 *env;
  char *fmt;
  undefined1 local_bc [12];
  undefined1 local_b0 [4];
  void *pvStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Executes the selected CustomChoiceDialogState effect and propagates
                       custom/force/target returns. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f9a1;
  local_c = ExceptionList;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff38);
  ExceptionList = &local_c;
  uVar5 = *(undefined4 *)(param_1 + 0x120);
  fmt = "CustomChoiceDialogState::updateState - do effect %d";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,uVar5);
  EvaluationEnvironment_ctor();
  local_4 = 0;
  EvaluationEnvironment_copyFrom(local_a0,*(void **)(param_1 + 0xe8),pvVar4);
  EvaluationEnvironment_setBooleanKey4(0);
  FUN_013815c0(2);
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = *(int *)(param_1 + 0x120);
  if (iVar1 == 1) {
    pvVar4 = (void *)(param_1 + 0xfc);
    env = extraout_EDX;
  }
  else if (iVar1 == 2) {
    env = local_bc;
    pvVar4 = (void *)(param_1 + 0x108);
  }
  else {
    if (iVar1 != 3) goto LAB_0147704e;
    env = local_a0;
    pvVar4 = (void *)(param_1 + 0x114);
  }
  CommandObjectList_evaluateToValueData(pvVar4,env);
LAB_0147704e:
  bVar2 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
  if (bVar2) {
    EvaluationEnvironment_setForceReturn(1);
  }
  cVar3 = Rules_getBooleanKey23DefaultFalse();
  if (cVar3 != '\0') {
    EvaluationEnvironment_setTargetGottenReturn(1);
  }
  uVar5 = Rules_getIntegerKey16();
  EvaluationEnvironment_setCustomNumberReturn(uVar5);
  uVar5 = Rules_getIntegerKey1B();
  EvaluationEnvironment_setCustomNumber2Return(uVar5);
  PlayElementList_collectCommandObjects(local_a0,local_b0);
  local_4._0_1_ = 2;
  *(undefined4 *)(param_1 + 0x124) = 5;
  uVar5 = (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  GameResult_appendValue(local_b0);
  uVar5 = StateMachine_setCurrentState(uVar5);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvStack_ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_ac);
  }
  pvStack_ac = (void *)0x0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01300cd0();
  local_4 = 0xffffffff;
  FUN_01385460();
  ExceptionList = local_c;
  return uVar5;
}

