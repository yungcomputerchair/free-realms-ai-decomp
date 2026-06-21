// addr: 0x013aef60
// name: PathConfig_getDefaultBasePath
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
PathConfig_getDefaultBasePath(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a global std::string and initializes it to './', returning
                       the singleton path. Used by logging, tutorial loading, and lobby deck
                       commands. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01686d4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbdcfc == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    DAT_01cbdcfc = Mem_Alloc(0x1c);
    if (DAT_01cbdcfc == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      DAT_01cbdcfc = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
    else {
      *(undefined4 *)(DAT_01cbdcfc + 0x18) = 0xf;
      *(undefined4 *)(DAT_01cbdcfc + 0x14) = 0;
      DAT_01cbdcfc[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    }
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (DAT_01cbdcfc,"./",2);
  }
  ExceptionList = local_c;
  return DAT_01cbdcfc;
}

