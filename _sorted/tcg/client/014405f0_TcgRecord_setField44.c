// addr: 0x014405f0
// name: TcgRecord_setField44
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField44(void * this, void * value) */

void __thiscall TcgRecord_setField44(void *this,void *value)

{
                    /* Assigns a string into field offset 0x44. Caller context is weak, so the name
                       is offset/behavior based. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x44),
             value,0,0xffffffff);
  return;
}

