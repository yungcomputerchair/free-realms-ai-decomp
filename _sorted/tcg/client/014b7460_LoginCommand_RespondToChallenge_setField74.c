// addr: 0x014b7460
// name: LoginCommand_RespondToChallenge_setField74
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RespondToChallenge_setField74(void * this, void * value) */

void __thiscall LoginCommand_RespondToChallenge_setField74(void *this,void *value)

{
                    /* Assigns a string into offset 0x74 of the login challenge response command.
                       Exact field purpose is unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x74),
             value,0,0xffffffff);
  return;
}

