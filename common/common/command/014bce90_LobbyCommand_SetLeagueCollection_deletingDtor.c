// addr: 0x014bce90
// name: LobbyCommand_SetLeagueCollection_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetLeagueCollection_deletingDtor(void * this, char flags)
    */

void * __thiscall LobbyCommand_SetLeagueCollection_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for LobbyCommand_SetLeagueCollection; runs the complete
                       destructor and frees the object when requested. */
  LobbyCommand_SetLeagueCollection_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

