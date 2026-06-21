// addr: 0x013b3b80
// name: MatchCommand_SetReady_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall MatchCommand_SetReady_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for MatchCommand_SetReady: runs the MatchCommand base
                       destructor and frees when flags bit 0 is set. Evidence is
                       MatchCommand_SetReady::vftable and conditional _free. */
  puStack_8 = &LAB_01687cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = MatchCommand_SetReady::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

