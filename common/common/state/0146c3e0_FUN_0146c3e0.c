// addr: 0x0146c3e0
// name: FUN_0146c3e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall FUN_0146c3e0(int *param_1,void **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_EBX;
  undefined8 uVar7;
  void **item;
  void **ppvStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int aiStack_60 [2];
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
  
                    /* Deserializes integer/vector fields through the common virtual deserialize
                       wrapper. No class-identifying evidence is present. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0169e8c8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  item = param_2;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,&local_78,DAT_01b839d8 ^ (uint)&stack0xffffff78);
  if (cVar2 == '\0') {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = StateMachineState_deserializeWithPlayer(param_1,param_2);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  ppvStack_7c = param_2;
  Deserializer_readInteger(param_2,&local_78);
  if (local_78 != 0) {
    pvVar4 = (void *)StateMachineState_getGame();
    pvVar4 = PlayArea_findPlayerElementById(pvVar4,local_78);
    param_1[0x3e] = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      ExceptionList = pvStack_1c;
      return false;
    }
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_4c);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_74);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  param_1[0x3f] = iStack_74;
  bVar3 = Deserializer_readInteger(param_2,param_1 + 0x40);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(param_2,param_1 + 0x41);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(param_2,param_1 + 0x42);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(param_2,param_1 + 0x43);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(param_2,param_1 + 0x44);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_70);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  pcVar1 = *(code **)(param_1[0x46] + 0x24);
  *(bool *)(param_1 + 0x45) = iStack_70 != 0;
  cVar2 = (*pcVar1)(param_2);
  if (cVar2 == '\0') {
    ExceptionList = pvStack_1c;
    return false;
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_6c);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  param_1[0x49] = iStack_6c;
  bVar3 = Deserializer_readInteger(param_2,&iStack_68);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  if (iStack_68 != 0) {
    uVar7 = StateMachineState_getGame(iStack_68);
    pvVar4 = find_play_element_in_maps((void *)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    param_1[0x4a] = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      ExceptionList = pvStack_1c;
      return false;
    }
  }
  bVar3 = Deserializer_readInteger(param_2,&iStack_64);
  if (!bVar3) {
    ExceptionList = pvStack_1c;
    return false;
  }
  if (iStack_64 != 0) {
    uVar7 = StateMachineState_getGame(iStack_64);
    pvVar4 = find_play_element_in_maps((void *)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    param_1[0x4b] = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      ExceptionList = pvStack_1c;
      return false;
    }
  }
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_14 = (void *)0x0;
  bVar3 = Deserializer_readIntegerVector(&ppvStack_7c,auStack_30);
  if (bVar3) {
    puVar5 = (undefined4 *)FUN_0041f5d2(&uStack_48);
    uStack_40 = *puVar5;
    uStack_3c = puVar5[1];
    puVar5 = (undefined4 *)FUN_0041f3a1(aiStack_60);
    uStack_48 = *puVar5;
    uStack_44 = puVar5[1];
    cVar2 = FUN_00416f86(&uStack_40);
    while (cVar2 != '\0') {
      puVar5 = (undefined4 *)FUN_01240910();
      uVar7 = StateMachineState_getGame
                        (*puVar5,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
      ;
      pvVar4 = find_play_element_in_maps((void *)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      aiStack_60[0] = FUN_00d8d382(pvVar4);
      if (aiStack_60[0] == 0) goto LAB_0146c5f3;
      PointerVector_pushBack(param_1 + 0x4c,aiStack_60,item);
      FUN_012fb740(auStack_38,0);
      cVar2 = FUN_00416f86(&uStack_40);
    }
    bVar3 = Deserializer_readIntegerVector(&ppvStack_7c,param_1 + 0x50);
    if ((((bVar3) && (bVar3 = Deserializer_readInteger(param_2,param_1 + 0x54), bVar3)) &&
        (cVar2 = (**(code **)(param_1[0x55] + 0x24))(param_2), cVar2 != '\0')) &&
       (bVar3 = Deserializer_readInteger(param_2,&iStack_58), bVar3)) {
      *(bool *)(param_1 + 0x58) = iStack_58 != 0;
      if (1 < unaff_EBX) {
        bVar3 = Deserializer_readInteger(param_2,&iStack_54);
        if (!bVar3) goto LAB_0146c5f3;
        *(bool *)((int)param_1 + 0x161) = iStack_54 != 0;
      }
      if ((unaff_EBX < 3) || (bVar3 = Deserializer_readInteger(param_2,param_1 + 0x59), bVar3)) {
        if (3 < unaff_EBX) {
          bVar3 = Deserializer_readInteger(param_2,&iStack_50);
          if (!bVar3) goto LAB_0146c5f3;
          *(bool *)(param_1 + 0x5b) = iStack_50 != 0;
          bVar3 = NetworkCommand_deserializeComponentPtr(param_2,(void **)(param_1 + 0x5a));
          if (!bVar3) goto LAB_0146c5f3;
        }
        if ((unaff_EBX < 5) || (bVar3 = Deserializer_readInteger(param_2,param_1 + 0x5c), bVar3)) {
          DebugStream_writeCString(param_2,"Ending MultiActionState\n");
          iVar6 = (**(code **)(*param_1 + 0xc))(param_2);
          uStack_18 = 0xffffffff;
          StdVector_clearStorage(auStack_34);
          ExceptionList = pvStack_20;
          return iVar6 != 0;
        }
      }
    }
  }
LAB_0146c5f3:
  local_14 = (void *)0xffffffff;
  StdVector_clearStorage(auStack_30);
  ExceptionList = pvStack_1c;
  return false;
}

