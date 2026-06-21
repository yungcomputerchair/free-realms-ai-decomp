// addr: 0x01330050
// name: CWGame_evaluateCostModifier
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall CWGame_evaluateCostModifier(void *param_1,void *param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  undefined4 uVar13;
  undefined1 uStack_b1;
  int local_b0;
  void *local_ac;
  uint local_a8;
  int iStack_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates a cost modifier/precondition in a child EvaluationEnvironment for a
                       target play element. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167a94b;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff3c);
  ExceptionList = &local_c;
  local_b0 = 0;
  local_ac = param_1;
  pvVar3 = EvaluationEnvironment_resolveTarget(param_3);
  iVar5 = 0;
  if (pvVar3 != (void *)0x0) {
    EvaluationEnvironment_ctor();
    local_4 = 0;
    EvaluationEnvironment_initChildFromEnvironment(local_a0,param_3,pvVar2);
    uVar6 = *(uint *)((int)param_1 + 0x3c4);
    local_a8 = uVar6;
    if (uVar6 < *(uint *)((int)param_1 + 0x3c0)) {
      FUN_00d83c2d();
    }
    pvVar3 = EvaluationEnvironment_resolveTarget(param_3);
    EvaluationEnvironment_setCurrentTargetFromElement(local_a0,param_2,pvVar2);
    EvaluationEnvironment_setPlayElementId(pvVar3);
    EvaluationEnvironment_setBooleanKey4(0);
    FUN_01381350(0);
    uVar7 = *(uint *)((int)param_1 + 0x3c0);
    iVar5 = extraout_EDX;
    if (*(uint *)((int)param_1 + 0x3c4) < uVar7) {
      FUN_00d83c2d();
      iVar5 = extraout_EDX_00;
    }
    while( true ) {
      if (param_1 == (void *)0xfffffc44) {
        FUN_00d83c2d();
        iVar5 = extraout_EDX_01;
      }
      if (uVar7 == uVar6) break;
      if (param_1 == (void *)0xfffffc44) {
        FUN_00d83c2d();
        iVar5 = extraout_EDX_02;
      }
      if (*(uint *)((int)param_1 + 0x3c4) <= uVar7) {
        FUN_00d83c2d();
        iVar5 = extraout_EDX_03;
      }
      uVar13 = 0;
      pTVar12 = &AttributeModifier::RTTI_Type_Descriptor;
      pTVar11 = &PlayElement::RTTI_Type_Descriptor;
      uVar10 = 0;
      pvVar2 = find_play_element_in_maps(local_ac,iVar5);
      uVar8 = FUN_00d8d382(pvVar2,uVar10,pTVar11,pTVar12,uVar13);
      iVar5 = (int)((ulonglong)uVar8 >> 0x20);
      if ((int *)uVar8 != (int *)0x0) {
        uVar9 = FUN_01418e00();
        iVar5 = (int)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 != 0) {
          piVar4 = (int *)FUN_01418e00();
          cVar1 = (**(code **)(*piVar4 + 0x4c))();
          iVar5 = extraout_EDX_04;
          if (cVar1 != '\0') {
            iVar5 = FUN_01418e00();
            if (iVar5 != 0) {
              pvVar2 = (void *)FUN_01418e00();
              set_play_element_id_field(local_a0,pvVar2);
            }
            cVar1 = (**(code **)(*(int *)uVar8 + 0x44))(local_a0,&iStack_a4,&uStack_b1);
            iVar5 = extraout_EDX_05;
            if (cVar1 != '\0') {
              local_b0 = local_b0 + iStack_a4;
            }
          }
        }
      }
      if (*(uint *)((int)param_1 + 0x3c4) <= uVar7) {
        FUN_00d83c2d();
        iVar5 = extraout_EDX_06;
      }
      uVar7 = uVar7 + 4;
      uVar6 = local_a8;
    }
    local_4 = 0xffffffff;
    FUN_01385460();
    iVar5 = local_b0;
  }
  ExceptionList = local_c;
  return iVar5;
}

