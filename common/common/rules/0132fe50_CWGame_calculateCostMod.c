// addr: 0x0132fe50
// name: CWGame_calculateCostMod
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall CWGame_calculateCostMod(void *param_1,char *param_2,void *param_3)

{
  char cVar1;
  void *card;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  uint uVar5;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  undefined1 local_b1;
  int local_b0;
  int local_ac;
  void *local_a8;
  uint local_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Calculates a cost modifier in a child EvaluationEnvironment and logs attr-mod
                       failures/return values. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167a91b;
  local_c = ExceptionList;
  card = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff3c);
  ExceptionList = &local_c;
  local_a8 = param_1;
  EvaluationEnvironment_logCardMessage(param_3,"CWGame::calculateCostMod ",param_2,card);
  local_b0 = 0;
  EvaluationEnvironment_ctor();
  local_4 = 0;
  EvaluationEnvironment_initChildFromEnvironment(local_a0,param_3,card);
  local_a4 = *(uint *)((int)param_1 + 0x3b4);
  if (local_a4 < *(uint *)((int)param_1 + 0x3b0)) {
    FUN_00d83c2d();
  }
  pvVar2 = EvaluationEnvironment_resolveTarget(param_3);
  EvaluationEnvironment_setCurrentTargetFromElement(local_a0,param_2,card);
  EvaluationEnvironment_setPlayElementId(pvVar2);
  EvaluationEnvironment_setBooleanKey4(0);
  FUN_01381350(0);
  uVar5 = *(uint *)((int)param_1 + 0x3b0);
  iVar4 = extraout_EDX;
  if (*(uint *)((int)param_1 + 0x3b4) < uVar5) {
    FUN_00d83c2d();
    iVar4 = extraout_EDX_00;
  }
  while( true ) {
    if (param_1 == (void *)0xfffffc54) {
      FUN_00d83c2d();
      iVar4 = extraout_EDX_01;
    }
    if (uVar5 == local_a4) break;
    if (param_1 == (void *)0xfffffc54) {
      FUN_00d83c2d();
      iVar4 = extraout_EDX_02;
    }
    if (*(uint *)((int)param_1 + 0x3b4) <= uVar5) {
      FUN_00d83c2d();
      iVar4 = extraout_EDX_03;
    }
    uVar9 = 0;
    pTVar8 = &AttributeModifier::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar2 = find_play_element_in_maps(local_a8,iVar4);
    piVar3 = (int *)FUN_00d8d382(pvVar2,uVar6,pTVar7,pTVar8,uVar9);
    if (piVar3 == (int *)0x0) {
      EvaluationEnvironment_tracef(param_3,"AttrMod is null.",card);
      iVar4 = extraout_EDX_04;
    }
    else {
      iVar4 = FUN_01418e00();
      if (iVar4 == 0) {
        EvaluationEnvironment_tracef(param_3,"AttrMod origin card is null.",card);
        iVar4 = extraout_EDX_05;
      }
      else {
        iVar4 = FUN_01418e00();
        if (iVar4 != 0) {
          pvVar2 = (void *)FUN_01418e00();
          set_play_element_id_field(local_a0,pvVar2);
        }
        cVar1 = (**(code **)(*piVar3 + 0x44))(local_a0,&local_ac,&local_b1);
        if (cVar1 == '\0') {
          EvaluationEnvironment_tracef(param_3,"AttrMod returned false.",card);
          iVar4 = extraout_EDX_06;
        }
        else {
          EvaluationEnvironment_tracef(param_3,"AttrMod returned value %d.",local_ac);
          local_b0 = local_b0 + local_ac;
          iVar4 = extraout_EDX_07;
        }
      }
    }
    if (*(uint *)((int)param_1 + 0x3b4) <= uVar5) {
      FUN_00d83c2d();
      iVar4 = extraout_EDX_08;
    }
    uVar5 = uVar5 + 4;
  }
  local_4 = 0xffffffff;
  FUN_01385460();
  ExceptionList = local_c;
  return local_b0;
}

