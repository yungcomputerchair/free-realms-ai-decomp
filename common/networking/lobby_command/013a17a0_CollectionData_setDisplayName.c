// addr: 0x013a17a0
// name: CollectionData_setDisplayName
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_setDisplayName(void * this, void * value) */

void __thiscall CollectionData_setDisplayName(void *this,void *value)

{
                    /* Assigns the std::string at CollectionData offset 0x20 from the supplied
                       string. Evidence: CollectionData ctor initializes this field and
                       LobbyCommand_SetLeagueCollection/SetDraft pass formatted labels like 'League
                       ID# %d' and 'Tournament ID# %d'. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20),
             value,0,0xffffffff);
  return;
}

