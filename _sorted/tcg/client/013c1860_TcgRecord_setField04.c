// addr: 0x013c1860
// name: TcgRecord_setField04
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField04(void * this, void * value) */

void __thiscall TcgRecord_setField04(void *this,void *value)

{
                    /* Assigns a string into field offset 4. Caller context is weak, so the name is
                       behavior/offset based. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             value,0,0xffffffff);
  return;
}

