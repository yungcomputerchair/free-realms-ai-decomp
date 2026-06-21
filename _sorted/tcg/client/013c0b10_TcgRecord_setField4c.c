// addr: 0x013c0b10
// name: TcgRecord_setField4c
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField4c(void * this, void * value) */

void __thiscall TcgRecord_setField4c(void *this,void *value)

{
                    /* Assigns a string into field offset 0x4c. Used by nearby parsing/loading
                       callers, but the true record type is unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x4c),
             value,0,0xffffffff);
  return;
}

