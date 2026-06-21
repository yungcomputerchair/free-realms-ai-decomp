// addr: 0x014448e0
// name: TcgRecord_setField20B
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField20B(void * this, void * value) */

void __thiscall TcgRecord_setField20B(void *this,void *value)

{
                    /* Assigns a string into field offset 0x20. Exact record type is unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20),
             value,0,0xffffffff);
  return;
}

