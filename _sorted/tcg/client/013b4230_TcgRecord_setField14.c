// addr: 0x013b4230
// name: TcgRecord_setField14
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField14(void * this, void * value) */

void __thiscall TcgRecord_setField14(void *this,void *value)

{
                    /* Assigns a string into field offset 0x14. Caller 01282970 sets several
                       adjacent string fields, but exact record type and field names are unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x14),
             value,0,0xffffffff);
  return;
}

