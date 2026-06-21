// addr: 0x013b2660
// name: MatchCommand_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall MatchCommand_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for MatchCommand: runs the MatchCommand/LobbyCommand
                       destructor chain and frees the object when flags bit 0 is set. Evidence is
                       standard deleting-dtor shape and MatchCommand::vftable. */
  puStack_8 = &LAB_01687908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = MatchCommand::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

