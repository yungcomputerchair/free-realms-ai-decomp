// addr: 0x014b30c0
// name: MatchCommand_SetDeckArchetype_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall MatchCommand_SetDeckArchetype_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for MatchCommand_SetDeckArchetype; it runs base cleanup
                       and conditionally frees this. Evidence is the
                       MatchCommand_SetDeckArchetype::vftable assignment and delete-flag-controlled
                       _free. */
  puStack_8 = &LAB_016a75f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = MatchCommand_SetDeckArchetype::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

