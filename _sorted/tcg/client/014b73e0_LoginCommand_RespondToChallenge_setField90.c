// addr: 0x014b73e0
// name: LoginCommand_RespondToChallenge_setField90
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RespondToChallenge_setField90(void * this, void * value) */

void __thiscall LoginCommand_RespondToChallenge_setField90(void *this,void *value)

{
                    /* Assigns a string into offset 0x90 of the login challenge response command.
                       014b5da0 uses this while constructing the response to a login challenge. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x90),
             value,0,0xffffffff);
  return;
}

