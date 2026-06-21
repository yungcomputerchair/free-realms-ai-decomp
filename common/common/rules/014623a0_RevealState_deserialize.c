// addr: 0x014623a0
// name: RevealState_deserialize
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall RevealState_deserialize(int *param_1,void **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  undefined8 uVar8;
  void **item;
  void **ppvStack_7c;
  undefined1 local_78 [4];
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Deserializes RevealState fields including selected card vectors and
                       player/state-machine data. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0169d678;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  item = param_2;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,local_78,DAT_01b839d8 ^ (uint)&stack0xffffff78);
  if (cVar2 == '\0') {
    ExceptionList = pvStack_1c;
    return 0;
  }
  bVar3 = StateMachineState_deserializeWithPlayer(param_1,param_2);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  ppvStack_7c = param_2;
  bVar3 = Deserializer_readInteger(param_2,param_1 + 0x3e);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_74);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  if (iStack_74 != 0) {
    pvVar5 = (void *)StateMachineState_getGame();
    pvVar5 = PlayArea_findPlayerElementById(pvVar5,iStack_74);
    param_1[0x3f] = (int)pvVar5;
    if (pvVar5 == (void *)0x0) {
      ExceptionList = pvStack_1c;
      return 0;
    }
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_70);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  param_1[0x40] = iStack_70;
  bVar3 = Deserializer_readIntegerVector(&ppvStack_7c,param_1 + 0x41);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_6c);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  if (iStack_6c != 0) {
    uVar8 = StateMachineState_getGame
                      (iStack_6c,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
    ;
    pvVar5 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    iVar6 = FUN_00d8d382(pvVar5);
    param_1[0x45] = iVar6;
    if (iVar6 == 0) {
      ExceptionList = pvStack_1c;
      return 0;
    }
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_68);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  pcVar1 = *(code **)(param_1[0x47] + 0x24);
  param_1[0x46] = iStack_68;
  cVar2 = (*pcVar1)(param_2);
  if (cVar2 == '\0') {
    ExceptionList = pvStack_1c;
    return 0;
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_64);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  *(bool *)(param_1 + 0x4a) = iStack_64 != 0;
  bVar3 = Deserializer_readInteger(param_2,param_1 + 0x4b);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_60);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  *(bool *)(param_1 + 0x4c) = iStack_60 != 0;
  bVar3 = Deserializer_readInteger(param_2,&iStack_5c);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  *(bool *)((int)param_1 + 0x131) = iStack_5c != 0;
  bVar3 = Deserializer_readInteger(param_2,&iStack_58);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  *(bool *)((int)param_1 + 0x132) = iStack_58 != 0;
  cVar2 = (**(code **)(param_1[0x4d] + 0x24))(param_2);
  if (cVar2 == '\0') {
    ExceptionList = pvStack_1c;
    return 0;
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_54);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  param_1[0x50] = iStack_54;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_14 = (void *)0x0;
  bVar3 = Deserializer_readIntegerVector(&ppvStack_7c,auStack_30);
  if (bVar3) {
    puVar7 = (undefined4 *)FUN_0041f5d2(&uStack_48);
    uStack_40 = *puVar7;
    uStack_3c = puVar7[1];
    puVar7 = (undefined4 *)FUN_0041f3a1(&ppvStack_7c);
    uStack_48 = *puVar7;
    uStack_44 = puVar7[1];
    cVar2 = FUN_00416f86(&uStack_40);
    while (cVar2 != '\0') {
      puVar7 = (undefined4 *)FUN_01240910();
      uVar8 = StateMachineState_getGame
                        (*puVar7,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
      ;
      pvVar5 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      ppvStack_7c = (void **)FUN_00d8d382(pvVar5);
      if (ppvStack_7c == (void **)0x0) goto LAB_014625f4;
      PointerVector_pushBack(param_1 + 0x51,&ppvStack_7c,item);
      FUN_012fb740(auStack_38,0);
      cVar2 = FUN_00416f86(&uStack_40);
    }
    bVar3 = Deserializer_readInteger(param_2,&iStack_50);
    if ((bVar3) &&
       ((*(bool *)(param_1 + 0x56) = iStack_50 != 0, unaff_EBX < 2 ||
        (bVar3 = Deserializer_readInteger(param_2,param_1 + 0x55), bVar3)))) {
      if (2 < unaff_EBX) {
        bVar3 = Deserializer_readInteger(param_2,&iStack_4c);
        if (!bVar3) goto LAB_014625f4;
        *(bool *)((int)param_1 + 0x159) = iStack_4c != 0;
      }
      if (0xd < unaff_EBX) {
        bVar3 = Deserializer_readInteger(param_2,(int *)&ppvStack_7c);
        if (!bVar3) goto LAB_014625f4;
        *(bool *)((int)param_1 + 0x15a) = ppvStack_7c != (void **)0x0;
      }
      uVar4 = (**(code **)(*param_1 + 0x14))(param_2);
      uStack_18 = 0xffffffff;
      StdVector_clearStorage(auStack_34);
      ExceptionList = pvStack_20;
      return uVar4;
    }
  }
LAB_014625f4:
  local_14 = (void *)0xffffffff;
  StdVector_clearStorage(auStack_30);
  ExceptionList = pvStack_1c;
  return 0;
}

