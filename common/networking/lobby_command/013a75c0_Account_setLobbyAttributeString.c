// addr: 0x013a75c0
// name: Account_setLobbyAttributeString
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Account_setLobbyAttributeString(void * this, void * value) */

void __thiscall Account_setLobbyAttributeString(void *this,void *value)

{
                    /* Copies a supplied std::string into the Account object string at offset 0x24.
                       Evidence: LobbyCommandJoin.cpp and LobbyCommandBulkJoin.cpp populate Account
                       data via Account.cpp-adjacent setters before sending join notifications. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x24),
             value,0,0xffffffff);
  return;
}

