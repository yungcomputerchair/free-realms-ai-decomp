// addr: 0x014b7420
// name: LoginCommand_RespondToChallenge_setField3c
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RespondToChallenge_setField3c(void * this, void * value) */

void __thiscall LoginCommand_RespondToChallenge_setField3c(void *this,void *value)

{
                    /* Assigns a string into offset 0x3c of the login challenge response command.
                       Exact field name is unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x3c),
             value,0,0xffffffff);
  return;
}

