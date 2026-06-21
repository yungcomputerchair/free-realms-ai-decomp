// addr: 0x014ced30
// name: LobbyCommand_AddBuddies_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_AddBuddies_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_AddBuddies. It calls the
                       destructor and optionally frees the object. */
  LobbyCommand_AddBuddies_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

