// addr: 0x012cd3c0
// name: formatIntToString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
formatIntToString(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                 undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_400;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats an integer into a std::string by snprintf('%d') into a stack buffer
                       and assigning it to the output string. This appears to be a small utility
                       used by lobby/game code. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166f7f2;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_400;
  ExceptionList = &local_c;
  local_3fc = param_1;
  local_400 = 0;
  __snprintf(local_3f8,1000,"%d",param_2,DAT_01b839d8 ^ (uint)&stack0xfffffbf8);
  pcVar2 = local_3f8;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  ExceptionList = local_c;
  return param_1;
}

