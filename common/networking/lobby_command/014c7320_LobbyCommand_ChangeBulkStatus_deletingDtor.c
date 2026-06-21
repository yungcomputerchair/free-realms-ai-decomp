// addr: 0x014c7320
// name: LobbyCommand_ChangeBulkStatus_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_ChangeBulkStatus_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_ChangeBulkStatus; it calls the
                       class destructor and frees this when requested. Evidence is the direct call
                       to 014c71c0 and conditional _free. */
  LobbyCommand_ChangeBulkStatus_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

