// addr: 0x01390280
// name: Card_calculateDynamicMappedModifier
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
Card_calculateDynamicMappedModifier(int *param_1,void *param_2,int param_3,void *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *key;
  int iVar5;
  int *piVar6;
  int *extraout_EAX;
  void *pvVar7;
  int *piVar8;
  int elementId_;
  undefined4 *puVar9;
  undefined4 uVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  undefined4 uVar13;
  char local_d9;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined4 *local_c8;
  int iStack_c4;
  undefined4 *local_c0;
  undefined1 local_bc [8];
  int iStack_b4;
  int local_b0 [2];
  undefined1 local_a8 [8];
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Calculates a dynamic mapped numeric modifier for a card and logs mapped
                       modifier results. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01683ca6;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff14);
  ExceptionList = &local_c;
  if (param_2 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    local_d0 = 0;
    local_d8 = PlayElement_getId();
    piVar6 = (int *)FUN_0138eb80(local_b0,&local_d8);
    piVar8 = (int *)*piVar6;
    local_c8 = (undefined4 *)param_1[0x3f];
    puVar9 = (undefined4 *)piVar6[1];
    if ((piVar8 == (int *)0x0) || (piVar8 != param_1 + 0x3e)) {
      FUN_00d83c2d();
    }
    if (puVar9 != local_c8) {
      local_d8 = param_3;
      if (piVar8 == (int *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar9 == (undefined4 *)piVar8[1]) {
        FUN_00d83c2d();
      }
      PropertyTree21_lowerBound(puVar9 + 4,local_a8,&local_d8,key);
      puVar1 = (undefined4 *)*extraout_EAX;
      local_d4 = extraout_EAX[1];
      if (puVar9 == (undefined4 *)piVar8[1]) {
        FUN_00d83c2d();
      }
      iVar5 = puVar9[5];
      if ((puVar1 == (undefined4 *)0x0) || (puVar1 != puVar9 + 4)) {
        FUN_00d83c2d();
      }
      if (local_d4 != iVar5) {
        if (puVar1 == (undefined4 *)0x0) {
          FUN_00d83c2d();
        }
        if (local_d4 == puVar1[1]) {
          FUN_00d83c2d();
        }
        local_c0 = *(undefined4 **)(local_d4 + 0x18);
        iVar5 = local_d4 + 0x10;
        local_b0[0] = iVar5;
        if (local_c0 < *(undefined4 **)(local_d4 + 0x14)) {
          FUN_00d83c2d();
        }
        if (local_d4 == puVar1[1]) {
          FUN_00d83c2d();
        }
        puVar9 = *(undefined4 **)(local_d4 + 0x14);
        local_cc = local_d4 + 0x10;
        if (*(undefined4 **)(local_d4 + 0x18) < puVar9) {
          FUN_00d83c2d();
        }
        while( true ) {
          iVar2 = local_cc;
          local_c8 = puVar9;
          if ((local_cc == 0) || (local_cc != iVar5)) {
            FUN_00d83c2d();
          }
          if (puVar9 == local_c0) break;
          if (iVar2 == 0) {
            FUN_00d83c2d();
          }
          if (*(undefined4 **)(iVar2 + 8) <= puVar9) {
            FUN_00d83c2d();
          }
          EvaluationEnvironment_tracef(param_4,"found mapped mod: %d",*puVar9);
          uVar13 = 0;
          pTVar12 = &AttributeModifier::RTTI_Type_Descriptor;
          pTVar11 = &PlayElement::RTTI_Type_Descriptor;
          uVar10 = 0;
          pvVar7 = find_play_element_in_maps((void *)param_1[0xc],elementId_);
          piVar8 = (int *)FUN_00d8d382(pvVar7,uVar10,pTVar11,pTVar12,uVar13);
          if (piVar8 != (int *)0x0) {
            local_d8 = 0;
            local_d9 = '\0';
            EvaluationEnvironment_ctor();
            local_4 = 0;
            EvaluationEnvironment_initChildFromEnvironment(local_a0,param_4,key);
            iVar5 = (**(code **)(*param_1 + 0x28))();
            pvVar7 = PlayArea_findPlayerElementById((void *)param_1[0xc],iVar5);
            FUN_013815b0(pvVar7);
            set_play_element_id_field(local_a0,param_2);
            iVar5 = FUN_01418e00();
            if ((iVar5 != 0) &&
               (bVar3 = Game_shouldLogAttributeModifierDebug((void *)param_1[0xc]), bVar3)) {
              iStack_c4 = FUN_01418e00();
              if (*(uint *)(iStack_c4 + 0x13c) < 0x10) {
                iStack_c4 = iStack_c4 + 0x128;
              }
              else {
                iStack_c4 = *(int *)(iStack_c4 + 0x128);
              }
              if (*(uint *)((int)param_2 + 0x13c) < 0x10) {
                iVar5 = (int)param_2 + 0x128;
              }
              else {
                iVar5 = *(int *)((int)param_2 + 0x128);
              }
              FUN_01418e00();
              uVar10 = PlayElement_getId();
              uVar10 = PlayElement_getId(iStack_c4,uVar10);
              uVar10 = (**(code **)(*param_1 + 0x28))(iVar5,uVar10);
              Game_logGeneral((void *)param_1[0xc],
                              "Calculating Dynamic Mapped Modifier(%d) on card: %s(%d) from card: %s(%d)"
                              ,uVar10);
              puVar9 = local_c8;
            }
            cVar4 = (**(code **)(*piVar8 + 0x44))(local_a0,&local_d8,&local_d9);
            if ((cVar4 == '\0') && (local_d9 == '\0')) {
              Game_logGeneral((void *)param_1[0xc],"got bad result?",key);
            }
            else {
              local_d0 = local_d0 + local_d8;
            }
            local_4 = 0xffffffff;
            FUN_01385460();
          }
          if (*(undefined4 **)(local_cc + 8) <= puVar9) {
            FUN_00d83c2d();
          }
          puVar9 = puVar9 + 1;
          iVar5 = local_b0[0];
        }
      }
    }
    FUN_012fa910();
    local_4 = 1;
    FUN_01300680(2);
    iVar5 = local_d0;
    iStack_b4 = local_d0;
    (**(code **)(*param_1 + 0xa4))(param_2,param_3,local_bc,1);
    EvaluationEnvironment_tracef(param_4,"got returnVal: %d",iVar5);
    local_4 = 0xffffffff;
    FUN_01300cd0();
  }
  ExceptionList = local_c;
  return iVar5;
}

