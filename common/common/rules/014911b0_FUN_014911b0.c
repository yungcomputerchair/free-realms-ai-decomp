// addr: 0x014911b0
// name: FUN_014911b0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_014911b0(int *param_1,void *param_2,void *param_3)

{
  int *piVar1;
  void *env;
  char cVar2;
  void **item;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *pvVar6;
  char *format;
  int *local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  env = param_3;
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2040;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(param_3,"(gvt:SetEnvironmentNode",item);
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ValueDataList_assign(local_1c,param_2);
  pvVar6 = *(void **)((int)param_2 + 8);
  if (pvVar6 < *(void **)((int)param_2 + 4)) {
    FUN_00d83c2d();
  }
  param_3 = *(void **)((int)param_2 + 4);
  if (*(void **)((int)param_2 + 8) < param_3) {
    FUN_00d83c2d();
  }
  PointerVector_eraseRangeAssignIterator(param_2,&local_34,param_2,param_3,param_2,pvVar6,item);
  local_30 = *(int *)param_1[2];
  piVar1 = param_1 + 1;
  if (local_30 == param_1[2]) {
    FUN_00d83c2d();
  }
  if (*(int *)(local_30 + 0xc) == 0x34) {
    EvaluationEnvironment_tracef(env,"setting environment custom variable\n",item);
    FUN_012fa910();
    local_4._0_1_ = 1;
    piVar1 = *(int **)param_1[2];
    if (piVar1 == (int *)param_1[2]) {
      FUN_00d83c2d();
    }
    FUN_013010e0(piVar1[4]);
    FUN_01301590(env);
    if (local_30 == 2) {
      EvaluationEnvironment_setCustomNumberReturn(local_2c);
      EvaluationEnvironment_tracefWithPrefix(env,"Custom number: ");
      EvaluationEnvironment_traceExitf(env,") => true",item);
      ValueDataList_assign(param_2,local_1c);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_01300cd0();
LAB_014912ee:
      local_4 = 0xffffffff;
      if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      ExceptionList = local_c;
      return 1;
    }
    EvaluationEnvironment_traceExitf(env,") => false",item);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_01300cd0();
LAB_01491338:
    local_4 = 0xffffffff;
    if (local_18 == (void *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  local_30 = *(int *)param_1[2];
  if (local_30 == param_1[2]) {
    FUN_00d83c2d();
  }
  if (*(int *)(local_30 + 0xc) == 0x20) {
    EvaluationEnvironment_tracef(env,"checking custom command variable.",item);
    cVar2 = FUN_01383630();
    if (cVar2 == '\x01') {
      ValueDataList_assign(param_2,local_1c);
      EvaluationEnvironment_traceExitf(env,") => true",item);
      goto LAB_014912ee;
    }
    EvaluationEnvironment_traceExitf(env,") => false",item);
    goto LAB_01491338;
  }
  local_30 = *(int *)param_1[2];
  if (local_30 == param_1[2]) {
    FUN_00d83c2d();
  }
  if (*(int *)(local_30 + 0xc) == 0x36) {
    EvaluationEnvironment_tracef(env,"checking getDoingPreventBy.",item);
    cVar2 = FUN_01383c30();
    if (cVar2 != '\x01') {
      EvaluationEnvironment_traceExitf(env,") => false",item);
      goto LAB_014919e5;
    }
LAB_01491407:
    ValueDataList_assign(param_2,local_1c);
LAB_0149140e:
    EvaluationEnvironment_traceExitf(env,") => true",item);
    goto LAB_0149141c;
  }
  local_30 = *(int *)param_1[2];
  if (local_30 == param_1[2]) {
    FUN_00d83c2d();
  }
  local_34 = piVar1;
  if (*(int *)(local_30 + 0xc) == 0x35) {
    EvaluationEnvironment_tracef(env,"setting environment custom variable2\n",item);
    FUN_012fa910();
    local_4._0_1_ = 2;
    local_30 = *(int *)param_1[2];
    iVar3 = FUN_01423ab0();
    FUN_013010e0(*(undefined4 *)(iVar3 + 4));
    FUN_01301590(env);
    if (local_24 != 2) {
LAB_014919c9:
      EvaluationEnvironment_traceExitf(env,") => false",item);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_01300cd0();
LAB_014919e5:
      local_4 = 0xffffffff;
      STLVector_int_clear(local_1c);
      ExceptionList = local_c;
      return 0;
    }
    uVar4 = FUN_0123c340();
    EvaluationEnvironment_setCustomNumber2Return(uVar4);
    EvaluationEnvironment_tracefWithPrefix(env,"Custom number: ");
    EvaluationEnvironment_traceExitf(env,") => true",item);
  }
  else {
    local_30 = *(undefined4 *)param_1[2];
    piVar5 = (int *)FUN_01423ab0();
    if (*piVar5 != 0x37) {
      local_30 = *(int *)param_1[2];
      local_34 = piVar1;
      piVar5 = (int *)FUN_01423ab0();
      if (*piVar5 == 0x38) {
        EvaluationEnvironment_tracef(env,"Clear Target Set Environment Node.",item);
        if (param_1[4] == 1) {
          EvaluationEnvironment_tracef(env,"clearing target1",item);
          EvaluationEnvironment_setCurrentTargetFromElement(env,(void *)0x0,item);
        }
        else {
          EvaluationEnvironment_tracef(env,"clearing target2",item);
          EvaluationEnvironment_setPlayElementId(0);
        }
        goto LAB_01491407;
      }
      local_30 = *(undefined4 *)param_1[2];
      local_34 = piVar1;
      piVar5 = (int *)FUN_01423ab0();
      if (*piVar5 == 0x39) {
        EvaluationEnvironment_tracef(env,"Set Ignore Player.",item);
        local_30 = *(int *)param_1[2];
        local_34 = piVar1;
        iVar3 = FUN_01423ab0();
        if (*(int *)(*(int *)(iVar3 + 4) + 4) == 1) {
          local_30 = *(int *)param_1[2];
          local_34 = piVar1;
          FUN_01423ab0();
          uVar4 = FUN_0123c370();
        }
        else {
          uVar4 = 1;
        }
        FUN_01387540(uVar4);
        EvaluationEnvironment_traceExitf(env,") => true",item);
        ValueDataList_assign(param_2,local_1c);
        goto LAB_0149141c;
      }
      local_30 = *(int *)param_1[2];
      local_34 = piVar1;
      piVar5 = (int *)FUN_01423ab0();
      if (*piVar5 == 0x3a) {
        EvaluationEnvironment_tracef(env,"Set Target Gotten.",item);
        cVar2 = Rules_getBooleanKey23DefaultFalse();
        if (cVar2 != '\0') {
          pvVar6 = env;
          EvaluationEnvironment_tracef(env,"TargetGotten already set!",item);
          EvaluationEnvironment_traceExitf(env,") => false",pvVar6);
          ValueDataList_assign(param_2,local_1c);
          goto LAB_014919e5;
        }
        EvaluationEnvironment_setTargetGottenReturn(1);
        EvaluationEnvironment_traceExitf(env,") => true",item);
        ValueDataList_assign(param_2,local_1c);
        goto LAB_0149141c;
      }
      local_30 = *(int *)param_1[2];
      local_34 = piVar1;
      piVar5 = (int *)FUN_01423ab0();
      if (*piVar5 == 0x3b) {
        EvaluationEnvironment_tracef(env,"Set Will Expire Key.",item);
        FUN_012fa910();
        local_4._0_1_ = 4;
        local_30 = *(int *)param_1[2];
        local_34 = piVar1;
        iVar3 = FUN_01423ab0();
        FUN_013010e0(*(undefined4 *)(iVar3 + 4));
        FUN_01301590(env);
        if (local_24 != 1) {
          ValueDataList_assign(param_2,local_1c);
        }
        uVar4 = FUN_0123c370();
        FUN_013872d0(uVar4);
        format = "Will Expire set to";
        goto LAB_01491583;
      }
      switch(param_1[4]) {
      case 1:
        PointerVector_clear(param_2);
        EvaluationEnvironment_tracef(env,"Setting Target1",item);
        pvVar6 = (void *)(**(code **)(*param_1 + 0x50))(env);
        EvaluationEnvironment_setCurrentTargetFromElement(env,pvVar6,item);
        pvVar6 = EvaluationEnvironment_resolveTarget(env);
        if (pvVar6 != (void *)0x0) {
          pvVar6 = EvaluationEnvironment_getTargetCard(env);
          if (pvVar6 != (void *)0x0) {
            param_3 = EvaluationEnvironment_getTargetCard(env);
            PointerVector_pushBack(param_2,&param_3,item);
          }
LAB_01491828:
          if (param_1[4] != 1) {
            cVar2 = FUN_01383bb0();
            if ((cVar2 != '\x01') || (param_1[4] != 2)) goto LAB_01491407;
            EvaluationEnvironment_tracef
                      (env,
                       "needtarget2 and in a settarget2 node, so leaving the valid targets as only what was set."
                       ,item);
          }
          goto LAB_0149140e;
        }
        break;
      case 2:
        EvaluationEnvironment_tracef(env,"Setting Target2",item);
        PointerVector_clear(param_2);
        uVar4 = (**(code **)(*param_1 + 0x50))(env);
        EvaluationEnvironment_setPlayElementId(uVar4);
        pvVar6 = EvaluationEnvironment_resolveTarget2(env);
        if (pvVar6 != (void *)0x0) {
          pvVar6 = EvaluationEnvironment_getTarget2Card(env);
          if (pvVar6 != (void *)0x0) {
            param_3 = EvaluationEnvironment_getTarget2Card(env);
            PointerVector_pushBack(param_2,&param_3,item);
            PointerVector_assign(env,param_2,item);
            ValueDataList_assign(param_2,local_1c);
          }
          goto LAB_01491828;
        }
        break;
      case 0x17:
        cVar2 = (**(code **)(*param_1 + 0x58))(env);
        if (cVar2 != '\0') goto LAB_01491828;
        break;
      case 0x38:
        EvaluationEnvironment_tracef(env,"Adding CustomCard",item);
        uVar4 = (**(code **)(*param_1 + 0x50))
                          (env,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
        iVar3 = FUN_00d8d382(uVar4);
        FUN_01386f60(iVar3);
        ValueDataList_assign(param_2,local_1c);
        if (iVar3 != 0) goto LAB_01491828;
      }
      FUN_012fa910();
      local_4._0_1_ = 5;
      cVar2 = (**(code **)(*param_1 + 0x38))(local_28,env);
      if (cVar2 != '\0') {
        EvaluationEnvironment_traceExitf(env,") => true",item);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_01300cd0();
        goto LAB_0149141c;
      }
      goto LAB_014919c9;
    }
    EvaluationEnvironment_tracef(env,"setting environment Alternateduration\n",item);
    FUN_012fa910();
    local_4._0_1_ = 3;
    local_30 = *(int *)param_1[2];
    local_34 = piVar1;
    iVar3 = FUN_01423ab0();
    FUN_013010e0(*(undefined4 *)(iVar3 + 4));
    FUN_01301590(env);
    if (local_24 != 2) {
      EvaluationEnvironment_traceExitf(env,") => true",item);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_01300cd0();
      goto LAB_0149141c;
    }
    uVar4 = FUN_0123c340();
    FUN_01386e00(uVar4);
    format = "AlternateDuration: ";
LAB_01491583:
    EvaluationEnvironment_tracefWithPrefix(env,format);
    EvaluationEnvironment_traceExitf(env,") => true",item);
  }
  ValueDataList_assign(param_2,local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01300cd0();
LAB_0149141c:
  local_4 = 0xffffffff;
  STLVector_int_clear(local_1c);
  ExceptionList = local_c;
  return 1;
}

