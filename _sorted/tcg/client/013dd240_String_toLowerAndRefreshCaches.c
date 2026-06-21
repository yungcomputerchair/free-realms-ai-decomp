// addr: 0x013dd240
// name: String_toLowerAndRefreshCaches
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void String_toLowerAndRefreshCaches
               (undefined4 param_1,undefined4 param_2,
               basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3
               )

{
  uint uVar1;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
  undefined4 ***pppuVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined4 **local_3c;
  undefined4 local_38;
  uint local_34 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 **local_28 [4];
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies an input string, transforms it to lowercase via _tolower/FUN_012a26c0,
                       then passes the normalized string to two update helpers 01435790 and
                       01437cd0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c9a8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_3c;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 **)((uint)local_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,param_3,0,0xffffffff);
  local_4 = 0;
  if (local_14 < 0x10) {
    local_3c = local_28;
LAB_013dd2b9:
    pppuVar2 = (undefined4 ***)local_28[0];
    if (local_14 < 0x10) {
      pppuVar2 = local_28;
    }
    if (local_3c < pppuVar2) goto LAB_013dd2dd;
    pppuVar2 = (undefined4 ***)local_28[0];
    if (local_14 < 0x10) {
      pppuVar2 = local_28;
    }
    if ((undefined4 ***)((int)pppuVar2 + local_18) < local_3c) goto LAB_013dd2dd;
  }
  else {
    local_3c = local_28[0];
    if ((undefined4 ***)local_28[0] != (undefined4 ***)0x0) goto LAB_013dd2b9;
LAB_013dd2dd:
    FUN_00d83c2d(uVar1);
  }
  pppuVar2 = (undefined4 ***)local_28[0];
  if (local_14 < 0x10) {
    pppuVar2 = local_28;
  }
  pppuVar2 = (undefined4 ***)((int)pppuVar2 + local_18);
  if (pppuVar2 == (undefined4 ***)0x0) {
LAB_013dd324:
    FUN_00d83c2d(uVar1);
  }
  else {
    pppuVar3 = (undefined4 ***)local_28[0];
    if (local_14 < 0x10) {
      pppuVar3 = local_28;
    }
    if (pppuVar2 < pppuVar3) goto LAB_013dd324;
    pppuVar3 = (undefined4 ***)local_28[0];
    if (local_14 < 0x10) {
      pppuVar3 = local_28;
    }
    if ((undefined4 ***)((int)pppuVar3 + local_18) < pppuVar2) goto LAB_013dd324;
  }
  if (local_14 < 0x10) {
    pppuVar3 = local_28;
LAB_013dd344:
    pppuVar4 = (undefined4 ***)local_28[0];
    if (local_14 < 0x10) {
      pppuVar4 = local_28;
    }
    if (pppuVar4 <= pppuVar3) {
      pppuVar4 = (undefined4 ***)local_28[0];
      if (local_14 < 0x10) {
        pppuVar4 = local_28;
      }
      if (pppuVar3 <= (undefined4 ***)((int)pppuVar4 + local_18)) goto LAB_013dd369;
    }
  }
  else {
    pppuVar3 = (undefined4 ***)local_28[0];
    if ((undefined4 ***)local_28[0] != (undefined4 ***)0x0) goto LAB_013dd344;
  }
  FUN_00d83c2d(uVar1);
LAB_013dd369:
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_012a26c0(local_34,pppuVar3,pppuVar2,local_2c,local_3c,_tolower,local_38,local_34[0]);
  pbVar5 = local_2c;
  FUN_01435790(pbVar5);
  FUN_01437cd0(pbVar5);
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
  ExceptionList = local_c;
  return;
}

