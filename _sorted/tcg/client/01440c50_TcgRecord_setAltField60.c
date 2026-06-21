// addr: 0x01440c50
// name: TcgRecord_setAltField60
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setAltField60(void * this, void * value) */

void __thiscall TcgRecord_setAltField60(void *this,void *value)

{
                    /* Assigns a string into field offset 0x60 for a similar record type. Exact
                       field name is unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x60),
             value,0,0xffffffff);
  return;
}

