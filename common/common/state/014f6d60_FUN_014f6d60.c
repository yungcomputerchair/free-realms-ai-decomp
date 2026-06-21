// addr: 0x014f6d60
// name: FUN_014f6d60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_014f6d60(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  uint uVar1;
  void *extraout_EAX;
  void *pvVar2;
  undefined4 *******pppppppuVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *******pppppppuVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int key_;
  int extraout_EDX_06;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *******local_70;
  void *local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  undefined4 *local_5c;
  undefined1 local_58 [4];
  undefined4 *local_54;
  undefined1 local_50 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  undefined4 *******local_44 [4];
  int local_34;
  uint local_30;
  undefined1 local_2c [4];
  undefined4 *******local_28 [4];
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Generic game/lobby/deserialization helper with insufficient direct naming
                       evidence; behavior is broader than a specific state method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2c20;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_70;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff80;
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 *******)((uint)local_44[0] & 0xffffff00);
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,param_1,0,0xffffffff);
  local_4 = 0;
  if (local_30 < 0x10) {
    local_70 = local_44;
LAB_014f6dea:
    pppppppuVar5 = local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar5 = local_44;
    }
    if (local_70 < pppppppuVar5) goto LAB_014f6e0e;
    pppppppuVar5 = local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar5 = local_44;
    }
    if ((undefined4 *******)((int)pppppppuVar5 + local_34) < local_70) goto LAB_014f6e0e;
  }
  else {
    local_70 = local_44[0];
    if (local_44[0] != (undefined4 *******)0x0) goto LAB_014f6dea;
LAB_014f6e0e:
    FUN_00d83c2d(uVar1);
  }
  pppppppuVar5 = local_44[0];
  if (local_30 < 0x10) {
    pppppppuVar5 = local_44;
  }
  pppppppuVar5 = (undefined4 *******)((int)pppppppuVar5 + local_34);
  if (pppppppuVar5 == (undefined4 *******)0x0) {
LAB_014f6e55:
    FUN_00d83c2d(uVar1);
  }
  else {
    pppppppuVar3 = local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar3 = local_44;
    }
    if (pppppppuVar5 < pppppppuVar3) goto LAB_014f6e55;
    pppppppuVar3 = local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar3 = local_44;
    }
    if ((undefined4 *******)((int)pppppppuVar3 + local_34) < pppppppuVar5) goto LAB_014f6e55;
  }
  if (local_30 < 0x10) {
    pppppppuVar3 = local_44;
LAB_014f6e75:
    pppppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar4 = local_44;
    }
    if (pppppppuVar4 <= pppppppuVar3) {
      pppppppuVar4 = local_44[0];
      if (local_30 < 0x10) {
        pppppppuVar4 = local_44;
      }
      if (pppppppuVar3 <= (undefined4 *******)((int)pppppppuVar4 + local_34)) goto LAB_014f6e9a;
    }
  }
  else {
    pppppppuVar3 = local_44[0];
    if (local_44[0] != (undefined4 *******)0x0) goto LAB_014f6e75;
  }
  FUN_00d83c2d(uVar1);
LAB_014f6e9a:
  local_6c = (void *)((uint)local_6c & 0xffffff00);
  FUN_012a26c0(local_58,pppppppuVar3,pppppppuVar5,local_48,local_70,_tolower,local_64,local_6c);
  LobbyAccount_ensureSingleton();
  uVar1 = local_68;
  puVar6 = *(undefined4 **)(local_68 + 0x38);
  iVar8 = local_68 + 0x30;
  key_ = extraout_EDX;
  local_6c = extraout_EAX;
  local_60 = iVar8;
  local_5c = puVar6;
  if (puVar6 < *(undefined4 **)(local_68 + 0x34)) {
    FUN_00d83c2d();
    key_ = extraout_EDX_00;
  }
  puVar7 = *(undefined4 **)(uVar1 + 0x34);
  if (*(undefined4 **)(uVar1 + 0x38) < puVar7) {
    FUN_00d83c2d();
    key_ = extraout_EDX_01;
  }
  do {
    local_54 = puVar7;
    if (iVar8 == 0) {
      FUN_00d83c2d();
      key_ = extraout_EDX_02;
    }
    if (puVar7 == puVar6) {
      local_4 = 0xffffffff;
      if (local_30 < 0x10) {
        ExceptionList = local_c;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_44[0]);
    }
    if (iVar8 == 0) {
      FUN_00d83c2d();
      key_ = extraout_EDX_03;
    }
    if (*(undefined4 **)(iVar8 + 8) <= puVar7) {
      FUN_00d83c2d();
      key_ = extraout_EDX_04;
    }
    local_64 = *puVar7;
    pvVar2 = LobbyServiceAccountMap_findValue(local_6c,key_);
    key_ = extraout_EDX_05;
    if (pvVar2 != (void *)0x0) {
      FUN_013a6540(local_2c);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_14 < 0x10) {
        local_70 = local_28;
LAB_014f6f66:
        pppppppuVar5 = local_28[0];
        if (local_14 < 0x10) {
          pppppppuVar5 = local_28;
        }
        if (local_70 < pppppppuVar5) goto LAB_014f6f8e;
        pppppppuVar5 = local_28[0];
        if (local_14 < 0x10) {
          pppppppuVar5 = local_28;
        }
        if ((undefined4 *******)((int)pppppppuVar5 + local_18) < local_70) goto LAB_014f6f8e;
      }
      else {
        local_70 = local_28[0];
        if (local_28[0] != (undefined4 *******)0x0) goto LAB_014f6f66;
LAB_014f6f8e:
        FUN_00d83c2d();
      }
      pppppppuVar5 = local_28[0];
      if (local_14 < 0x10) {
        pppppppuVar5 = local_28;
      }
      pppppppuVar5 = (undefined4 *******)((int)pppppppuVar5 + local_18);
      if (pppppppuVar5 == (undefined4 *******)0x0) {
LAB_014f6fd5:
        FUN_00d83c2d();
      }
      else {
        pppppppuVar3 = local_28[0];
        if (local_14 < 0x10) {
          pppppppuVar3 = local_28;
        }
        if (pppppppuVar5 < pppppppuVar3) goto LAB_014f6fd5;
        pppppppuVar3 = local_28[0];
        if (local_14 < 0x10) {
          pppppppuVar3 = local_28;
        }
        if ((undefined4 *******)((int)pppppppuVar3 + local_18) < pppppppuVar5) goto LAB_014f6fd5;
      }
      if (local_14 < 0x10) {
        pppppppuVar3 = local_28;
LAB_014f6ff5:
        pppppppuVar4 = local_28[0];
        if (local_14 < 0x10) {
          pppppppuVar4 = local_28;
        }
        if (pppppppuVar3 < pppppppuVar4) goto LAB_014f7015;
        pppppppuVar4 = local_28[0];
        if (local_14 < 0x10) {
          pppppppuVar4 = local_28;
        }
        if ((undefined4 *******)((int)pppppppuVar4 + local_18) < pppppppuVar3) goto LAB_014f7015;
      }
      else {
        pppppppuVar3 = local_28[0];
        if (local_28[0] != (undefined4 *******)0x0) goto LAB_014f6ff5;
LAB_014f7015:
        FUN_00d83c2d();
      }
      local_68 = local_68 & 0xffffff00;
      FUN_012a26c0(local_50,pppppppuVar3,pppppppuVar5,local_2c,local_70,_tolower,local_64,local_68);
      pppppppuVar5 = local_44[0];
      if (local_30 < 0x10) {
        pppppppuVar5 = local_44;
      }
      uVar9 = FUN_00f942a0(0,local_18,pppppppuVar5,local_34);
      key_ = (int)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 == 0) {
        local_4 = (uint)local_4._1_3_ << 8;
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28[0]);
        }
        local_14 = 0xf;
        local_18 = 0;
        local_28[0] = (undefined4 *******)((uint)local_28[0]._1_3_ << 8);
        local_4 = 0xffffffff;
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          _free(local_44[0]);
        }
        ExceptionList = local_c;
        return local_64;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
      local_18 = 0;
      local_14 = 0xf;
      local_28[0] = (undefined4 *******)((uint)local_28[0]._1_3_ << 8);
      puVar6 = local_5c;
      puVar7 = local_54;
      iVar8 = local_60;
    }
    if (*(undefined4 **)(iVar8 + 8) <= puVar7) {
      FUN_00d83c2d();
      key_ = extraout_EDX_06;
    }
    puVar7 = puVar7 + 1;
  } while( true );
}

