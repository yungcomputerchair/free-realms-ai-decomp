// addr: 0x014be900
// name: LobbyCommand_SetDraft_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetDraft_deletingDtor(void * this, char flags) */

void * __thiscall LobbyCommand_SetDraft_deletingDtor(void *this,char flags)

{
                    /* Deleting destructor for LobbyCommand_SetDraft; invokes the full destructor
                       and optionally frees object storage. */
  LobbyCommand_SetDraft_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

