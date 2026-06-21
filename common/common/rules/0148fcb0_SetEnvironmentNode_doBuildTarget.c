// addr: 0x0148fcb0
// name: SetEnvironmentNode_doBuildTarget
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Type propagation algorithm not settling */
/* Setting prototype: bool SetEnvironmentNode_doBuildTarget(void * this, void * log) */

bool __thiscall SetEnvironmentNode_doBuildTarget(void *this,void *log)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  void *card;
  void *env;
  undefined4 uVar5;
  char *formatText;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and stores a target into the evaluation environment for
                       SetEnvironmentNode, handling target1/2, dynamic cards, target3/4, and custom
                       card lists, then optionally evaluates a follow-up child node. Evidence is the
                       exact log "SetEnvironmentNode::doBuildTarget %d" and branch logs "Setting
                       Target1", "Setting Dynamic Card", and "Adding CustomCard". */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1ed8;
  local_c = ExceptionList;
  card = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef
            (log,"SetEnvironmentNode::doBuildTarget %d",*(undefined4 *)((int)this + 0x10));
  iVar6 = *(int *)((int)this + 0x10);
  if (iVar6 < 0x38) {
    if (iVar6 == 0x37) {
      EvaluationEnvironment_tracef(log,"Setting Dynamic Card2",card);
      uVar5 = (**(code **)(*(int *)this + 0x50))
                        (log,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
      uVar5 = FUN_00d8d382(uVar5);
      FUN_013870c0(uVar5);
      formatText = Rules_getVariable27Card(log);
    }
    else {
      switch(iVar6) {
      case 1:
        EvaluationEnvironment_tracef(log,"Setting Target1",card);
        env = (void *)(**(code **)(*(int *)this + 0x50))(log);
        EvaluationEnvironment_setCurrentTargetFromElement(log,env,card);
        formatText = EvaluationEnvironment_resolveTarget(log);
        break;
      case 2:
        EvaluationEnvironment_tracef(log,"Setting Target2",card);
        uVar5 = (**(code **)(*(int *)this + 0x50))(log);
        EvaluationEnvironment_setPlayElementId(uVar5);
        formatText = EvaluationEnvironment_resolveTarget2(log);
        break;
      default:
switchD_0148fd16_caseD_3:
        EvaluationEnvironment_tracef(log,"Unknown target",card);
        ExceptionList = local_c;
        return false;
      case 0x17:
        cVar3 = (**(code **)(*(int *)this + 0x58))(log);
        if (cVar3 != '\x01') {
          ExceptionList = local_c;
          return (bool)cVar3;
        }
        goto LAB_0148fd2e;
      case 0x30:
        EvaluationEnvironment_tracef(log,"Setting Dynamic Card",card);
        uVar5 = (**(code **)(*(int *)this + 0x50))
                          (log,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
        uVar5 = FUN_00d8d382(uVar5);
        EvaluationEnvironment_setDynamicCardReturn(uVar5);
        formatText = (char *)Rules_getDynamicCardReturnCard();
      }
    }
  }
  else {
    if (iVar6 != 0x38) {
      if (iVar6 == 0x422) {
        EvaluationEnvironment_tracef(log,"Setting Target 3",card);
        iVar6 = (**(code **)(*(int *)this + 0x50))(log);
        if (iVar6 == 0) {
          ExceptionList = local_c;
          return false;
        }
        iVar6 = PlayElement_getId();
        set_integer_value_for_key(0x36,iVar6);
      }
      else {
        if (iVar6 != 0x423) goto switchD_0148fd16_caseD_3;
        EvaluationEnvironment_tracef(log,"Setting Target 4",card);
        iVar6 = (**(code **)(*(int *)this + 0x50))(log);
        if (iVar6 == 0) {
          ExceptionList = local_c;
          return false;
        }
        iVar6 = PlayElement_getId();
        set_integer_value_for_key(0x37,iVar6);
      }
      goto LAB_0148fd2e;
    }
    EvaluationEnvironment_tracef(log,"Adding CustomCard",card);
    piVar7 = (int *)**(int **)((int)this + 8);
    if (piVar7 == *(int **)((int)this + 8)) {
      FUN_00d83c2d();
    }
    bVar4 = ValueData_containsInt((void *)piVar7[4],0x3b);
    if (bVar4) {
      piVar7 = EvaluationEnvironment_getOriginCard(log);
      if (piVar7 == (int *)0x0) {
        ExceptionList = local_c;
        return false;
      }
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4 = 0;
      (**(code **)(*piVar7 + 0x34))(local_1c);
      piVar8 = (int *)FUN_01258ef0(auStack_2c);
      iVar6 = *piVar8;
      puVar1 = (undefined4 *)piVar8[1];
      piVar8 = (int *)FUN_01258ec0(auStack_24);
      iVar2 = *piVar8;
      puVar9 = (undefined4 *)piVar8[1];
      while( true ) {
        if ((iVar2 == 0) || (iVar2 != iVar6)) {
          FUN_00d83c2d();
        }
        if (puVar9 == puVar1) break;
        if (iVar2 == 0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(iVar2 + 8) <= puVar9) {
          FUN_00d83c2d();
        }
        if ((int *)*puVar9 != piVar7) {
          FUN_01386f60((int *)*puVar9);
        }
        if (*(undefined4 **)(iVar2 + 8) <= puVar9) {
          FUN_00d83c2d();
        }
        puVar9 = puVar9 + 1;
      }
      local_4 = 0xffffffff;
      if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      goto LAB_0148fd2e;
    }
    uVar5 = (**(code **)(*(int *)this + 0x50))
                      (log,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    formatText = (char *)FUN_00d8d382(uVar5);
    EvaluationEnvironment_logCardMessage(log,"Adding card to custom cardlist: ",formatText,card);
    FUN_01386f60(formatText);
  }
  if (formatText == (void *)0x0) {
    ExceptionList = local_c;
    return false;
  }
LAB_0148fd2e:
  if (*(char *)((int)this + 0x34) == '\x01') {
    (**(code **)(*(int *)this + 0x60))(log);
  }
  ExceptionList = local_c;
  return true;
}

