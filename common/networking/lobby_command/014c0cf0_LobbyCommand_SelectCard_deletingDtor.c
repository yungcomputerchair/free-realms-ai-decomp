// addr: 0x014c0cf0
// name: LobbyCommand_SelectCard_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall LobbyCommand_SelectCard_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for LobbyCommand_SelectCard; it performs base cleanup and
                       frees this when the delete flag is set. */
  puStack_8 = &LAB_016a9e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_SelectCard::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

