// addr: 0x01390630
// name: Card_calculateDynamicMappedKeywordModifier
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
Card_calculateDynamicMappedKeywordModifier(int *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  void *env;
  bool bVar3;
  char cVar4;
  int *key;
  int iVar5;
  undefined4 *puVar6;
  int *extraout_EAX;
  void *pvVar7;
  int *piVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int elementId_;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  undefined4 uVar14;
  char cStack_c9;
  int iStack_c8;
  undefined4 *puStack_c4;
  void *pvStack_c0;
  undefined4 uStack_bc;
  void *pvStack_b8;
  undefined4 *puStack_b4;
  int aiStack_b0 [2];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Calculates a dynamic mapped keyword modifier for a card and logs mapped
                       keyword results. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01683cdb;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff24);
  ExceptionList = &local_c;
  iVar5 = (**(code **)(*param_1 + 0x28))();
  pvStack_b8 = PlayArea_findPlayerElementById((void *)param_1[0xc],iVar5);
  puVar6 = (undefined4 *)FUN_0138eb80(aiStack_b0,&param_2);
  piVar8 = (int *)*puVar6;
  puStack_c4 = (undefined4 *)param_1[0x3f];
  iVar5 = puVar6[1];
  if ((piVar8 == (int *)0x0) || (piVar8 != param_1 + 0x3e)) {
    FUN_00d83c2d();
  }
  if ((undefined4 *)iVar5 != puStack_c4) {
    pvStack_c0 = (void *)0xdc;
    if (piVar8 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar5 == piVar8[1]) {
      FUN_00d83c2d();
    }
    PropertyTree21_lowerBound((void *)(iVar5 + 0x10),auStack_a8,&pvStack_c0,key);
    iVar9 = extraout_EAX[1];
    iVar1 = *extraout_EAX;
    puStack_c4 = (undefined4 *)iVar9;
    if (iVar5 == piVar8[1]) {
      FUN_00d83c2d();
      iVar9 = extraout_EDX;
    }
    iVar2 = *(int *)(iVar5 + 0x14);
    if ((iVar1 == 0) || (iVar1 != iVar5 + 0x10)) {
      FUN_00d83c2d();
      iVar9 = extraout_EDX_00;
    }
    if (puStack_c4 != (undefined4 *)iVar2) {
      if (iVar1 == 0) {
        FUN_00d83c2d();
        iVar9 = extraout_EDX_01;
      }
      if (puStack_c4 == (undefined4 *)*(int *)(iVar1 + 4)) {
        FUN_00d83c2d();
        iVar9 = extraout_EDX_02;
      }
      puStack_b4 = *(undefined4 **)((int)puStack_c4 + 0x18);
      iVar5 = (int)puStack_c4 + 0x10;
      aiStack_b0[0] = iVar5;
      if (puStack_b4 < *(undefined4 **)((int)puStack_c4 + 0x14)) {
        FUN_00d83c2d();
        iVar9 = extraout_EDX_03;
      }
      pvStack_c0 = find_play_element_in_maps((void *)param_1[0xc],iVar9);
      puVar6 = puStack_c4;
      if (pvStack_c0 != (void *)0x0) {
        if (puStack_c4 == (undefined4 *)*(int *)(iVar1 + 4)) {
          FUN_00d83c2d();
        }
        puVar10 = *(undefined4 **)((int)puVar6 + 0x14);
        iStack_c8 = (int)puVar6 + 0x10;
        if (*(undefined4 **)((int)puVar6 + 0x18) < puVar10) {
          FUN_00d83c2d();
        }
        while( true ) {
          iVar9 = iStack_c8;
          puStack_c4 = puVar10;
          if ((iStack_c8 == 0) || (iStack_c8 != iVar5)) {
            FUN_00d83c2d();
          }
          if (puVar10 == puStack_b4) break;
          if (iVar9 == 0) {
            FUN_00d83c2d();
          }
          if (*(undefined4 **)(iVar9 + 8) <= puVar10) {
            FUN_00d83c2d();
          }
          env = param_3;
          EvaluationEnvironment_tracef(param_3,"found mapped keyword mod: %d",*puVar10);
          uVar14 = 0;
          pTVar13 = &AttributeModifier::RTTI_Type_Descriptor;
          pTVar12 = &PlayElement::RTTI_Type_Descriptor;
          uVar11 = 0;
          pvVar7 = find_play_element_in_maps((void *)param_1[0xc],elementId_);
          piVar8 = (int *)FUN_00d8d382(pvVar7,uVar11,pTVar12,pTVar13,uVar14);
          if (piVar8 != (int *)0x0) {
            uStack_bc = 0;
            cStack_c9 = '\0';
            EvaluationEnvironment_ctor();
            uStack_4 = 0;
            EvaluationEnvironment_initChildFromEnvironment(auStack_a0,env,key);
            set_play_element_id_field(auStack_a0,pvStack_c0);
            FUN_013815b0(pvStack_b8);
            iVar5 = FUN_01418e00();
            if ((iVar5 != 0) &&
               (bVar3 = Game_shouldLogAttributeModifierDebug((void *)param_1[0xc]), bVar3)) {
              iVar5 = FUN_01418e00();
              if (*(uint *)(iVar5 + 0x13c) < 0x10) {
                iVar5 = iVar5 + 0x128;
              }
              else {
                iVar5 = *(int *)(iVar5 + 0x128);
              }
              if (*(uint *)((int)pvStack_c0 + 0x13c) < 0x10) {
                iVar9 = (int)pvStack_c0 + 0x128;
              }
              else {
                iVar9 = *(int *)((int)pvStack_c0 + 0x128);
              }
              FUN_01418e00();
              uVar11 = PlayElement_getId();
              uVar11 = PlayElement_getId(iVar5,uVar11);
              uVar11 = (**(code **)(*param_1 + 0x28))(iVar9,uVar11);
              Game_logGeneral((void *)param_1[0xc],
                              "Calculating Dynamic Mapped Modifier(%d) on card: %s(%d) from card: %s(%d)"
                              ,uVar11);
              puVar10 = puStack_c4;
            }
            cVar4 = (**(code **)(*piVar8 + 0x44))(auStack_a0,&uStack_bc,&cStack_c9);
            if ((cVar4 == '\0') && (cStack_c9 == '\0')) {
              Game_logGeneral((void *)param_1[0xc],"got bad result?",key);
            }
            uStack_4 = 0xffffffff;
            FUN_01385460();
          }
          if (*(undefined4 **)(iStack_c8 + 8) <= puVar10) {
            FUN_00d83c2d();
          }
          puVar10 = puVar10 + 1;
          iVar5 = aiStack_b0[0];
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

