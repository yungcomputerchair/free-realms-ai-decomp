// addr: 0x01477ea0
// name: CustomChoiceDialogState_checkActionPreconditions
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CustomChoiceDialogState_checkActionPreconditions(int param_1)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  void *outVector;
  void *outVector_00;
  void *outVector_01;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int value_;
  char cStack_d6;
  char local_d5;
  undefined4 *local_d0;
  undefined4 *local_cc;
  undefined1 local_bc [4];
  int local_b8;
  char local_b4;
  void *pvStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Checks first/second CustomChoiceDialogState action preconditions and records
                       which choices passed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169fb85;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff18);
  ExceptionList = &local_c;
  uVar7 = 0;
  StateMachineState_getGame(0);
  uVar7 = FUN_0135ff30(uVar7);
  EvaluationEnvironment_ctor();
  local_4 = 0;
  EvaluationEnvironment_copyFrom(local_a0,*(void **)(param_1 + 0xe8),pvVar2);
  EvaluationEnvironment_setBooleanKey4(0);
  FUN_013815c0(2);
  FUN_012fa910();
  local_4._0_1_ = 1;
  uVar3 = CommandObjectList_evaluateToValueData((void *)(param_1 + 0xfc),local_bc);
  local_d5 = (char)uVar3;
  if ((local_b8 == 1) && (local_b4 == '\0')) {
    local_d5 = '\0';
  }
  PlayElementList_collectCommandObjects(local_a0,outVector);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_cc < local_d0) {
    FUN_00d83c2d();
  }
  FUN_013815d0();
  puVar5 = local_d0;
  if (local_cc < local_d0) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0xd4) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_cc) break;
    if (&stack0x00000000 == (undefined1 *)0xd4) {
      FUN_00d83c2d();
    }
    if (local_cc <= puVar5) {
      FUN_00d83c2d();
    }
    cVar1 = (**(code **)(*(int *)*puVar5 + 0x68))(local_a0);
    if (cVar1 == '\0') {
      local_d5 = '\0';
    }
    if (local_cc <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  PlayElement_destroyCommandObjects(local_a0);
  EvaluationEnvironment_copyFrom(local_a0,*(void **)(param_1 + 0xe8),pvVar2);
  EvaluationEnvironment_setBooleanKey4(0);
  FUN_013815c0(2);
  uVar3 = CommandObjectList_evaluateToValueData((void *)(param_1 + 0x108),local_bc);
  cStack_d6 = (char)uVar3;
  if ((local_b8 == 1) && (local_b4 == '\0')) {
    cStack_d6 = '\0';
  }
  pvVar4 = PlayElementList_collectCommandObjects(local_a0,outVector_00);
  local_4._0_1_ = 3;
  FUN_014135c0(pvVar4);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvStack_ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_ac);
  }
  pvStack_ac = (void *)0x0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (local_cc < local_d0) {
    FUN_00d83c2d();
  }
  FUN_013815d0();
  puVar5 = local_d0;
  if (local_cc < local_d0) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0xd4) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_cc) break;
    if (&stack0x00000000 == (undefined1 *)0xd4) {
      FUN_00d83c2d();
    }
    if (local_cc <= puVar5) {
      FUN_00d83c2d();
    }
    cVar1 = (**(code **)(*(int *)*puVar5 + 0x68))(local_a0);
    if (cVar1 == '\0') {
      cStack_d6 = '\0';
    }
    if (local_cc <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  PlayElement_destroyCommandObjects(local_a0);
  if (*(char *)(param_1 + 0x128) != '\0') {
    EvaluationEnvironment_copyFrom(local_a0,*(void **)(param_1 + 0xe8),pvVar2);
    EvaluationEnvironment_setBooleanKey4(0);
    FUN_013815c0(2);
    uVar3 = CommandObjectList_evaluateToValueData((void *)(param_1 + 0x114),local_bc);
    uVar3 = uVar3 & 0xff;
    pvVar4 = PlayElementList_collectCommandObjects(local_a0,outVector_01);
    local_4._0_1_ = 4;
    FUN_014135c0(pvVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvStack_ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_ac);
    }
    pvStack_ac = (void *)0x0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    if (local_cc < local_d0) {
      FUN_00d83c2d();
    }
    FUN_013815d0();
    puVar5 = local_d0;
    if (local_cc < local_d0) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0xd4) {
        FUN_00d83c2d();
      }
      if (puVar5 == local_cc) break;
      if (&stack0x00000000 == (undefined1 *)0xd4) {
        FUN_00d83c2d();
      }
      if (local_cc <= puVar5) {
        FUN_00d83c2d();
      }
      cVar1 = (**(code **)(*(int *)*puVar5 + 0x68))(local_a0);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      if (local_cc <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
    PlayElement_destroyCommandObjects(local_a0);
    if ((char)uVar3 != '\0') goto LAB_01478229;
  }
  *(undefined1 *)(param_1 + 0x128) = 0;
LAB_01478229:
  uVar6 = 0;
  StateMachineState_getGame(0,uVar7);
  FUN_0135ff90(uVar6,uVar7);
  if (local_d5 == '\0') {
    if (cStack_d6 == '\0') {
      pcVar8 = "CustomChoiceDialogState::checkActionPrecon - neither";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar8,pvVar2);
      *(undefined4 *)(param_1 + 0x124) = 5;
    }
    else {
      pcVar8 = "CustomChoiceDialogState::checkActionPrecon - second only";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar8,pvVar2);
      if (*(char *)(param_1 + 0x129) == '\0') {
        *(undefined4 *)(param_1 + 0x124) = 4;
        *(undefined4 *)(param_1 + 0x120) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x124) = 2;
        *(undefined4 *)(param_1 + 0x120) = 2;
      }
    }
  }
  else if (cStack_d6 == '\0') {
    pcVar8 = "CustomChoiceDialogState::checkActionPrecon - first only";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar8,pvVar2);
    if (*(char *)(param_1 + 0x129) == '\0') {
      *(undefined4 *)(param_1 + 0x124) = 4;
      *(undefined4 *)(param_1 + 0x120) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x124) = 2;
      *(undefined4 *)(param_1 + 0x120) = 1;
    }
  }
  else {
    pcVar8 = "CustomChoiceDialogState::checkActionPrecon - both passed";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar8,pvVar2);
    *(undefined4 *)(param_1 + 0x124) = 2;
  }
  pvVar2 = Mem_Alloc(0x38);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    uVar7 = StateMachineState_getGame();
    pvVar2 = (void *)FUN_0141a550(uVar7);
  }
  local_4._0_1_ = 2;
  set_field_4(pvVar2,*(uint *)(param_1 + 0xf8));
  if (*(int *)(param_1 + 0x124) == 5) {
    value_ = 9999;
  }
  else {
    value_ = *(int *)(param_1 + 0x120);
  }
  CommandObject_setFirstIntArg(pvVar2,value_);
  CommandObject_setSecondIntArg(pvVar2,0);
  pvVar4 = (void *)StateMachineState_getGame();
  Game_dispatchCommandToAllPlayers(pvVar4,pvVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_d0 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_d0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01300cd0();
  local_4 = 0xffffffff;
  FUN_01385460();
  ExceptionList = local_c;
  return;
}

