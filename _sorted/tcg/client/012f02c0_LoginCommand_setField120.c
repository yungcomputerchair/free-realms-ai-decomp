// addr: 0x012f02c0
// name: LoginCommand_setField120
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_setField120(void * this, void * value) */

void __thiscall LoginCommand_setField120(void *this,void *value)

{
                    /* Assigns a string into the object field at offset 0x120. Exact object and
                       field purpose are unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x120),
             value,0,0xffffffff);
  return;
}

