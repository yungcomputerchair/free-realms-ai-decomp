// addr: 0x014c1850
// name: LobbyCommand_RequestAddBuddy_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall LobbyCommand_RequestAddBuddy_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for LobbyCommand_RequestAddBuddy; after base destruction
                       it frees this when requested. */
  puStack_8 = &LAB_016aa128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_RequestAddBuddy::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

