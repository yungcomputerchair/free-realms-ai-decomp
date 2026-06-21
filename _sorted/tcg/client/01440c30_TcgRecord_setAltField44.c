// addr: 0x01440c30
// name: TcgRecord_setAltField44
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setAltField44(void * this, void * value) */

void __thiscall TcgRecord_setAltField44(void *this,void *value)

{
                    /* Assigns a string into field offset 0x44 for a similar record type. Exact
                       field name is unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x44),
             value,0,0xffffffff);
  return;
}

