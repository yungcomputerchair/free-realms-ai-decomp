// addr: 0x01441390
// name: TcgRecord_setField60B
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgRecord_setField60B(void * this, void * value) */

void __thiscall TcgRecord_setField60B(void *this,void *value)

{
                    /* Assigns a string into field offset 0x60. Exact class and field name are not
                       proven. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x60),
             value,0,0xffffffff);
  return;
}

