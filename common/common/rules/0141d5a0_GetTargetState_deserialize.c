// addr: 0x0141d5a0
// name: GetTargetState_deserialize
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall GetTargetState_deserialize(int *param_1,void **param_2)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  void *pvVar5;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined8 uVar7;
  void **item;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void **ppvStack_4;
  
                    /* Deserializes GetTargetState-specific fields including integers, vectors,
                       player data, and target card references. */
  ppvStack_4 = (void **)0xffffffff;
  puStack_8 = &LAB_01693f68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  item = param_2;
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 != '\0') {
    StateMachineState_deserializeWithPlayer(param_1,param_2);
    ppvStack_4 = param_2;
    bVar3 = Deserializer_readInteger(param_2,(int *)&stack0xffffffc4);
    if (bVar3) {
      puStack_20 = (undefined4 *)0x0;
      *(bool *)(param_1 + 0x3e) = unaff_EBX != 0;
      puStack_1c = (undefined4 *)0x0;
      uStack_18 = 0;
      local_c = (void *)0x0;
      bVar3 = Deserializer_readIntegerVector(&ppvStack_4,auStack_24);
      puVar1 = puStack_1c;
      if (bVar3) {
        if (puStack_1c < puStack_20) {
          FUN_00d83c2d();
        }
        puVar6 = puStack_20;
        if (puStack_1c < puStack_20) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (&stack0x00000000 == (undefined1 *)0x24) {
            FUN_00d83c2d();
          }
          if (puVar6 == puVar1) break;
          if (&stack0x00000000 == (undefined1 *)0x24) {
            FUN_00d83c2d();
          }
          if (puStack_1c <= puVar6) {
            FUN_00d83c2d();
          }
          uVar7 = StateMachineState_getGame
                            (*puVar6,0,&PlayElement::RTTI_Type_Descriptor,
                             &Card::RTTI_Type_Descriptor,0);
          pvVar5 = find_play_element_in_maps((void *)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          iStack_34 = FUN_00d8d382(pvVar5);
          if (iStack_34 == 0) {
            local_c = (void *)0xffffffff;
            if (puStack_20 == (undefined4 *)0x0) {
              ExceptionList = pvStack_14;
              return 0;
            }
                    /* WARNING: Subroutine does not return */
            _free(puStack_20);
          }
          PointerVector_pushBack(param_1 + 0x3f,&iStack_34,item);
          if (puStack_1c <= puVar6) {
            FUN_00d83c2d();
          }
          puVar6 = puVar6 + 1;
        }
        bVar3 = Deserializer_readInteger(param_2,&iStack_30);
        if (!bVar3) {
          local_c = (void *)0xffffffff;
          if (puStack_20 == (undefined4 *)0x0) {
            ExceptionList = pvStack_14;
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          _free(puStack_20);
        }
        *(bool *)(param_1 + 0x43) = iStack_30 != 0;
        bVar3 = Deserializer_readIntegerVector(&ppvStack_4,param_1 + 0x44);
        if (bVar3) {
          bVar3 = Deserializer_readInteger(param_2,&iStack_2c);
          if (bVar3) {
            *(bool *)(param_1 + 0x48) = iStack_2c != 0;
            bVar3 = Deserializer_readInteger(param_2,&iStack_28);
            if (bVar3) {
              *(bool *)((int)param_1 + 0x121) = iStack_28 != 0;
              bVar3 = Deserializer_readInteger(param_2,param_1 + 0x49);
              if ((bVar3) &&
                 ((unaff_EBP < 2 ||
                  (bVar3 = Deserializer_readIntegerVector(&ppvStack_4,param_1 + 0x4a), bVar3)))) {
                if (0xd < unaff_EBP) {
                  bVar3 = Deserializer_readInteger(param_2,(int *)&ppvStack_4);
                  if (!bVar3) goto LAB_0141d7a5;
                  param_1[0x4e] = (int)ppvStack_4;
                }
                uVar4 = (**(code **)(*param_1 + 0x14))(param_2);
                local_c = (void *)0xffffffff;
                StdVector_clearStorage(auStack_24);
                ExceptionList = pvStack_14;
                return uVar4;
              }
            }
          }
LAB_0141d7a5:
          local_c = (void *)0xffffffff;
          StdVector_clearStorage(auStack_24);
          ExceptionList = pvStack_14;
          return 0;
        }
      }
      local_c = (void *)0xffffffff;
      if (puStack_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_20);
      }
    }
  }
  ExceptionList = pvStack_14;
  return 0;
}

