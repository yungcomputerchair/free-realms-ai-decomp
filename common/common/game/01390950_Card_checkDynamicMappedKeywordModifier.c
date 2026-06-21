// addr: 0x01390950
// name: Card_checkDynamicMappedKeywordModifier
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall Card_checkDynamicMappedKeywordModifier(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int *extraout_EAX;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int elementId_;
  undefined4 *puVar9;
  int *unaff_EBP;
  int iVar10;
  undefined4 uVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  undefined4 uVar14;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  undefined4 *local_1c;
  int local_18 [3];
  undefined4 *local_c;
  undefined1 local_8 [8];
  
                    /* Checks whether a card has a dynamic mapped keyword modifier, logging the
                       keyword id, not-flag state, mapped modifier id, and source/target cards when
                       attribute-modifier debug logging is enabled. */
  if (param_2 == 0) {
    return false;
  }
  local_20 = param_3;
  bVar3 = PackedId_consumeHighBitFlag_alt(&local_20);
  local_28 = PlayElement_getId();
  piVar5 = (int *)FUN_0138eb80(local_18,&local_28);
  piVar1 = (int *)*piVar5;
  local_c = (undefined4 *)param_1[0x3f];
  iVar7 = piVar5[1];
  if ((piVar1 == (int *)0x0) || (piVar1 != param_1 + 0x3e)) {
    FUN_00d83c2d();
  }
  if ((undefined4 *)iVar7 != local_c) {
    local_28 = 0xdc;
    if (piVar1 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar7 == piVar1[1]) {
      FUN_00d83c2d();
    }
    PropertyTree21_lowerBound((void *)(iVar7 + 0x10),local_8,&local_28,unaff_EBP);
    local_24 = extraout_EAX[1];
    iVar2 = *extraout_EAX;
    if (iVar7 == piVar1[1]) {
      FUN_00d83c2d();
    }
    iVar10 = *(int *)(iVar7 + 0x14);
    if ((iVar2 == 0) || (iVar2 != iVar7 + 0x10)) {
      FUN_00d83c2d();
    }
    if (local_24 != iVar10) {
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (local_24 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      iVar7 = local_24;
      local_1c = *(undefined4 **)(local_24 + 0x18);
      iVar10 = local_24 + 0x10;
      local_18[0] = iVar10;
      if (local_1c < *(undefined4 **)(local_24 + 0x14)) {
        FUN_00d83c2d();
      }
      if (local_24 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      puVar9 = *(undefined4 **)(iVar7 + 0x14);
      if (*(undefined4 **)(iVar7 + 0x18) < puVar9) {
        FUN_00d83c2d();
      }
      while( true ) {
        local_c = puVar9;
        if (iVar10 == 0) {
          FUN_00d83c2d();
        }
        if (puVar9 == local_1c) break;
        if (iVar10 == 0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(iVar10 + 8) <= puVar9) {
          FUN_00d83c2d();
        }
        Game_logGeneral((void *)param_1[0xc],"found mapped mod: %d",*puVar9);
        uVar14 = 0;
        pTVar13 = &AttributeModifier::RTTI_Type_Descriptor;
        pTVar12 = &PlayElement::RTTI_Type_Descriptor;
        uVar11 = 0;
        pvVar6 = find_play_element_in_maps((void *)param_1[0xc],elementId_);
        pvVar6 = (void *)FUN_00d8d382(pvVar6,uVar11,pTVar12,pTVar13,uVar14);
        if (pvVar6 != (void *)0x0) {
          iVar7 = FUN_01418e00();
          if ((iVar7 != 0) &&
             (bVar4 = Game_shouldLogAttributeModifierDebug((void *)param_1[0xc]), bVar4)) {
            local_2c = FUN_01418e00();
            if (*(uint *)(local_2c + 0x13c) < 0x10) {
              local_2c = local_2c + 0x128;
            }
            else {
              local_2c = *(int *)(local_2c + 0x128);
            }
            if (*(uint *)(param_2 + 0x13c) < 0x10) {
              iVar7 = param_2 + 0x128;
            }
            else {
              iVar7 = *(int *)(param_2 + 0x128);
            }
            FUN_01418e00();
            uVar11 = PlayElement_getId();
            uVar11 = PlayElement_getId(local_2c,uVar11);
            uVar11 = (**(code **)(*param_1 + 0x28))(iVar7,uVar11);
            Game_logGeneral((void *)param_1[0xc],
                            "Checking Dynamic Mapped Keyword Modifier(%d) on card: %s(%d) from card: %s(%d)"
                            ,uVar11);
            puVar9 = local_c;
            iVar10 = local_18[0];
          }
          uVar8 = AttributeModifier_getAttributeID(pvVar6);
          local_28 = uVar8;
          PackedId_consumeHighBitFlag_alt(&local_28);
          Game_logGeneral((void *)param_1[0xc],"Got Keyword: %d (notFlag: %d)",local_28);
          if (local_20 == uVar8) {
            return !bVar3;
          }
        }
        if (*(undefined4 **)(iVar10 + 8) <= puVar9) {
          FUN_00d83c2d();
        }
        puVar9 = puVar9 + 1;
      }
    }
  }
  return bVar3;
}

