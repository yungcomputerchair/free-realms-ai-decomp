// addr: 0x013eb8f0
// name: CardGameFormat_getName
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
CardGameFormat_getName
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns a std::string display name for known card-game format ids, including
                       Standard, Standard Draft, Highlander, Common Ground, No Rares, and Invalid.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168e9e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 < 0x1adb2) {
    if (param_2 == 0x1adb1) {
      *(undefined4 *)(param_1 + 0x18) = 0xf;
      *(undefined4 *)(param_1 + 0x14) = 0;
      param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_1,"Standard Draft",0xe);
      ExceptionList = local_c;
      return param_1;
    }
    if (param_2 == 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,"Standard");
      ExceptionList = local_c;
      return param_1;
    }
LAB_013eb96f:
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,"Invalid",7);
  }
  else {
    if (param_2 == 0x1adb2) {
      pcVar1 = "Highlander";
    }
    else if (param_2 == 0x1adb3) {
      pcVar1 = "Common Ground";
    }
    else {
      if (param_2 != 0x1adb5) goto LAB_013eb96f;
      pcVar1 = "No Rares";
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,pcVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

