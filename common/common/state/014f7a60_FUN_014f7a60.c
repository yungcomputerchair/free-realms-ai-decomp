// addr: 0x014f7a60
// name: FUN_014f7a60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_014f7a60(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  undefined4 *******pppppppuVar5;
  undefined4 *******pppppppuVar6;
  undefined4 *******pppppppuVar7;
  undefined4 ******local_58;
  int local_54;
  uint local_50 [2];
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 ******local_28 [4];
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2d10;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_58;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_c;
  local_54 = param_3;
  LobbyAccount_ensureSingleton();
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 ******)((uint)local_28[0] & 0xffffff00);
  local_4 = 0;
  if (param_2 == 0xff1) {
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_012df3f0(local_48,param_1[3]);
    local_4._0_1_ = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar4,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
  }
  else {
    if (param_2 != 0x1014) {
      uVar3 = (**(code **)(*param_1 + 4))(param_2,param_3);
      local_4 = 0xffffffff;
      if (local_14 < 0x10) {
        ExceptionList = local_c;
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(param_1 + 4),0,0xffffffff);
  }
  if (local_18 == 0) {
    local_4 = 0xffffffff;
    if (local_14 < 0x10) {
      ExceptionList = local_c;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
  if (local_14 < 0x10) {
    local_58 = local_28;
LAB_014f7ba8:
    pppppppuVar5 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar5 = local_28;
    }
    if (local_58 < pppppppuVar5) goto LAB_014f7bc8;
    pppppppuVar5 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar5 = local_28;
    }
    if ((undefined4 *******)((int)pppppppuVar5 + local_18) < local_58) goto LAB_014f7bc8;
  }
  else {
    local_58 = local_28[0];
    if ((undefined4 *******)local_28[0] != (undefined4 *******)0x0) goto LAB_014f7ba8;
LAB_014f7bc8:
    FUN_00d83c2d(uVar2);
  }
  pppppppuVar5 = (undefined4 *******)local_28[0];
  if (local_14 < 0x10) {
    pppppppuVar5 = local_28;
  }
  pppppppuVar5 = (undefined4 *******)((int)pppppppuVar5 + local_18);
  if (pppppppuVar5 == (undefined4 *******)0x0) {
LAB_014f7c0f:
    FUN_00d83c2d(uVar2);
  }
  else {
    pppppppuVar6 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar6 = local_28;
    }
    if (pppppppuVar5 < pppppppuVar6) goto LAB_014f7c0f;
    pppppppuVar6 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar6 = local_28;
    }
    if ((undefined4 *******)((int)pppppppuVar6 + local_18) < pppppppuVar5) goto LAB_014f7c0f;
  }
  if (local_14 < 0x10) {
    pppppppuVar6 = local_28;
LAB_014f7c2f:
    pppppppuVar7 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar7 = local_28;
    }
    if (pppppppuVar7 <= pppppppuVar6) {
      pppppppuVar7 = (undefined4 *******)local_28[0];
      if (local_14 < 0x10) {
        pppppppuVar7 = local_28;
      }
      if (pppppppuVar6 <= (undefined4 *******)((int)pppppppuVar7 + local_18)) goto LAB_014f7c54;
    }
  }
  else {
    pppppppuVar6 = (undefined4 *******)local_28[0];
    if ((undefined4 *******)local_28[0] != (undefined4 *******)0x0) goto LAB_014f7c2f;
  }
  FUN_00d83c2d();
LAB_014f7c54:
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_012a26c0(local_50,pppppppuVar6,pppppppuVar5,local_2c,local_58,_tolower,local_54,local_50[0]);
  iVar1 = local_54;
  FUN_01300680(3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar1 + 8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_2c,0,0xffffffff);
  local_4 = 0xffffffff;
  if (local_14 < 0x10) {
    ExceptionList = local_c;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_28[0]);
}

