// addr: 0x012f0180
// name: LoginCommand_setField04
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_setField04(void * this, void * value) */

void __thiscall LoginCommand_setField04(void *this,void *value)

{
                    /* Assigns a string into the object field at offset 4. Caller 014b6460
                       sends/serializes a login-related command, but the exact field name is
                       unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             value,0,0xffffffff);
  return;
}

