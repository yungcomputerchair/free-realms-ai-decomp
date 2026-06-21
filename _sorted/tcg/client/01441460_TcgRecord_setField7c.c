// addr: 0x01441460
// name: TcgRecord_setField7c
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField7c(void * this, void * value) */

void __thiscall TcgRecord_setField7c(void *this,void *value)

{
                    /* Assigns a string into field offset 0x7c. Exact field purpose is unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x7c),
             value,0,0xffffffff);
  return;
}

