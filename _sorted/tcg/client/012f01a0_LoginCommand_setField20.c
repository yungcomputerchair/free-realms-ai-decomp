// addr: 0x012f01a0
// name: LoginCommand_setField20
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_setField20(void * this, void * value) */

void __thiscall LoginCommand_setField20(void *this,void *value)

{
                    /* Assigns a string into the object field at offset 0x20. No caller strings
                       identify the exact field, so the name is offset/behavior based. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20),
             value,0,0xffffffff);
  return;
}

