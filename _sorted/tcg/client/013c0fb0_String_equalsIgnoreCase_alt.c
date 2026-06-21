// addr: 0x013c0fb0
// name: String_equalsIgnoreCase_alt
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint String_equalsIgnoreCase_alt
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                *param_1,
               basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2
               )

{
  uint uVar1;
  undefined4 ******ppppppuVar2;
  undefined4 ******ppppppuVar3;
  undefined4 ******ppppppuVar4;
  undefined4 *****local_54;
  uint local_50 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  undefined4 *****local_44 [4];
  int local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 *****local_28 [4];
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Duplicate/specialized case-insensitive std::string equality helper: length
                       check, uppercase both copies, then compare transformed buffers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016892f0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_54;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff9c;
  if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
    return (uint)param_1 & 0xffffff00;
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 *****)((uint)local_28[0] & 0xffffff00);
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,param_1,0,0xffffffff);
  local_4 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 *****)((uint)local_44[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,param_2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_14 < 0x10) {
    local_54 = local_28;
LAB_013c1058:
    ppppppuVar4 = (undefined4 ******)local_28[0];
    if (local_14 < 0x10) {
      ppppppuVar4 = local_28;
    }
    if (local_54 < ppppppuVar4) goto LAB_013c107c;
    ppppppuVar4 = (undefined4 ******)local_28[0];
    if (local_14 < 0x10) {
      ppppppuVar4 = local_28;
    }
    if ((undefined4 ******)((int)ppppppuVar4 + local_18) < local_54) goto LAB_013c107c;
  }
  else {
    local_54 = local_28[0];
    if ((undefined4 ******)local_28[0] != (undefined4 ******)0x0) goto LAB_013c1058;
LAB_013c107c:
    FUN_00d83c2d(uVar1);
  }
  ppppppuVar4 = (undefined4 ******)local_28[0];
  if (local_14 < 0x10) {
    ppppppuVar4 = local_28;
  }
  ppppppuVar4 = (undefined4 ******)((int)ppppppuVar4 + local_18);
  if (ppppppuVar4 == (undefined4 ******)0x0) {
LAB_013c10c3:
    FUN_00d83c2d(uVar1);
  }
  else {
    ppppppuVar2 = (undefined4 ******)local_28[0];
    if (local_14 < 0x10) {
      ppppppuVar2 = local_28;
    }
    if (ppppppuVar4 < ppppppuVar2) goto LAB_013c10c3;
    ppppppuVar2 = (undefined4 ******)local_28[0];
    if (local_14 < 0x10) {
      ppppppuVar2 = local_28;
    }
    if ((undefined4 ******)((int)ppppppuVar2 + local_18) < ppppppuVar4) goto LAB_013c10c3;
  }
  if (local_14 < 0x10) {
    ppppppuVar2 = local_28;
LAB_013c10e3:
    ppppppuVar3 = (undefined4 ******)local_28[0];
    if (local_14 < 0x10) {
      ppppppuVar3 = local_28;
    }
    if (ppppppuVar2 < ppppppuVar3) goto LAB_013c1103;
    ppppppuVar3 = (undefined4 ******)local_28[0];
    if (local_14 < 0x10) {
      ppppppuVar3 = local_28;
    }
    if ((undefined4 ******)((int)ppppppuVar3 + local_18) < ppppppuVar2) goto LAB_013c1103;
  }
  else {
    ppppppuVar2 = (undefined4 ******)local_28[0];
    if ((undefined4 ******)local_28[0] != (undefined4 ******)0x0) goto LAB_013c10e3;
LAB_013c1103:
    FUN_00d83c2d(uVar1);
  }
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_012a26c0(local_50,ppppppuVar2,ppppppuVar4,local_2c,local_54,_toupper,local_50[0],local_50[0]);
  if (local_30 < 0x10) {
    local_54 = local_44;
LAB_013c114c:
    ppppppuVar4 = (undefined4 ******)local_44[0];
    if (local_30 < 0x10) {
      ppppppuVar4 = local_44;
    }
    if (local_54 < ppppppuVar4) goto LAB_013c1170;
    ppppppuVar4 = (undefined4 ******)local_44[0];
    if (local_30 < 0x10) {
      ppppppuVar4 = local_44;
    }
    if ((undefined4 ******)((int)ppppppuVar4 + local_34) < local_54) goto LAB_013c1170;
  }
  else {
    local_54 = local_44[0];
    if ((undefined4 ******)local_44[0] != (undefined4 ******)0x0) goto LAB_013c114c;
LAB_013c1170:
    FUN_00d83c2d();
  }
  ppppppuVar4 = (undefined4 ******)local_44[0];
  if (local_30 < 0x10) {
    ppppppuVar4 = local_44;
  }
  ppppppuVar4 = (undefined4 ******)((int)ppppppuVar4 + local_34);
  if (ppppppuVar4 == (undefined4 ******)0x0) {
LAB_013c11b7:
    FUN_00d83c2d();
  }
  else {
    ppppppuVar2 = (undefined4 ******)local_44[0];
    if (local_30 < 0x10) {
      ppppppuVar2 = local_44;
    }
    if (ppppppuVar4 < ppppppuVar2) goto LAB_013c11b7;
    ppppppuVar2 = (undefined4 ******)local_44[0];
    if (local_30 < 0x10) {
      ppppppuVar2 = local_44;
    }
    if ((undefined4 ******)((int)ppppppuVar2 + local_34) < ppppppuVar4) goto LAB_013c11b7;
  }
  if (local_30 < 0x10) {
    ppppppuVar2 = local_44;
LAB_013c11d7:
    ppppppuVar3 = (undefined4 ******)local_44[0];
    if (local_30 < 0x10) {
      ppppppuVar3 = local_44;
    }
    if (ppppppuVar3 <= ppppppuVar2) {
      ppppppuVar3 = (undefined4 ******)local_44[0];
      if (local_30 < 0x10) {
        ppppppuVar3 = local_44;
      }
      if (ppppppuVar2 <= (undefined4 ******)((int)ppppppuVar3 + local_34)) goto LAB_013c11fc;
    }
  }
  else {
    ppppppuVar2 = (undefined4 ******)local_44[0];
    if ((undefined4 ******)local_44[0] != (undefined4 ******)0x0) goto LAB_013c11d7;
  }
  FUN_00d83c2d();
LAB_013c11fc:
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_012a26c0(local_50,ppppppuVar2,ppppppuVar4,local_48,local_54,_toupper,local_50[0],local_50[0]);
  ppppppuVar4 = (undefined4 ******)local_44[0];
  if (local_30 < 0x10) {
    ppppppuVar4 = local_44;
  }
  uVar1 = FUN_00f942a0(0,local_18,ppppppuVar4,local_34);
  if (uVar1 == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (undefined4 *****)((uint)local_44[0]._1_3_ << 8);
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
    uVar1 = 1;
  }
  else {
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (undefined4 *****)((uint)local_44[0]._1_3_ << 8);
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  ExceptionList = local_c;
  return uVar1;
}

