// addr: 0x01398ea0
// name: Card_validateTransferPreconditions
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 * __thiscall
Card_validateTransferPreconditions(void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  void *sourceEnv;
  int *extraout_EAX;
  void *context;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStackY_100 [20];
  undefined4 uStackY_ec;
  undefined1 local_c4 [4];
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 local_b8;
  void *local_b4;
  undefined1 local_b0 [4];
  int iStack_ac;
  char cStack_a8;
  undefined4 *local_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Evaluates transfer/precondition logic for a card action and logs pass/fail
                       return values. */
  puStack_8 = &LAB_01684ad1;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff2c);
  if (param_2 == (void *)0x0) {
    return auStackY_100;
  }
  local_c0 = (undefined4 *)0x0;
  local_bc = (undefined4 *)0x0;
  local_b8 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  local_b4 = param_1;
  FUN_0137e030();
  bVar2 = card_check_target_modifier_predicates(param_1,context);
  if (bVar2) {
    Card_checkModifierPredicate68(param_1,local_c4,2);
  }
  else {
    ArchetypeRemap_allTargetPredicatesAccept(param_2,local_c4,2);
  }
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_copyFrom(local_a0,param_3,sourceEnv);
  set_play_element_id_field(local_a0,param_1);
  EvaluationEnvironment_setActionReturn();
  EvaluationEnvironment_setBooleanKey9();
  EvaluationEnvironment_setBooleanKey4();
  EvaluationEnvironment_setCurrentTargetFromElement(local_a0,(void *)0x0,sourceEnv);
  EvaluationEnvironment_setPlayElementId();
  EvaluationEnvironment_setBooleanKey13();
  local_a4 = local_bc;
  if (local_bc < local_c0) {
    FUN_00d83c2d();
  }
  puVar5 = local_c0;
  if (local_bc < local_c0) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0xc4) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_a4) break;
    if (&stack0x00000000 == (undefined1 *)0xc4) {
      FUN_00d83c2d();
    }
    if (local_bc <= puVar5) {
      FUN_00d83c2d();
    }
    PropertySerializer_writeCompositeValueA((int *)*puVar5);
    if (extraout_EAX != (int *)0x0) {
      FUN_012fa910();
      local_4._0_1_ = 2;
      cVar3 = (**(code **)(*extraout_EAX + 0x38))();
      pvVar1 = local_b4;
      if ((cVar3 == '\0') || ((iStack_ac == 1 && (cStack_a8 == '\0')))) {
        Game_logGeneral(*(void **)((int)local_b4 + 0x30),"pre condition failed,",sourceEnv);
        if (cVar3 != '\0') {
          Game_logGeneral(*(void **)((int)pvVar1 + 0x30),"Return value was:",sourceEnv);
          ValueData_printDebug(local_b0,*(void **)((int)pvVar1 + 0x30));
        }
        local_4._0_1_ = 1;
        FUN_01300cd0();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_01385460();
        local_4 = 0xffffffff;
        if (local_c0 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return (undefined1 *)0x0;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_c0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_01300cd0();
      param_1 = local_b4;
    }
    if (local_bc <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  if (*(uint *)((int)param_1 + 0x13c) < 0x10) {
    iVar4 = (int)param_1 + 0x128;
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x128);
  }
  FUN_01321f20();
  uStackY_ec = 0x139911e;
  EvaluationEnvironment_tracef(param_3,"%s(%d) passed transfer validation",iVar4);
  local_4 = local_4 & 0xffffff00;
  FUN_01385460();
  local_4 = 0xffffffff;
  if (local_c0 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined1 *)0x1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_c0);
}

