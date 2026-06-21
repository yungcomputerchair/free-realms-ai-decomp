// addr: 0x014bd7b0
// name: LobbyCommand_SetLeagueCards_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetLeagueCards_deletingDtor(void * this, char flags_) */

void * __thiscall LobbyCommand_SetLeagueCards_deletingDtor(void *this,char flags_)

{
                    /* Vector-deleting destructor wrapper for LobbyCommand_SetLeagueCards; it
                       invokes the real destructor and frees the object when the low flag bit is
                       set. */
  LobbyCommand_SetLeagueCards_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

