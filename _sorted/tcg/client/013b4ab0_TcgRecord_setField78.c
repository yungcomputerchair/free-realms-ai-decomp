// addr: 0x013b4ab0
// name: TcgRecord_setField78
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField78(void * this, void * value) */

void __thiscall TcgRecord_setField78(void *this,void *value)

{
                    /* Assigns a string into field offset 0x78. Exact class/field name is not
                       proven. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x78),
             value,0,0xffffffff);
  return;
}

