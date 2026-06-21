// addr: 0x013aeed0
// name: TcgClient_setGlobalString
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgClient_setGlobalString(void * unused, void * value) */

void __cdecl TcgClient_setGlobalString(void *unused,void *value)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a global std::string at DAT_01cbdcfc and assigns value into
                       it. Exact purpose is unknown, but behavior is a global TCG client string
                       setter. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01686d1b;
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
  }
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (DAT_01cbdcfc,unused,0,0xffffffff);
  ExceptionList = local_c;
  return;
}

