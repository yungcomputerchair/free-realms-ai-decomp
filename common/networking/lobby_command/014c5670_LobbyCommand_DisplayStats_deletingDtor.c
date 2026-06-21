// addr: 0x014c5670
// name: LobbyCommand_DisplayStats_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LobbyCommand_DisplayStats_deletingDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for LobbyCommand_DisplayStats; it invokes the
                       DisplayStats destructor helper and frees this if bit 0 of the flags byte is
                       set. Evidence is the call to 014c5390, whose body references
                       LobbyCommand_DisplayStats::vftable. */
  LobbyCommand_DisplayStats_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

