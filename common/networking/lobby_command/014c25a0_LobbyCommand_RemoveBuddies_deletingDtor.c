// addr: 0x014c25a0
// name: LobbyCommand_RemoveBuddies_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_RemoveBuddies_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for LobbyCommand_RemoveBuddies; it calls the full
                       destructor and optionally frees this. */
  LobbyCommand_RemoveBuddies_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

