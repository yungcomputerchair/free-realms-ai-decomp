// addr: 0x01389810
// name: EvaluationEnvironment_readStringPairs
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall EvaluationEnvironment_readStringPairs(undefined4 *param_1,undefined4 param_2)

{
  char extraout_AL;
  uint uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  int iVar3;
  int local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [4];
  undefined1 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [4];
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [4];
  undefined1 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a count, repeatedly reads optional pair strings via
                       StateReader_readOptionalPairStrings, appends the pairs to a vector, and
                       finalizes the environment; called by
                       EvaluationEnvironment/Message/CommandObject deserializers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168371b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_c4;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff2c;
  ExceptionList = &local_c;
  local_bc = param_2;
  local_c0 = param_1;
  FUN_013c2690(&local_c4);
  FUN_01388070(local_c4);
  iVar3 = 0;
  if (0 < local_c4) {
    do {
      local_30 = 0xf;
      local_34 = 0;
      local_44 = 0;
      local_14 = 0xf;
      local_18 = 0;
      local_28 = 0;
      local_68 = 0xf;
      local_6c = 0;
      local_7c = 0;
      local_4c = 0xf;
      local_50 = 0;
      local_60 = 0;
      local_4._1_3_ = 0;
      local_4._0_1_ = 5;
      StateReader_readOptionalPairStrings((void *)*param_1,local_48);
      if (extraout_AL == '\0') {
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_012a2730(uVar1);
        local_4 = 0xffffffff;
        uVar1 = FUN_012a2730();
        ExceptionList = local_c;
        return uVar1 & 0xffffff00;
      }
      pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_012a2b50(local_48);
      local_4._0_1_ = 6;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_80,pbVar2,0,0xffffffff);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_64,pbVar2 + 0x1c,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_012a2730();
      FUN_012a5380(local_80);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_012a2730();
      local_4 = 0xffffffff;
      FUN_012a2730();
      iVar3 = iVar3 + 1;
      param_1 = local_c0;
    } while (iVar3 < local_c4);
  }
  uVar1 = FUN_013c26d0();
  ExceptionList = local_c;
  return uVar1;
}

