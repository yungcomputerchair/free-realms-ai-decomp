// addr: 0x014bff20
// name: LobbyCommand_SendPing_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall LobbyCommand_SendPing_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for LobbyCommand_SendPing; it invokes base destruction
                       and conditionally frees this. */
  puStack_8 = &LAB_016a9c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_SendPing::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

