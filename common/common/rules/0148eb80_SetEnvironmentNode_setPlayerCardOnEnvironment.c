// addr: 0x0148eb80
// name: SetEnvironmentNode_setPlayerCardOnEnvironment
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
SetEnvironmentNode_setPlayerCardOnEnvironment(int param_1,void *param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  void *unaff_EDI;
  
                    /* Sets an environment target/dynamic card from a player-card id, logging
                       failures when play area lookup fails. */
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 < 0x31) {
    if (iVar5 == 0x30) {
      uVar4 = FUN_00d8d382(param_2,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,
                           0);
      EvaluationEnvironment_setDynamicCardReturn(uVar4);
      goto LAB_0148ecbb;
    }
    if (iVar5 == 1) {
      EvaluationEnvironment_setCurrentTargetFromElement(param_3,param_2,unaff_EDI);
      goto LAB_0148ecbb;
    }
    if (iVar5 == 2) {
      EvaluationEnvironment_setPlayElementId(param_2);
      goto LAB_0148ecbb;
    }
    if (iVar5 == 0x11) {
      pvVar2 = (void *)FUN_00d8d382(param_2,0,&PlayElement::RTTI_Type_Descriptor,
                                    &Card::RTTI_Type_Descriptor,0);
      set_play_element_id_field(param_3,pvVar2);
      goto LAB_0148ecbb;
    }
  }
  else {
    if (iVar5 == 0x37) {
      uVar4 = FUN_00d8d382(param_2,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,
                           0);
      FUN_013870c0(uVar4);
      goto LAB_0148ecbb;
    }
    if (iVar5 == 0x422) {
      if (param_2 == (void *)0x0) {
        set_integer_value_for_key(0x36,0);
      }
      else {
        iVar5 = PlayElement_getId();
        set_integer_value_for_key(0x36,iVar5);
      }
      goto LAB_0148ecbb;
    }
    if (iVar5 == 0x423) {
      if (param_2 == (void *)0x0) {
        set_integer_value_for_key(0x37,0);
      }
      else {
        iVar5 = PlayElement_getId();
        set_integer_value_for_key(0x37,iVar5);
      }
      goto LAB_0148ecbb;
    }
  }
  EvaluationEnvironment_tracef(param_3,"couldn\'t get play area to set %d",iVar5);
LAB_0148ecbb:
  piVar3 = (int *)FUN_00d8d382(param_2,0,&PlayElement::RTTI_Type_Descriptor,
                               &Card::RTTI_Type_Descriptor,0);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x1e8))();
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(*piVar3 + 0x28))();
      EvaluationEnvironment_tracef(param_3,"got PlayerCard, setting %d on env.",uVar4);
      iVar5 = (**(code **)(*piVar3 + 0x28))();
      pvVar2 = EvaluationEnvironment_getGame(param_3);
      pvVar2 = PlayArea_findPlayerElementById(pvVar2,iVar5);
      FUN_013876d0(pvVar2);
    }
  }
  return;
}

