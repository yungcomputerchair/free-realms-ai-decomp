// addr: 0x01396f60
// name: FUN_01396f60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01396f60(int *param_1,void *param_2)

{
  undefined4 *puVar1;
  int *this;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 uStack_39;
  uint uStack_38;
  int local_34;
  int iStack_30;
  undefined4 *puStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Small helper/dispatcher using calls: PlayArea_findPlayerElementById;
                       EvaluationEnvironment_getOriginCard; Game_logGeneral; FUN_012fca90;
                       EvaluationEnvironment_getMember14; AttributeModifier_getAttributeID. No
                       class-identifying evidence is present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016848a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != (void *)0x0) {
    local_34 = 0;
    bVar2 = false;
    cVar5 = (**(code **)(*param_1 + 0x48))(DAT_01b839d8 ^ (uint)&stack0xffffffb4);
    if (cVar5 != '\0') {
      uVar6 = FUN_013837b0();
      uStack_24 = CONCAT31(uStack_24._1_3_,uVar6);
      (**(code **)(*param_1 + 0x214))(0xdc,&local_34);
      FUN_012fa910();
      local_c = (void *)0x0;
      (**(code **)(*param_1 + 4))(2,&iStack_20);
      puStack_2c = *(undefined4 **)(local_34 + 8);
      iStack_30 = local_34;
      if (puStack_2c < *(undefined4 **)(local_34 + 4)) {
        FUN_00d83c2d();
      }
      iVar4 = local_34;
      iVar13 = *(int *)(local_34 + 4);
      bVar3 = false;
      if (iVar13 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(local_34 + 8) - iVar13 >> 2;
      }
      if (iVar12 != param_1[0x45]) {
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(local_34 + 8) - iVar13 >> 2;
        }
        param_1[0x45] = iVar13;
        bVar3 = true;
      }
      puVar1 = *(undefined4 **)(local_34 + 4);
      if (*(undefined4 **)(local_34 + 8) < puVar1) {
        FUN_00d83c2d();
      }
      iStack_20 = iVar4;
      puStack_1c = puVar1;
      while( true ) {
        puVar1 = puStack_1c;
        iVar13 = iStack_20;
        if ((iStack_20 == 0) || (iStack_20 != iStack_30)) {
          FUN_00d83c2d();
        }
        if (puVar1 == puStack_2c) break;
        if (iVar13 == 0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(iVar13 + 8) <= puVar1) {
          FUN_00d83c2d();
        }
        this = (int *)*puVar1;
        pvVar8 = EvaluationEnvironment_getMember14(param_2);
        if ((pvVar8 == (void *)0x0) && (iVar13 = FUN_01418e00(), iVar13 != 0)) {
          piVar9 = (int *)FUN_01418e00();
          iVar13 = (**(code **)(*piVar9 + 0x28))();
          pvVar8 = PlayArea_findPlayerElementById((void *)param_1[0xc],iVar13);
          FUN_013815b0(pvVar8);
        }
        iVar13 = FUN_01418e00();
        if ((iVar13 != 0) && (*(char *)(param_1[0xc] + 0x22c) != '\0')) {
          iVar13 = FUN_01418e00();
          if (*(uint *)(iVar13 + 0x13c) < 0x10) {
            iVar13 = iVar13 + 0x128;
          }
          else {
            iVar13 = *(int *)(iVar13 + 0x128);
          }
          if ((uint)param_1[0x4f] < 0x10) {
            piVar9 = param_1 + 0x4a;
          }
          else {
            piVar9 = (int *)param_1[0x4a];
          }
          FUN_01418e00();
          uVar10 = PlayElement_getId();
          PlayElement_getId(iVar13,uVar10);
          Game_logGeneral((void *)param_1[0xc],
                          "Checking Dynamic keyword on card: %s(%d) from card: %s(%d)",piVar9);
        }
        pvVar8 = EvaluationEnvironment_getOriginCard(param_2);
        set_play_element_id_field(param_2,param_1);
        uVar11 = AttributeModifier_getAttributeID(this);
        (**(code **)(*this + 0x44))(param_2,&uStack_38,&uStack_39);
        if (uVar11 != uStack_38) {
          bVar3 = true;
        }
        set_play_element_id_field(param_2,pvVar8);
        bVar7 = PackedId_consumeHighBitFlag_alt(&uStack_38);
        if (bVar7) {
          if (iStack_14 == 6) {
            ValueData_containsInt(auStack_18,uStack_38);
          }
        }
        else if ((iStack_14 != 6) ||
                (((bVar7 = ValueData_containsInt(auStack_18,uStack_38), uStack_38 != 0 && (!bVar7))
                 || ((char)param_1[0x27] != '\0')))) {
          uStack_28 = uStack_38;
          FUN_01300680(6);
          FUN_0042c155(&uStack_28);
          bVar2 = true;
        }
        if (*(undefined4 **)(iStack_20 + 8) <= puStack_1c) {
          FUN_00d83c2d();
        }
        puStack_1c = puStack_1c + 1;
      }
      EvaluationEnvironment_setBooleanKey13(uStack_24);
      FUN_01300db0();
      if ((iStack_14 == 6) && (((bVar2 || (bVar3)) || ((char)param_1[0x27] != '\0')))) {
        (**(code **)(*param_1 + 0xa0))(2,auStack_18,1,0);
      }
      uStack_4 = 0xffffffff;
      FUN_01300cd0();
    }
  }
  ExceptionList = local_c;
  return;
}

