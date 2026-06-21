// addr: 0x01445e50
// name: TcgRecord_setField04C
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField04C(void * this, void * value) */

void __thiscall TcgRecord_setField04C(void *this,void *value)

{
                    /* Assigns a string into field offset 4. The caller does not provide enough
                       evidence for a precise class/field name. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             value,0,0xffffffff);
  return;
}

