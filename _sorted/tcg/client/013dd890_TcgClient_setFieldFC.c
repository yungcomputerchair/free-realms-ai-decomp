// addr: 0x013dd890
// name: TcgClient_setFieldFC
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgClient_setFieldFC(void * this, void * value) */

void __thiscall TcgClient_setFieldFC(void *this,void *value)

{
                    /* Assigns a string into field offset 0xfc. No exact class or field name is
                       evident, so the name is offset/behavior based. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xfc),
             value,0,0xffffffff);
  return;
}

