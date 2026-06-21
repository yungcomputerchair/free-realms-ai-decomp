// addr: 0x01366010
// name: Game_deserializeStringRecordList
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall Game_deserializeStringRecordList(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_6c [4];
  void *local_68;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4c [4];
  void *local_48;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [4];
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a counted list of string-keyed records during Game_deserialize,
                       reading each string, copying it, building a small record, and inserting it
                       into an embedded container. Exact record type is not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f818;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_88;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff68;
  ExceptionList = &local_c;
  local_80 = param_2;
  FUN_013c2690(&local_84);
  local_88 = 0;
  if (0 < local_84) {
    do {
      local_54 = 0xf;
      local_58 = 0;
      local_68 = (void *)((uint)local_68 & 0xffffff00);
      local_50 = 0;
      local_4 = 1;
      uVar2 = FUN_013ffe50(*param_1,local_6c,uVar1);
      if ((char)uVar2 == '\0') {
        local_4 = 0xffffffff;
        if (local_54 < 0x10) {
          ExceptionList = local_c;
          return uVar2 & 0xffffff00;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_68);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (void *)((uint)local_48 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_4c,local_6c,0,0xffffffff);
      local_4._0_1_ = 3;
      local_7c = local_50;
      FUN_01357e10(local_4c,&local_7c);
      local_4._0_1_ = 4;
      FUN_013620a0(local_78,local_30);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        _free(local_48);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (void *)((uint)local_48 & 0xffffff00);
      local_4 = 0xffffffff;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        _free(local_68);
      }
      local_88 = local_88 + 1;
      local_54 = 0xf;
      local_58 = 0;
      local_68 = (void *)((uint)local_68 & 0xffffff00);
    } while (local_88 < local_84);
  }
  uVar1 = FUN_013c26d0();
  ExceptionList = local_c;
  return uVar1;
}

