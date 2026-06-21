// addr: 0x014cd640
// name: LobbyCommand_AddLeagueCards_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_AddLeagueCards_deletingDtor(void * this, char flags) */

void * __thiscall LobbyCommand_AddLeagueCards_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for LobbyCommand_AddLeagueCards; runs complete
                       destruction then frees this if requested. */
  LobbyCommand_AddLeagueCards_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

