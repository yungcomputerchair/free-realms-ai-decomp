// addr: 0x013b4a70
// name: TcgRecord_setField40
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField40(void * this, void * value) */

void __thiscall TcgRecord_setField40(void *this,void *value)

{
                    /* Assigns a string into field offset 0x40. It appears to be one of several
                       string setters used while loading a TCG record. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x40),
             value,0,0xffffffff);
  return;
}

