// addr: 0x014b3aa0
// name: MatchCommand_SetMatchState_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall MatchCommand_SetMatchState_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for MatchCommand_SetMatchState; it chains to MatchCommand
                       cleanup and conditionally frees this. Evidence is the
                       MatchCommand_SetMatchState::vftable assignment and conditional _free. */
  puStack_8 = &LAB_016a7878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = MatchCommand_SetMatchState::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

