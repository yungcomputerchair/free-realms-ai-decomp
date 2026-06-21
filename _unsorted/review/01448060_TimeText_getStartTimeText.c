// addr: 0x01448060
// name: TimeText_getStartTimeText
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
TimeText_getStartTimeText(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns the placeholder string "TODO: getStartTimeText" for a start-time
                       display text method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01699f59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,"TODO: getStartTimeText",0x16);
  ExceptionList = local_c;
  return param_1;
}

