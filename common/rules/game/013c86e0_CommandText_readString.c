// addr: 0x013c86e0
// name: CommandText_readString
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
CommandText_readString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          undefined4 *param_2)

{
  char cVar1;
  char *_Str;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Reads a tab/newline-delimited string token into a std::string and advances
                       the cursor. Evidence: stops at newline/tab, assigns to basic_string, and is
                       used for AccountPref/setupDeckForPlayer values. */
  puStack_8 = &LAB_0168a079;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  _Str = (char *)*param_2;
  pcVar2 = _strchr(_Str,10);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  pcVar2 = _strchr((char *)*param_2,9);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
    *param_2 = pcVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  pcVar2 = _Str;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,_Str,(int)pcVar2 - (int)(_Str + 1));
  ExceptionList = local_c;
  return param_1;
}

