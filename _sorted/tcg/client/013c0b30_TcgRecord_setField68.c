// addr: 0x013c0b30
// name: TcgRecord_setField68
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField68(void * this, void * value) */

void __thiscall TcgRecord_setField68(void *this,void *value)

{
                    /* Assigns a string into field offset 0x68. Exact field purpose is unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x68),
             value,0,0xffffffff);
  return;
}

