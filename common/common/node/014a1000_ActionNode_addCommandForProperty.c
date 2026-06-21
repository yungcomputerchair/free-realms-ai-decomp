// addr: 0x014a1000
// name: ActionNode_addCommandForProperty
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_addCommandForProperty(void * this, int propertyKey_, void *
   value, void * environment, void * target) */

bool __thiscall
ActionNode_addCommandForProperty
          (void *this,int propertyKey_,void *value,void *environment,void *target)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *formatText;
  int *piVar5;
  undefined4 *extraout_EAX;
  int *extraout_EAX_00;
  undefined4 uVar6;
  uint value_;
  void *pvVar7;
  int iVar8;
  int *extraout_EAX_01;
  void *pvVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  void **ppvVar13;
  void *local_13c;
  void *local_138;
  int local_134;
  void *local_130;
  undefined4 *local_12c;
  undefined1 local_128 [4];
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [8];
  int local_100 [2];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  int local_d8 [2];
  undefined1 local_d0 [156];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Large ActionNode dispatcher that maps node property keys to command objects
                       such as dummy events, install/uninstall action, discard, keywords, suppress
                       effects, tokens, draw card, win/lose, UI effects, and property changes. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016a46b3;
  local_14 = ExceptionList;
  piVar3 = (int *)(DAT_01b839d8 ^ (uint)&stack0xfffffeb8);
  ExceptionList = &local_14;
  if (0x101c < propertyKey_) {
    if (propertyKey_ != 0x101d) {
switchD_014a105b_caseD_15:
      EvaluationEnvironment_tracef(environment,"unknown nodePropertyKey:%d",propertyKey_);
      ExceptionList = local_14;
      return true;
    }
    EvaluationEnvironment_tracefWithPrefix(environment,"Wait For ");
    local_13c = Mem_Alloc(0x130);
    local_c = 5;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObjectWaitFor_ctor(local_13c,value,environment);
    goto LAB_014a2566;
  }
  if (propertyKey_ == 0x101c) {
switchD_014a105b_caseD_62:
    EvaluationEnvironment_tracefWithPrefix(environment,"Info Box ");
    local_13c = Mem_Alloc(0x130);
    local_c = 4;
    if (local_13c == (void *)0x0) {
LAB_014a2557:
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)CommandObject_InfoBox_ctor(value,environment);
    }
    goto LAB_014a2566;
  }
  bVar2 = SUB41(target,0);
  switch(propertyKey_) {
  case 1:
    EvaluationEnvironment_tracef(environment,"Adding Dummy Event",piVar3);
    FUN_01300d70(0);
    EvaluationEnvironment_ctor();
    local_c = 2;
    EvaluationEnvironment_copyFrom(local_d0,environment,piVar3);
    pvVar10 = EvaluationEnvironment_getOriginCard(environment);
    if (pvVar10 != (void *)0x0) {
      EvaluationEnvironment_getOriginCard(environment);
      iVar8 = PlayElement_getId();
      set_integer_value_for_key(0x33,iVar8);
    }
    pvVar10 = EvaluationEnvironment_getMember14(environment);
    if (pvVar10 != (void *)0x0) {
      pvVar10 = EvaluationEnvironment_getMember14(environment);
      unknown_getField30(pvVar10);
      iVar8 = PlayElement_getId();
      set_integer_value_for_key(0x35,iVar8);
    }
    pvVar10 = EvaluationEnvironment_resolveTarget(environment);
    if (pvVar10 != (void *)0x0) {
      EvaluationEnvironment_resolveTarget(environment);
      iVar8 = PlayElement_getId();
      set_integer_value_for_key(0x34,iVar8);
    }
    local_13c = Mem_Alloc(0x124);
    local_c._0_1_ = 3;
    if (local_13c == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = CommandObject_DummyEvent_ctor(local_13c,local_d0);
    }
    local_c = CONCAT31(local_c._1_3_,2);
    iVar8 = *piVar5;
    uVar6 = FUN_0123c340();
    (**(code **)(iVar8 + 0x60))(uVar6);
    EvaluationEnvironment_addCommandObject(environment,piVar5,piVar3);
    goto LAB_014a12a9;
  case 2:
    EvaluationEnvironment_tracef(environment,"Adding installed action",piVar3);
    if (*(int *)((int)value + 4) != 2) {
      pvVar10 = ValueData_toString(value,local_34);
      local_c = 8;
      if (*(uint *)((int)pvVar10 + 0x18) < 0x10) {
        iVar8 = (int)pvVar10 + 4;
      }
      else {
        iVar8 = *(int *)((int)pvVar10 + 4);
      }
      EvaluationEnvironment_tracef(environment,"value was not an action: %s",iVar8);
      local_c = 0xffffffff;
      FUN_0041f1d7();
      ExceptionList = local_14;
      return true;
    }
    pvVar10 = Mem_Alloc(0x128);
    local_c = 7;
    local_13c = pvVar10;
    if (pvVar10 == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar7 = environment;
      pvVar9 = (void *)FUN_0123c340();
      pvVar10 = CommandObject_InstallAction_ctor(pvVar10,pvVar9,pvVar7);
    }
    break;
  case 3:
    EvaluationEnvironment_tracef(environment,"Adding uninstalled action",piVar3);
    pvVar10 = Mem_Alloc(300);
    local_c = 9;
    local_13c = pvVar10;
    if (pvVar10 != (void *)0x0) {
      pvVar7 = environment;
      pvVar9 = CommandObject_getActionFromEnvironment(environment);
      pvVar10 = CommandObject_UnInstallActionMap_ctor(pvVar10,(int)pvVar9,pvVar7);
      break;
    }
    goto LAB_014a2557;
  case 4:
    formatText = EvaluationEnvironment_getTargetCard(environment);
    EvaluationEnvironment_logCardMessage(environment,"Adding discard of",formatText,piVar3);
    pvVar10 = EvaluationEnvironment_resolveTarget(environment);
    if (pvVar10 == (void *)0x0) {
      ExceptionList = local_14;
      return true;
    }
    local_13c = Mem_Alloc(0x140);
    local_c = 0xc;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObjectDiscard_ctorDefaultInit(local_13c,environment,1);
    break;
  case 5:
    EvaluationEnvironment_tracefWithPrefix(environment,"Adding keyword: ");
    local_13c = Mem_Alloc(0x130);
    local_c = 0xf;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)CommandObject_AddKeyword_ctor(target,value,environment);
    break;
  case 6:
    EvaluationEnvironment_tracefWithPrefix(environment,"Remove Keyword: ");
    local_13c = Mem_Alloc(0x130);
    local_c = 0x10;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObject_RemoveKeyword_ctor(local_13c,bVar2,value,environment);
    break;
  case 7:
    EvaluationEnvironment_tracefWithPrefix(environment,"Adding suppress effect: ");
    local_13c = Mem_Alloc(0x130);
    local_c = 0x15;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)CommandObject_AddSuppressEffect_ctor(target,value,environment);
    break;
  case 8:
    EvaluationEnvironment_tracefWithPrefix(environment,"Remove SuppressEffect: ");
    local_13c = Mem_Alloc(0x130);
    local_c = 0x16;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObject_RemoveSuppressEffect_ctor(local_13c,bVar2,value,environment);
    break;
  case 9:
    EvaluationEnvironment_tracefWithPrefix(environment,"Adding ValidActionFilter: ");
    local_13c = Mem_Alloc(300);
    local_c = 0x17;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObjectInstallActionFilter_ctor(local_13c,value,environment);
    break;
  case 10:
    EvaluationEnvironment_tracefWithPrefix(environment,"Attach");
    local_13c = Mem_Alloc(0x124);
    local_c = 0x19;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObjectAttach_ctor(local_13c,environment);
    break;
  case 0xb:
    EvaluationEnvironment_tracef(environment,"Cancel All",piVar3);
    local_13c = Mem_Alloc(0x124);
    local_c = 0x1a;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObject_CancelCommand_ctor(local_13c,environment);
    break;
  case 0xc:
    EvaluationEnvironment_tracef(environment,"Cancel Event",piVar3);
    local_13c = Mem_Alloc(0x134);
    local_c = 0x1b;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)CommandObject_Prevent_ctor(0,value,environment);
    break;
  case 0xd:
    EvaluationEnvironment_tracef(environment,"Add a Mod Attr filter",piVar3);
    if (*(int *)((int)value + 4) != 8) {
      FUN_012f5a60("value->isValueDataListValue()","..\\common\\common\\node\\ActionNode.cpp",0x1a3)
      ;
    }
    local_124 = 0;
    local_120 = 0;
    local_11c = 0;
    local_c = 0x1d;
    uVar6 = FUN_0123c430();
    FUN_012fffa0(uVar6);
    if ((local_124 == 0) || (local_120 - local_124 >> 2 != 2)) {
      FUN_012f5a60("valueList.size() == 2","..\\common\\common\\node\\ActionNode.cpp",0x1a7);
    }
    piVar5 = (int *)FUN_014045d0();
    if (*(int *)(*piVar5 + 4) == 2) {
      FUN_014045d0();
      iVar8 = FUN_0123c340();
      piVar5 = (int *)ValueDataList_getBackValuePtr(local_128);
      if (*(int *)(*piVar5 + 4) != 5) {
        FUN_012f5a60("valueList.back()->isExpressionTreeValue()",
                     "..\\common\\common\\node\\ActionNode.cpp",0x1ac);
      }
      puVar4 = (undefined4 *)ValueDataList_getBackValuePtr(local_128);
    }
    else {
      piVar5 = (int *)ValueDataList_getBackValuePtr(local_128);
      if (*(int *)(*piVar5 + 4) != 2) {
        FUN_012f5a60("valueList.back()->isIntegerValue()","..\\common\\common\\node\\ActionNode.cpp"
                     ,0x1af);
      }
      ValueDataList_getBackValuePtr(local_128);
      iVar8 = FUN_0123c340();
      piVar5 = (int *)FUN_014045d0();
      if (*(int *)(*piVar5 + 4) != 5) {
        FUN_012f5a60("valueList.front()->isExpressionTreeValue()",
                     "..\\common\\common\\node\\ActionNode.cpp",0x1b1);
      }
      puVar4 = (undefined4 *)FUN_014045d0();
    }
    pvVar10 = (void *)*puVar4;
    piVar5 = (int *)FUN_014045d0();
    if (*(int *)(*piVar5 + 4) != 2) {
      FUN_012f5a60("valueList.front()->isIntegerValue()","..\\common\\common\\node\\ActionNode.cpp",
                   0x1b4);
    }
    piVar5 = (int *)ValueDataList_getBackValuePtr(local_128);
    if (*(int *)(*piVar5 + 4) != 5) {
      FUN_012f5a60("valueList.back()->isExpressionTreeValue()",
                   "..\\common\\common\\node\\ActionNode.cpp",0x1b5);
    }
    local_13c = Mem_Alloc(0x134);
    local_c._0_1_ = 0x1e;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = CommandObject_AddAttrModFilter_ctor(local_13c,iVar8,pvVar10,environment);
    }
    local_c = CONCAT31(local_c._1_3_,0x1d);
    EvaluationEnvironment_addCommandObject(environment,pvVar10,piVar3);
    local_c = 0xffffffff;
    PointerVector_clearStorage(local_128);
    ExceptionList = local_14;
    return true;
  case 0xe:
    EvaluationEnvironment_tracef(environment,"Remove a Mod Attr filter",piVar3);
    local_13c = Mem_Alloc(0x124);
    local_c = 0x1f;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObject_RemoveAttrModFilter_ctor(local_13c,environment);
    break;
  case 0xf:
    EvaluationEnvironment_tracef(environment,"adding inherited game text",piVar3);
    local_13c = Mem_Alloc(0x124);
    local_c = 0x20;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObject_AddGameText_ctor(local_13c,environment);
    break;
  case 0x10:
    EvaluationEnvironment_tracef(environment,"removing inherited game text",piVar3);
    local_13c = Mem_Alloc(0x124);
    local_c = 0x21;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObject_RemoveInheritedGameText_ctor(local_13c,environment);
    break;
  case 0x11:
    EvaluationEnvironment_tracef
              (environment,"Add Attribute Modifier: %d",*(undefined4 *)((int)this + 0x28));
    EvaluationEnvironment_tracefWithPrefix(environment,"With Value: ");
    local_13c = Mem_Alloc(0x144);
    local_c = 0x22;
    if (local_13c == (void *)0x0) {
LAB_014a1ea1:
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = CommandObject_ModifyProperty_ctor
                          (local_13c,bVar2,*(int *)((int)this + 0x28),value,environment,true);
    }
    break;
  case 0x12:
    EvaluationEnvironment_tracef(environment,"Adding Clone",piVar3);
    local_13c = Mem_Alloc(0x128);
    local_c = 0x23;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)CommandObject_Clone_ctor(environment);
    break;
  case 0x13:
    EvaluationEnvironment_tracef(environment,"Suppress GameText ",piVar3);
    local_13c = Mem_Alloc(0x124);
    local_c = 0x24;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObjectSuppressGameText_ctor(local_13c,environment);
    break;
  case 0x14:
    EvaluationEnvironment_tracef(environment,"Set Property",piVar3);
    local_13c = Mem_Alloc(0x138);
    local_c = 0x25;
    if (local_13c == (void *)0x0) goto LAB_014a1ea1;
    pvVar10 = CommandObject_SetProperty_ctor(local_13c,*(int *)((int)this + 0x28),value,environment)
    ;
    break;
  default:
    goto switchD_014a105b_caseD_15;
  case 0x31:
    EvaluationEnvironment_tracefWithPrefix(environment,"DrawCard: ");
    EvaluationEnvironment_ctor();
    local_c = 0x2a;
    EvaluationEnvironment_copyFrom(local_d0,environment,piVar3);
    pvVar10 = EvaluationEnvironment_getTargetCard(environment);
    if (pvVar10 != (void *)0x0) {
      piVar5 = EvaluationEnvironment_getTargetCard(environment);
      cVar1 = (**(code **)(*piVar5 + 0x1e8))();
      if (cVar1 != '\0') {
        iVar8 = (**(code **)(*piVar5 + 0x28))();
        pvVar10 = EvaluationEnvironment_getGame(environment);
        pvVar10 = PlayArea_findPlayerElementById(pvVar10,iVar8);
        FUN_013815b0(pvVar10);
      }
    }
    FUN_012fa910();
    local_c._0_1_ = 0x2b;
    FUN_013010e0(value);
    FUN_01301590(environment);
    FUN_01300d70(0);
    local_13c = Mem_Alloc(0x13c);
    local_c._0_1_ = 0x2c;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      puVar12 = local_d0;
      uVar6 = FUN_0123c340(puVar12);
      pvVar10 = (void *)CommandObject_DrawCard_ctor(6,1,1,uVar6,puVar12);
    }
    local_c._0_1_ = 0x2b;
    EvaluationEnvironment_addCommandObject(environment,pvVar10,piVar3);
    local_c = CONCAT31(local_c._1_3_,0x2a);
    FUN_01300cd0();
LAB_014a12a9:
    local_c = 0xffffffff;
    FUN_01385460();
    ExceptionList = local_14;
    return true;
  case 0x49:
    EvaluationEnvironment_tracefWithPrefix(environment,"IntroduceCard: ");
    local_13c = Mem_Alloc(0x128);
    local_c = 0x18;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObject_IntroduceCard_ctor(local_13c,environment);
    break;
  case 0x4a:
    EvaluationEnvironment_tracefWithPrefix(environment,"Adding Token: ");
    if (*(int *)((int)value + 4) != 0xe) {
      ExceptionList = local_14;
      return true;
    }
    local_138 = (void *)FUN_012fa780();
    local_12c = *(undefined4 **)((int)local_138 + 4);
    local_134 = *local_12c;
    local_130 = local_138;
    cVar1 = FUN_012b0680(&local_130);
    while (cVar1 != '\0') {
      pvVar10 = Mem_Alloc(0x13c);
      local_c = 0x13;
      local_13c = pvVar10;
      if (pvVar10 == (void *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        piVar5 = (int *)FUN_012b1980();
        pvVar7 = environment;
        iVar8 = FUN_012b1980();
        pvVar10 = CommandObject_AddToken_ctor(pvVar10,bVar2,*piVar5,*(void **)(iVar8 + 4),pvVar7);
      }
      local_c = 0xffffffff;
      EvaluationEnvironment_addCommandObject(environment,pvVar10,piVar3);
      FUN_012af3e0();
      cVar1 = FUN_012b0680(&local_130);
    }
    ExceptionList = local_14;
    return true;
  case 0x4b:
    EvaluationEnvironment_tracefWithPrefix(environment,"Remove Token: ");
    if (*(int *)((int)value + 4) != 0xe) {
      ExceptionList = local_14;
      return true;
    }
    local_138 = (void *)FUN_012fa780();
    local_12c = *(undefined4 **)((int)local_138 + 4);
    local_134 = *local_12c;
    local_130 = local_138;
    cVar1 = FUN_012b0680(&local_130);
    while (cVar1 != '\0') {
      pvVar10 = Mem_Alloc(0x13c);
      local_c = 0x14;
      local_13c = pvVar10;
      if (pvVar10 == (void *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        piVar5 = (int *)FUN_012b1980();
        pvVar7 = environment;
        iVar8 = FUN_012b1980();
        pvVar10 = CommandObjectRemoveToken_ctorWithTokenValue
                            (pvVar10,bVar2,*piVar5,*(void **)(iVar8 + 4),pvVar7);
      }
      local_c = 0xffffffff;
      EvaluationEnvironment_addCommandObject(environment,pvVar10,piVar3);
      FUN_012af3e0();
      cVar1 = FUN_012b0680(&local_130);
    }
    ExceptionList = local_14;
    return true;
  case 0x4d:
    EvaluationEnvironment_tracef(environment,"Ready Card",piVar3);
    local_13c = Mem_Alloc(0x138);
    local_c = 0xd;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)CommandObject_ReadyCard_ctorWithCard(environment);
    break;
  case 0x4e:
    EvaluationEnvironment_tracef(environment,"Unready Card",piVar3);
    local_13c = Mem_Alloc(0x138);
    local_c = 0xe;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)CommandObject_UnreadyCard_ctorWithCard(environment);
    break;
  case 0x52:
    EvaluationEnvironment_tracefWithPrefix(environment,"PauseDisplay: ");
    local_13c = Mem_Alloc(0x130);
    local_c = 0x11;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)FUN_01502fd0(value,environment);
    break;
  case 0x53:
    EvaluationEnvironment_tracefWithPrefix(environment,"SetPhaseDialog: ");
    local_13c = Mem_Alloc(0x130);
    local_c = 0x12;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)FUN_014fd270(value,environment);
    break;
  case 0x54:
    EvaluationEnvironment_tracef(environment,"lose game",piVar3);
    local_13c = Mem_Alloc(0x128);
    local_c = 10;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)CommandObject_LoseGame_ctor(environment);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)value + 4) == 2) {
      iVar8 = FUN_0123c340();
      CommandObject_LoseGame_setPlayerId(pvVar10,iVar8);
    }
    goto LAB_014a2567;
  case 0x55:
    EvaluationEnvironment_tracef(environment,"win game",piVar3);
    local_13c = Mem_Alloc(0x128);
    local_c = 0xb;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = CommandObject_WinGame_ctor(local_13c,environment);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)value + 4) == 2) {
      iVar8 = FUN_0123c340();
      CommandObjectWinGame_setWinner(pvVar10,iVar8);
    }
    goto LAB_014a2567;
  case 0x56:
    EvaluationEnvironment_tracefWithPrefix(environment,"PlaySound: ");
    local_13c = Mem_Alloc(0x128);
    local_c = 6;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = (void *)FUN_015099e0(value,environment);
    break;
  case 0x57:
    EvaluationEnvironment_tracef(environment,"Add to Integer List",piVar3);
    local_13c = Mem_Alloc(0x138);
    local_c = 0x27;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = CommandObject_SetProperty_ctor
                          (local_13c,*(int *)((int)this + 0x28),value,environment);
    }
    local_c = 0xffffffff;
    CommandObject_SetProperty_setAddToIntegerListFlag(pvVar10,true);
    goto LAB_014a2567;
  case 0x5a:
    EvaluationEnvironment_tracef(environment,"Remove Property",piVar3);
    local_13c = Mem_Alloc(0x140);
    local_c = 0x26;
    if (local_13c == (void *)0x0) goto LAB_014a2557;
    pvVar10 = CommandObject_RemoveProperty_ctor(local_13c,true,value,environment);
    break;
  case 0x5b:
    EvaluationEnvironment_tracef(environment,"Get Top Card",piVar3);
    uVar6 = 0;
    uVar11 = 0;
    if (*(int *)((int)value + 4) == 0xd) {
      ppvVar13 = &local_13c;
      puVar12 = local_108;
      local_13c = (void *)0x1;
      pvVar10 = (void *)FUN_0123c3d0();
      StdRbTreeInt_find(pvVar10,puVar12,ppvVar13,piVar3);
      local_138 = (void *)*extraout_EAX;
      local_134 = extraout_EAX[1];
      local_130 = (void *)FUN_0123c3d0();
      local_12c = *(undefined4 **)((int)local_130 + 4);
      bVar2 = CheckedTreeIterator_notEquals(&local_138,&local_130);
      if (bVar2) {
        iVar8 = CheckedTreeIterator_derefValue_nodeFlag15();
        uVar6 = *(undefined4 *)(iVar8 + 4);
      }
      ppvVar13 = &local_13c;
      puVar12 = local_f0;
      local_13c = (void *)0x2;
      pvVar10 = (void *)FUN_0123c3d0();
      StdRbTreeInt_find(pvVar10,puVar12,ppvVar13,piVar3);
      local_138 = (void *)*extraout_EAX_00;
      local_134 = extraout_EAX_00[1];
      local_130 = (void *)FUN_0123c3d0();
      local_12c = *(undefined4 **)((int)local_130 + 4);
      bVar2 = CheckedTreeIterator_notEquals(&local_138,&local_130);
      if (bVar2) {
        iVar8 = CheckedTreeIterator_derefValue_nodeFlag15();
        uVar11 = *(undefined4 *)(iVar8 + 4);
      }
    }
    local_13c = Mem_Alloc(0x128);
    local_c = 0x1c;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)CommandObject_GetTopCard_ctor(environment,uVar6,uVar11);
    }
    break;
  case 0x5c:
    EvaluationEnvironment_tracefWithPrefix(environment,"Change turn: ");
    if (*(int *)((int)value + 4) != 2) {
      ExceptionList = local_14;
      return true;
    }
    piVar3 = EvaluationEnvironment_getGame(environment);
    iVar8 = *piVar3;
    uVar6 = FUN_0123c340();
    (**(code **)(iVar8 + 0x50))(uVar6);
    value_ = FUN_0123c340();
    pvVar10 = EvaluationEnvironment_getGame(environment);
    pvVar10 = Game_getCurrentTurn(pvVar10);
    set_field_14(pvVar10,value_);
    ExceptionList = local_14;
    return true;
  case 0x5d:
    EvaluationEnvironment_tracef(environment,"Clear Hinting",piVar3);
    pvVar10 = EvaluationEnvironment_getGame(environment);
    Game_getZoneCollection(pvVar10);
    puVar4 = (undefined4 *)FUN_01268fd0(local_e8);
    local_130 = (void *)*puVar4;
    local_12c = (undefined4 *)puVar4[1];
    puVar4 = (undefined4 *)FUN_01268fa0(local_e0);
    local_138 = (void *)*puVar4;
    local_134 = puVar4[1];
    cVar1 = FUN_01268ea0(&local_130);
    while (cVar1 != '\0') {
      local_13c = Mem_Alloc(0x14);
      local_c = 0;
      if (local_13c == (void *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = (void *)FUN_012f9eb0();
      }
      local_c = 0xffffffff;
      FUN_012f8c70(0x71);
      EvaluationEnvironment_getGame(environment);
      iVar8 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar10,iVar8);
      local_114 = 0;
      local_110 = 0;
      local_10c = 0;
      local_c = 1;
      DisplayActionBuilder_addObjectArg(pvVar10,local_118);
      DisplayActionBuilder_addIntArg(pvVar10,1);
      piVar3 = EvaluationEnvironment_getGame(environment);
      (**(code **)(*piVar3 + 0x154))(pvVar10);
      local_c = 0xffffffff;
      StdVector_clearStorage(local_118);
      CheckedBufferIterator_postIncrement4(&local_138,local_128);
      cVar1 = FUN_01268ea0(&local_130);
    }
    ExceptionList = local_14;
    return true;
  case 0x5e:
    EvaluationEnvironment_tracef(environment,"Show UI Effect",piVar3);
    FUN_012fa910();
    local_c = 0x2f;
    FUN_013010e0(value);
    if (local_124 == 0xd) {
      pvVar10 = (void *)FUN_0123c3d0();
      local_13c = (void *)0x1;
      StdRbTreeInt_find(pvVar10,local_f8,&local_13c,piVar3);
      local_130 = (void *)*extraout_EAX_01;
      local_12c = (undefined4 *)extraout_EAX_01[1];
      local_134 = *(int *)((int)pvVar10 + 4);
      local_138 = pvVar10;
      bVar2 = CheckedTreeIterator_notEquals(&local_130,&local_138);
      if (bVar2) {
        iVar8 = CheckedTreeIterator_derefValue_nodeFlag15();
        uVar6 = *(undefined4 *)(iVar8 + 4);
        FUN_01300680(2);
        local_120 = uVar6;
      }
    }
    FUN_01301590(environment);
    FUN_01300d70(0);
    pvVar10 = Mem_Alloc(0x128);
    local_c._0_1_ = 0x30;
    local_13c = pvVar10;
    if (pvVar10 == (void *)0x0) {
      local_c = CONCAT31(local_c._1_3_,0x2f);
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar7 = environment;
      pvVar9 = (void *)FUN_0123c340();
      pvVar10 = CommandObject_UIEffect_ctor(pvVar10,pvVar9,pvVar7);
      local_c = CONCAT31(local_c._1_3_,0x2f);
    }
    goto LAB_014a20b2;
  case 0x5f:
    EvaluationEnvironment_tracefWithPrefix(environment,"Show Arrow ");
    local_13c = Mem_Alloc(0x14);
    local_c = 0x2d;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)FUN_012f9eb0();
    }
    local_c = 0xffffffff;
    FUN_012f8c70(0xa8);
    EvaluationEnvironment_getGame(environment);
    iVar8 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar10,iVar8);
    if (*(int *)((int)value + 4) == 7) {
      piVar3 = local_d8;
      pvVar7 = (void *)FUN_0123c400();
      piVar3 = StdStringVector_makeEndIterator(pvVar7,piVar3);
      local_130 = (void *)*piVar3;
      local_12c = (undefined4 *)piVar3[1];
      piVar3 = local_100;
      pvVar7 = (void *)FUN_0123c400();
      piVar3 = StdStringVector_makeBeginIterator(pvVar7,piVar3);
      local_138 = (void *)*piVar3;
      local_134 = piVar3[1];
      cVar1 = FUN_01249260(&local_130);
      while (cVar1 != '\0') {
        pvVar7 = (void *)FUN_01248f70();
        DisplayActionBuilder_addStringArg(pvVar10,pvVar7);
        FUN_012a8b80(local_128,0);
        cVar1 = FUN_01249260(&local_130);
      }
    }
    goto LAB_014a233b;
  case 0x60:
    EvaluationEnvironment_tracef(environment,"Hide Arrows",piVar3);
    local_13c = Mem_Alloc(0x14);
    local_c = 0x2e;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)FUN_012f9eb0();
    }
    local_c = 0xffffffff;
    FUN_012f8c70(0xa9);
    EvaluationEnvironment_getGame(environment);
    iVar8 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar10,iVar8);
LAB_014a233b:
    piVar3 = EvaluationEnvironment_getGame(environment);
    (**(code **)(*piVar3 + 0x154))(pvVar10);
    ExceptionList = local_14;
    return true;
  case 0x62:
    goto switchD_014a105b_caseD_62;
  case 0x66:
    EvaluationEnvironment_tracef(environment,"Remove Property",piVar3);
    FUN_012fa910();
    local_c = 0x28;
    uVar6 = *(undefined4 *)((int)this + 0x28);
    FUN_01300680(2);
    local_120 = uVar6;
    local_13c = Mem_Alloc(0x140);
    local_c._0_1_ = 0x29;
    if (local_13c == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = CommandObject_RemoveProperty_ctor(local_13c,true,local_128,environment);
    }
    local_c = CONCAT31(local_c._1_3_,0x28);
    CommandObject_RemoveProperty_setRemoveResolvedValueFlag(pvVar10,true);
    FUN_014ff6c0(value);
LAB_014a20b2:
    EvaluationEnvironment_addCommandObject(environment,pvVar10,piVar3);
    local_c = 0xffffffff;
    FUN_01300cd0();
    ExceptionList = local_14;
    return true;
  }
LAB_014a2566:
  local_c = 0xffffffff;
LAB_014a2567:
  EvaluationEnvironment_addCommandObject(environment,pvVar10,piVar3);
  ExceptionList = local_14;
  return true;
}

