// addr: 0x013c1880
// name: TcgRecord_setField20
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField20(void * this, void * value) */

void __thiscall TcgRecord_setField20(void *this,void *value)

{
                    /* Assigns a string into field offset 0x20. Exact class/field name is not
                       proven. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20),
             value,0,0xffffffff);
  return;
}

