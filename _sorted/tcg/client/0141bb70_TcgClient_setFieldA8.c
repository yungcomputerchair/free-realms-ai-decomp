// addr: 0x0141bb70
// name: TcgClient_setFieldA8
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgClient_setFieldA8(void * this, void * value) */

void __thiscall TcgClient_setFieldA8(void *this,void *value)

{
                    /* Assigns a string into field offset 0xa8. The callers are in TCG client logic
                       but no exact field/class name is available. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xa8),
             value,0,0xffffffff);
  return;
}

