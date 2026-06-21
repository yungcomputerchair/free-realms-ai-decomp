// addr: 0x01414b70
// name: FUN_01414b70
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_01414b70(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 *puStack_58;
  undefined4 *local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [4];
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes integer/vector fields through the common virtual deserialize
                       wrapper. No class-identifying evidence is present. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_01692d80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar5 = param_2;
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\0') {
    ExceptionList = pvStack_14;
    return 0;
  }
  bVar2 = StateMachineState_deserializeWithPlayer(param_1,param_2);
  if (!bVar2) {
    ExceptionList = pvStack_14;
    return 0;
  }
  puStack_30 = (undefined4 *)0x0;
  puStack_2c = (undefined4 *)0x0;
  uStack_28 = 0;
  local_c = (void *)0x0;
  bVar2 = Deserializer_readIntegerVector(&stack0xffffffa0,auStack_34);
  if (bVar2) {
    puStack_58 = puStack_2c;
    if (puStack_2c < puStack_30) {
      FUN_00d83c2d();
    }
    puVar7 = puStack_30;
    if (puStack_2c < puStack_30) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x34) {
        FUN_00d83c2d();
      }
      if (puVar7 == puStack_58) {
        puStack_20 = (undefined4 *)0x0;
        puStack_1c = (undefined4 *)0x0;
        uStack_18 = 0;
        local_c = (void *)CONCAT31(local_c._1_3_,1);
        bVar2 = Deserializer_readIntegerVector(&stack0xffffffa0,auStack_24);
        if (!bVar2) goto LAB_01414cba;
        local_54 = puStack_1c;
        if (puStack_1c < puStack_20) {
          FUN_00d83c2d();
        }
        puVar7 = puStack_20;
        if (puStack_1c < puStack_20) {
          FUN_00d83c2d();
        }
        goto LAB_01414d33;
      }
      if (&stack0x00000000 == (undefined1 *)0x34) {
        FUN_00d83c2d();
      }
      if (puStack_2c <= puVar7) {
        FUN_00d83c2d();
      }
      uVar8 = StateMachineState_getGame
                        (*puVar7,0,&PlayElement::RTTI_Type_Descriptor,
                         &CommandObject::RTTI_Type_Descriptor,0);
      pvVar4 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      local_54 = (undefined4 *)FUN_00d8d382(pvVar4);
      if (local_54 == (undefined4 *)0x0) break;
      CommandObjectVector_pushBack(param_1 + 0x3e,&local_54,pvVar5);
      if (puStack_2c <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
    }
  }
  goto LAB_01414cdb;
LAB_01414d33:
  if (&stack0x00000000 == (undefined1 *)0x24) {
    FUN_00d83c2d();
  }
  pvVar4 = pvStack_4;
  if (puVar7 != local_54) {
    if (&stack0x00000000 == (undefined1 *)0x24) {
      FUN_00d83c2d();
    }
    if (puStack_1c <= puVar7) {
      FUN_00d83c2d();
    }
    uVar8 = StateMachineState_getGame
                      (*puVar7,0,&PlayElement::RTTI_Type_Descriptor,
                       &CommandObject::RTTI_Type_Descriptor,0);
    pvVar4 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    puStack_58 = (undefined4 *)FUN_00d8d382(pvVar4);
    if (puStack_58 == (undefined4 *)0x0) goto LAB_01414cba;
    CommandObjectVector_pushBack(param_1 + 0x42,&puStack_58,pvVar5);
    if (puStack_1c <= puVar7) {
      FUN_00d83c2d();
    }
    puVar7 = puVar7 + 1;
    goto LAB_01414d33;
  }
  bVar2 = Deserializer_readInteger(pvStack_4,&iStack_50);
  if (!bVar2) goto LAB_01414cba;
  if (iStack_50 != 0) {
    uVar8 = StateMachineState_getGame
                      (iStack_50,0,&PlayElement::RTTI_Type_Descriptor,
                       &CommandObject::RTTI_Type_Descriptor,0);
    pvVar5 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    iVar6 = FUN_00d8d382(pvVar5);
    param_1[0x46] = iVar6;
    if (iVar6 == 0) goto LAB_01414cba;
  }
  bVar2 = Deserializer_readInteger(pvVar4,&iStack_4c);
  if (bVar2) {
    param_1[0x47] = iStack_4c;
    bVar2 = Deserializer_readInteger(pvVar4,&iStack_48);
    if (bVar2) {
      param_1[0x48] = iStack_48;
      bVar2 = Deserializer_readInteger(pvVar4,&iStack_44);
      if (bVar2) {
        param_1[0x49] = iStack_44;
        bVar2 = Deserializer_readInteger(pvVar4,&iStack_40);
        if (bVar2) {
          param_1[0x4a] = iStack_40;
          bVar2 = Deserializer_readInteger(pvVar4,&iStack_3c);
          if (bVar2) {
            *(bool *)(param_1 + 0x4c) = iStack_3c != 0;
            bVar2 = Deserializer_readInteger(pvVar4,&iStack_38);
            if (bVar2) {
              if (iStack_38 != 0) {
                pvVar5 = (void *)StateMachineState_getGame();
                pvVar5 = PlayArea_findPlayerElementById(pvVar5,iStack_38);
                param_1[0x4d] = (int)pvVar5;
                if (pvVar5 == (void *)0x0) goto LAB_01414e4c;
              }
              if (((unaff_EBX < 2) ||
                  (bVar2 = Deserializer_readIntegerVector(&stack0xffffffa0,param_1 + 0x4f), bVar2))
                 && ((unaff_EBX < 4 ||
                     (cVar1 = (**(code **)(param_1[0x53] + 0x24))(pvVar4), cVar1 != '\0')))) {
                if (0xd < unaff_EBX) {
                  bVar2 = Deserializer_readInteger(pvVar4,(int *)&pvStack_4);
                  if (!bVar2) goto LAB_01414e4c;
                  *(bool *)(param_1 + 0x56) = pvStack_4 != (void *)0x0;
                }
                uVar3 = (**(code **)(*param_1 + 0x14))(pvVar4);
                pvStack_4 = (void *)CONCAT31(pvStack_4._1_3_,uVar3);
                local_c = (void *)((uint)local_c & 0xffffff00);
                StdVector_clearStorage(auStack_24);
                local_c = (void *)0xffffffff;
                StdVector_clearStorage(auStack_34);
                ExceptionList = pvStack_14;
                return (uint)pvStack_4 & 0xff;
              }
            }
          }
        }
      }
LAB_01414e4c:
      local_c = (void *)((uint)local_c & 0xffffff00);
      StdVector_clearStorage(auStack_24);
      local_c = (void *)0xffffffff;
      StdVector_clearStorage(auStack_34);
      ExceptionList = pvStack_14;
      return 0;
    }
  }
LAB_01414cba:
  local_c = (void *)((uint)local_c & 0xffffff00);
  if (puStack_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_20);
  }
  puStack_20 = (undefined4 *)0x0;
  puStack_1c = (undefined4 *)0x0;
  uStack_18 = 0;
LAB_01414cdb:
  local_c = (void *)0xffffffff;
  if (puStack_30 == (undefined4 *)0x0) {
    ExceptionList = pvStack_14;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_30);
}

