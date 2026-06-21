// addr: 0x014f82b0
// name: GuildNameMap_getGuildName
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
GuildNameMap_getGuildName
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_5c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_54 [4];
  void *local_50;
  undefined4 local_40;
  uint local_3c;
  char local_38 [40];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Returns a guild display name from an integer-keyed map, or formats a fallback
                       string "Guild ID #%d" when no entry exists. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2db1;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_5c;
  ExceptionList = &local_c;
  local_58 = param_1;
  local_5c = 0;
  iVar2 = IntObjectMap_findValueOrNull(param_2,DAT_01b839d8 ^ (uint)&stack0xffffff98);
  if (iVar2 == 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = (void *)((uint)local_50 & 0xffffff00);
    local_4 = 1;
    __snprintf(local_38,0x28,"Guild ID #%d",param_2);
    pcVar3 = local_38;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_54,local_38,(int)pcVar3 - (int)(local_38 + 1));
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)local_54,0,0xffffffff);
    local_5c = 1;
    local_4 = local_4 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(iVar2 + 0x14),0,0xffffffff);
  }
  ExceptionList = local_c;
  return param_1;
}

