// addr: 0x01326520
// name: FUN_01326520
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x013268f6) */
/* WARNING: Removing unreachable block (ram,0x0132675c) */
/* WARNING: Removing unreachable block (ram,0x013266c2) */
/* WARNING: Removing unreachable block (ram,0x0132670d) */
/* WARNING: Removing unreachable block (ram,0x0132684b) */
/* WARNING: Removing unreachable block (ram,0x01326941) */

undefined1 __thiscall FUN_01326520(int *param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *this;
  uint first_;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 *puVar5;
  undefined1 *puStack_9c;
  undefined1 local_98 [4];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [4];
  undefined1 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes a state/command object with a mix of string and integer fields
                       through virtual begin/end hooks. No class-identifying evidence is present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01679811;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&puStack_9c;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,local_98,DAT_01b839d8 ^ (uint)&stack0xffffff54);
  if (cVar1 == '\0') {
    ExceptionList = pvStack_14;
    return 0;
  }
  bVar2 = Deserializer_readInteger(param_2,param_1 + 6);
  if (!bVar2) {
    ExceptionList = pvStack_14;
    return 0;
  }
  if ((10 < unaff_EBX) && (bVar2 = Deserializer_readInteger(param_2,param_1 + 2), !bVar2)) {
    ExceptionList = pvStack_14;
    return 0;
  }
  if (unaff_EBX < 6) {
    uStack_1c = 0xf;
    uStack_20 = 0;
    uStack_30 = 0;
    local_c = (void *)0x0;
    bVar2 = Deserializer_readString(param_2,auStack_34);
    if (!bVar2) {
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
      ExceptionList = pvStack_14;
      return 0;
    }
    iVar4 = param_1[2];
    puVar5 = auStack_34;
    this = (void *)FUN_012a84b0();
    first_ = MessageDB_allocateMessageId(this,puVar5,iVar4);
    if (param_1[7] == 0) {
      puStack_9c = Mem_Alloc(0x1c);
      local_c._0_1_ = 1;
      if (puStack_9c == (undefined1 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = MessageText_ctor();
      }
      local_c = (void *)((uint)local_c._1_3_ << 8);
      param_1[7] = iVar4;
    }
    set_pair_fields_4_8((void *)param_1[7],first_,param_1[2]);
    local_c = (void *)0xffffffff;
    FUN_0041f1d7();
  }
  else {
    bVar2 = ValueData_deserializeComponentPtr(param_2,(void **)(param_1 + 7));
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    Message_setVersion((void *)param_1[7],param_1[2]);
  }
  if (unaff_EBX < 8) {
    cVar1 = FUN_01322fe0(param_2,&stack0xffffff5c);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_14;
      return 0;
    }
    cVar1 = FUN_01322fe0(param_2,&stack0xffffff5c);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_14;
      return 0;
    }
    unaff_EBP = 0;
    cVar1 = FUN_01322fe0(param_2,&stack0xffffff5c);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_14;
      return 0;
    }
  }
  else if (unaff_EBX == 8) {
    bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffff5c);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(0x14,unaff_EBP);
    bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffff5c);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(6,unaff_EBP);
    bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffff5c);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(7,unaff_EBP);
  }
  if (unaff_EBX < 9) {
    bVar2 = Deserializer_readInteger(param_2,&iStack_60);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(10,iStack_60);
  }
  if (unaff_EBX < 8) {
    unaff_EBP = 0;
    cVar1 = FUN_01322fe0(param_2,&stack0xffffff5c);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_14;
      return 0;
    }
  }
  else if (unaff_EBX == 8) {
    bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffff5c);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(0xb,unaff_EBP);
  }
  if (unaff_EBX < 9) {
    bVar2 = Deserializer_readInteger(param_2,&iStack_58);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(0xf,iStack_58);
  }
  if (unaff_EBX < 8) {
    cVar1 = FUN_01322fe0(param_2,&stack0xffffff5c);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_14;
      return 0;
    }
    cVar1 = FUN_01322fe0(param_2,&stack0xffffff5c);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_14;
      return 0;
    }
  }
  else if (unaff_EBX == 8) {
    bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffff5c);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(0xc,unaff_EBP);
    bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffff5c);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(0x15,unaff_EBP);
  }
  if (unaff_EBX < 9) {
    bVar2 = Deserializer_readInteger(param_2,&iStack_4c);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(0x12,iStack_4c);
    bVar2 = Deserializer_readInteger(param_2,&iStack_44);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x5c))(5,CONCAT31(extraout_var,iStack_44 != 0));
    bVar2 = Deserializer_readInteger(param_2,&iStack_3c);
    if (!bVar2) {
      ExceptionList = pvStack_14;
      return 0;
    }
    (**(code **)(*param_1 + 0x54))(4,iStack_3c);
  }
  cVar1 = (**(code **)(param_1[8] + 0x24))(param_2);
  if (cVar1 == '\0') {
    ExceptionList = pvStack_14;
    return 0;
  }
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_c = (void *)0x2;
  bVar2 = Deserializer_readIntegerVector(&stack0xffffff5c,local_98);
  if (!bVar2) goto LAB_01326b25;
  puVar5 = local_98;
  puStack_9c = (undefined1 *)0x2;
  IntToIntVectorMap_getOrCreate(&puStack_9c);
  FUN_005f1e5c(puVar5);
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_c._0_1_ = 3;
  bVar2 = Deserializer_readIntegerVector(&stack0xffffff5c,auStack_88);
  if (bVar2) {
    puVar5 = auStack_88;
    puStack_9c = (undefined1 *)0x3;
    IntToIntVectorMap_getOrCreate(&puStack_9c);
    FUN_005f1e5c(puVar5);
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_c = (void *)CONCAT31(local_c._1_3_,4);
    bVar2 = Deserializer_readIntegerVector(&stack0xffffff5c,auStack_78);
    if (bVar2) {
      puVar5 = auStack_78;
      puStack_9c = &DAT_00000004;
      IntToIntVectorMap_getOrCreate(&puStack_9c);
      FUN_005f1e5c(puVar5);
      if (unaff_EBX < 9) {
        bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffff5c);
        if (bVar2) {
          (**(code **)(*param_1 + 0x54))(2,param_2);
          bVar2 = Deserializer_readInteger(param_2,&iStack_48);
          if (bVar2) {
            (**(code **)(*param_1 + 0x54))(3,iStack_48);
            bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffff5c);
            if (bVar2) {
              (**(code **)(*param_1 + 0x54))(0xd,param_2);
              bVar2 = Deserializer_readInteger(param_2,&iStack_68);
              if (bVar2) {
                (**(code **)(*param_1 + 0x5c))(0x18,CONCAT31(extraout_var_00,iStack_68 != 0));
                goto LAB_01326bfa;
              }
            }
          }
        }
      }
      else {
LAB_01326bfa:
        if (unaff_EBX - 2U < 7) {
          bVar2 = Deserializer_readInteger(param_2,(int *)&puStack_9c);
          if (!bVar2) goto LAB_01326b03;
          (**(code **)(*param_1 + 0x54))(0x11,puStack_9c);
        }
        if (unaff_EBX - 3U < 6) {
          bVar2 = Deserializer_readInteger(param_2,&iStack_38);
          if (!bVar2) goto LAB_01326b03;
          (**(code **)(*param_1 + 0x54))(1,iStack_38);
        }
        if (unaff_EBX - 4U < 5) {
          bVar2 = Deserializer_readInteger(param_2,&iStack_50);
          if (bVar2) {
            (**(code **)(*param_1 + 0x54))(8,iStack_50);
            bVar2 = Deserializer_readInteger(param_2,&iStack_40);
            if (bVar2) {
              (**(code **)(*param_1 + 0x54))(9,iStack_40);
              goto LAB_01326cb4;
            }
          }
        }
        else {
LAB_01326cb4:
          if (unaff_EBX - 5U < 4) {
            bVar2 = Deserializer_readInteger(param_2,&iStack_64);
            if (bVar2) {
              (**(code **)(*param_1 + 0x5c))(0x13,CONCAT31(extraout_var_01,iStack_64 != 0));
              bVar2 = Deserializer_readInteger(param_2,&iStack_5c);
              if (bVar2) {
                (**(code **)(*param_1 + 0x5c))(0x10,CONCAT31(extraout_var_02,iStack_5c != 0));
                goto LAB_01326d10;
              }
            }
          }
          else {
LAB_01326d10:
            if (unaff_EBX - 7U < 2) {
              bVar2 = Deserializer_readInteger(param_2,&iStack_54);
              if (!bVar2) goto LAB_01326b03;
              (**(code **)(*param_1 + 0x54))(0xe,iStack_54);
            }
            if (8 < unaff_EBX) {
              (**(code **)(*param_1 + 0x3c))();
              puStack_9c = param_2;
              bVar2 = ValueData_deserializeComponentPairMap(&puStack_9c);
              if (!bVar2) goto LAB_01326b03;
            }
            if ((unaff_EBX < 10) || (bVar2 = Deserializer_readString(param_2,param_1 + 0x12), bVar2)
               ) {
              uVar3 = (**(code **)(*param_1 + 0x14))(param_2);
              local_c._0_1_ = 3;
              StdVector_clearStorage(auStack_78);
              local_c = (void *)CONCAT31(local_c._1_3_,2);
              StdVector_clearStorage(auStack_88);
              local_c = (void *)0xffffffff;
              StdVector_clearStorage(local_98);
              ExceptionList = pvStack_14;
              return uVar3;
            }
          }
        }
      }
    }
LAB_01326b03:
    local_c._0_1_ = 3;
    StdVector_clearStorage(auStack_78);
  }
  local_c = (void *)CONCAT31(local_c._1_3_,2);
  StdVector_clearStorage(auStack_88);
LAB_01326b25:
  local_c = (void *)0xffffffff;
  StdVector_clearStorage(local_98);
  ExceptionList = pvStack_14;
  return 0;
}

