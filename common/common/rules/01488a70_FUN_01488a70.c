// addr: 0x01488a70
// name: FUN_01488a70
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01488a70(int *param_1,int param_2,void *param_3)

{
  void *env;
  char cVar1;
  char *text;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int elementId_;
  int iVar6;
  int iVar7;
  uint uVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  undefined4 uVar11;
  char *format;
  int local_40;
  undefined4 local_3c;
  undefined1 local_34 [12];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  env = param_3;
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1760;
  local_c = ExceptionList;
  text = (char *)(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(param_3,"(value-node",text);
  iVar7 = 0;
  if ((param_1[7] == 0) && (param_1[9] == 0)) {
    FUN_01301590(env);
    FUN_013010e0(param_1 + 4);
    EvaluationEnvironment_tracePrefix(env);
  }
  else {
    iVar3 = param_1[9];
    if (iVar3 == 0x42) {
      FUN_01300680(1);
      *(undefined1 *)(param_2 + 8) = 0;
      pvVar2 = env;
      EvaluationEnvironment_tracef(env,"False node, this is always false",text);
      EvaluationEnvironment_traceExitf(env,") => false",pvVar2);
      ExceptionList = local_c;
      return 0;
    }
    if (iVar3 == 0x43) {
      FUN_01300680(1);
      *(undefined1 *)(param_2 + 8) = 1;
      pvVar2 = env;
      EvaluationEnvironment_tracef(env,"True node, this is always true",text);
      EvaluationEnvironment_traceExitf(env,") => true",pvVar2);
      ExceptionList = local_c;
      return 1;
    }
    if (iVar3 == 0x18) {
      pvVar2 = ValueData_toString(param_1 + 4,local_28);
      local_4 = 0;
      if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
        iVar3 = (int)pvVar2 + 4;
      }
      else {
        iVar3 = *(int *)((int)pvVar2 + 4);
      }
      EvaluationEnvironment_tracef
                (env,
                 "Getting Random key with endpoints: %s. This is dangerous if run on the client!",
                 iVar3);
      local_4 = 0xffffffff;
      FUN_0041f1d7();
      if (param_1[5] == 0xe) {
        iVar3 = FUN_012fa780();
        iVar6 = 0;
        param_3 = (void *)0x0;
        FUN_013144f0(&local_40,&param_3);
        local_3c = *(undefined4 *)(iVar3 + 4);
        local_40 = iVar3;
        cVar1 = FUN_012b0680(&local_40);
        if (cVar1 != '\0') {
          iVar6 = FUN_012b1980();
          ValueData_ctor(*(undefined4 *)(iVar6 + 4));
          local_4 = 1;
          FUN_01301590(env);
          FUN_01300d70(0);
          iVar6 = FUN_0123c340();
          local_4 = 0xffffffff;
          FUN_01300cd0();
        }
        param_3 = (void *)0x1;
        FUN_013144f0(&local_40,&param_3);
        local_3c = *(undefined4 *)(iVar3 + 4);
        local_40 = iVar3;
        cVar1 = FUN_012b0680(&local_40);
        if (cVar1 != '\0') {
          iVar7 = FUN_012b1980();
          ValueData_ctor(*(undefined4 *)(iVar7 + 4));
          local_4 = 2;
          FUN_01301590(env);
          FUN_01300d70(0);
          iVar7 = FUN_0123c340();
          local_4 = 0xffffffff;
          FUN_01300cd0();
        }
        uVar8 = (iVar7 - iVar6) + 1;
        if (1 < (int)uVar8) {
          pvVar2 = EvaluationEnvironment_getGame(env);
          EvaluationEnvironment_getGame(env);
          uVar4 = FUN_013487b0(pvVar2);
          FUN_01419f30(uVar4,pvVar2);
          local_4 = 3;
          iVar7 = MTRandom_getIntBelow(local_34,uVar8);
          EvaluationEnvironment_tracef(env,"Got random number: %d",iVar7);
          FUN_01251720(iVar7 + iVar6);
          EvaluationEnvironment_tracefWithPrefix(env,"result: ");
          EvaluationEnvironment_traceExitf(env,") => true",text);
          local_4 = 0xffffffff;
          FUN_01419f50();
          ExceptionList = local_c;
          return 1;
        }
        EvaluationEnvironment_tracef(env,"Invalid random spread",text);
        FUN_01300680(2);
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else {
        EvaluationEnvironment_tracef(env,"Got non intValueMap",text);
        FUN_01300680(2);
        *(undefined4 *)(param_2 + 8) = 0;
      }
LAB_01489076:
      EvaluationEnvironment_traceExitf(env,") => false",text);
      ExceptionList = local_c;
      return 0;
    }
    if (iVar3 == 0x51) {
      pvVar2 = ValueData_toString(param_1 + 4,local_28);
      local_4 = 4;
      if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
        iVar7 = (int)pvVar2 + 4;
      }
      else {
        iVar7 = *(int *)((int)pvVar2 + 4);
      }
      EvaluationEnvironment_tracef(env,"Checking to see if %s is in the string int map.",iVar7);
      local_4 = 0xffffffff;
      FUN_0041f1d7();
      if (param_1[5] != 3) {
LAB_01488df2:
        FUN_01300680(1);
        *(undefined1 *)(param_2 + 8) = 0;
        pvVar2 = env;
        EvaluationEnvironment_tracef(env,"mValue is not a string!",text);
        EvaluationEnvironment_traceExitf(env,") => false",pvVar2);
        ExceptionList = local_c;
        return 0;
      }
      pvVar2 = (void *)FUN_0123c310();
      pvVar5 = EvaluationEnvironment_getGame(env);
      iVar7 = Game_findNamedEntryValue(pvVar5,pvVar2);
      EvaluationEnvironment_tracef(env,"Got target %d",iVar7);
      uVar11 = 0;
      pTVar10 = &Card::RTTI_Type_Descriptor;
      pTVar9 = &PlayElement::RTTI_Type_Descriptor;
      uVar4 = 0;
      pvVar2 = EvaluationEnvironment_getGame(env);
      pvVar2 = find_play_element_in_maps(pvVar2,elementId_);
      uVar4 = FUN_00d8d382(pvVar2,uVar4,pTVar9,pTVar10,uVar11);
      FUN_013870c0(uVar4);
      cVar1 = (**(code **)(*param_1 + 0x50))(env,param_2);
      if (cVar1 == '\0') goto LAB_01489076;
    }
    else {
      if (iVar3 != 0x50) {
        if (iVar3 == 0x44) {
          uVar8 = FUN_01383610();
          EvaluationEnvironment_tracef
                    (env,"checking to see if this is a cost response: %d",uVar8 & 0xff);
          uVar4 = FUN_01383610();
          FUN_012c5100(uVar4);
          cVar1 = FUN_01383610();
          if (cVar1 == '\0') {
            format = ") => false";
          }
          else {
            format = ") => true";
          }
          EvaluationEnvironment_traceExitf(env,format,text);
          uVar4 = FUN_01383610();
          ExceptionList = local_c;
          return uVar4;
        }
        if (iVar3 == 0x45) {
          uVar4 = Rules_getIntegerKey15();
          FUN_01251720(uVar4);
          pvVar2 = env;
          EvaluationEnvironment_tracef(env,"Returning number of previously selected targets.",text);
          EvaluationEnvironment_traceExitf(env,") => true",pvVar2);
          ExceptionList = local_c;
          return 1;
        }
        if (iVar3 == 0x34) {
          uVar4 = Rules_getIntegerKey16();
          FUN_01251720(uVar4);
          uVar4 = Rules_getIntegerKey16();
          pvVar2 = env;
          EvaluationEnvironment_tracef(env,"Returning custom number: %d",uVar4);
          EvaluationEnvironment_traceExitf(env,") => true",pvVar2);
          ExceptionList = local_c;
          return 1;
        }
        if (iVar3 == 0x35) {
          uVar4 = Rules_getIntegerKey1B();
          FUN_01251720(uVar4);
          uVar4 = Rules_getIntegerKey1B();
          pvVar2 = env;
          EvaluationEnvironment_tracef(env,"Returning custom number2: %d",uVar4);
          EvaluationEnvironment_traceExitf(env,") => true",pvVar2);
          ExceptionList = local_c;
          return 1;
        }
        if ((param_1[8] == 0) && (param_1[10] == 0)) {
          pvVar2 = EvaluationEnvironment_getOriginCard(env);
          if (pvVar2 == (void *)0x0) {
            EvaluationEnvironment_logPrefixedText(env,"no origin card set",text);
            goto LAB_01489076;
          }
          param_1[8] = 0x11;
        }
        cVar1 = (**(code **)(*param_1 + 0x50))(env,param_2);
        EvaluationEnvironment_tracefWithPrefix(env,"Value: ");
        if (cVar1 != '\0') goto LAB_01488f15;
        goto LAB_01489076;
      }
      pvVar2 = ValueData_toString(param_1 + 4,local_28);
      local_4 = 5;
      if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
        iVar7 = (int)pvVar2 + 4;
      }
      else {
        iVar7 = *(int *)((int)pvVar2 + 4);
      }
      EvaluationEnvironment_tracef(env,"Checking to see if %s is in the string int map.",iVar7);
      local_4 = 0xffffffff;
      FUN_0041f1d7();
      if (param_1[5] != 3) goto LAB_01488df2;
      pvVar2 = (void *)FUN_0123c310();
      pvVar5 = EvaluationEnvironment_getGame(env);
      iVar7 = Game_findNamedEntryValue(pvVar5,pvVar2);
      FUN_01251720(iVar7);
    }
    EvaluationEnvironment_tracefWithPrefix(env,"Got Value: ");
  }
LAB_01488f15:
  EvaluationEnvironment_traceExitf(env,") => true",text);
  ExceptionList = local_c;
  return 1;
}

