// addr: 0x0144b890
// name: LobbyCommand_Concede_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall LobbyCommand_Concede_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for LobbyCommand_Concede; it performs the same
                       vftable/base cleanup and frees this when the low bit of the flag is set.
                       Evidence is the LobbyCommand_Concede::vftable assignment and conditional
                       _free. */
  puStack_8 = &LAB_0169ab18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_Concede::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

