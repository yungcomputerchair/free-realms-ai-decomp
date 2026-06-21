// addr: 0x01396310
// name: FUN_01396310
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01396310(int *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *this;
  uint uVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  undefined4 uVar11;
  void *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 *local_a4;
  undefined1 auStack_a0 [144];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Small helper/dispatcher using calls: FUN_01385460; FUN_01344cd0;
                       PlayArea_findPlayerElementById; FUN_01357a00; Game_logGeneral; 00d82463. No
                       class-identifying evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684806;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff38;
  ExceptionList = &local_c;
  if (*(uint *)(param_2 + 0x13c) < 0x10) {
    iVar3 = param_2 + 0x128;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x128);
  }
  Game_logGeneral((void *)param_1[0xc],"removing ValueAttr Mod Fitler from %s on %s",iVar3);
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_4 = 0;
  local_a4 = (undefined4 *)param_1[0x35];
  iVar3 = extraout_EDX;
  if (local_a4 < (undefined4 *)param_1[0x34]) {
    FUN_00d83c2d(uVar2);
    iVar3 = extraout_EDX_00;
  }
  puVar6 = (undefined4 *)param_1[0x34];
  if ((undefined4 *)param_1[0x35] < puVar6) {
    FUN_00d83c2d(uVar2);
    iVar3 = extraout_EDX_01;
  }
  while( true ) {
    if (param_1 == (int *)0xffffff34) {
      FUN_00d83c2d(uVar2);
      iVar3 = extraout_EDX_02;
    }
    if (puVar6 == local_a4) break;
    if (param_1 == (int *)0xffffff34) {
      FUN_00d83c2d();
      iVar3 = extraout_EDX_03;
    }
    if ((undefined4 *)param_1[0x35] <= puVar6) {
      FUN_00d83c2d();
      iVar3 = extraout_EDX_04;
    }
    local_a8 = *puVar6;
    uVar11 = 0;
    pTVar10 = &ValidAttrModFilter::RTTI_Type_Descriptor;
    pTVar9 = &PlayElement::RTTI_Type_Descriptor;
    uVar8 = 0;
    pvVar4 = find_play_element_in_maps((void *)param_1[0xc],iVar3);
    uVar7 = FUN_00d8d382(pvVar4,uVar8,pTVar9,pTVar10,uVar11);
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    this = (undefined4 *)uVar7;
    if (this != (undefined4 *)0x0) {
      uVar5 = get_field_58(this);
      if (uVar5 == param_2) {
        PlayElement_detachFromParent(this);
        (**(code **)*this)(1);
        iVar3 = extraout_EDX_05;
      }
      else {
        FUN_0042c155(&local_a8);
        iVar3 = extraout_EDX_06;
      }
    }
    if ((undefined4 *)param_1[0x35] <= puVar6) {
      FUN_00d83c2d();
      iVar3 = extraout_EDX_07;
    }
    puVar6 = puVar6 + 1;
  }
  FUN_005f1e5c(&local_b8);
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_setGame(param_1[0xc]);
  pvVar4 = PlayArea_findPlayerElementById((void *)param_1[0xc],param_1[0x10]);
  FUN_013815b0(pvVar4);
  pcVar1 = *(code **)(*param_1 + 0x16c);
  *(undefined1 *)(param_1 + 0x27) = 1;
  (*pcVar1)(auStack_a0);
  *(undefined1 *)(param_1 + 0x27) = 0;
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_01385460();
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_b8 == (void *)0x0) {
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_b8);
}

