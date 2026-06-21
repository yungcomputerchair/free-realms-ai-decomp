// addr: 0x01459970
// name: CWMatchCommand_LaunchGame_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CWMatchCommand_LaunchGame_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for CWMatchCommand_LaunchGame; it chains through
                       MatchCommand_LaunchGame cleanup and conditionally frees the object. Evidence
                       is the CWMatchCommand_LaunchGame::vftable assignment, call to 014b4d50, and
                       conditional _free. */
  puStack_8 = &LAB_0169c658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CWMatchCommand_LaunchGame::vftable;
  local_4 = 0xffffffff;
  MatchCommand_LaunchGame_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

