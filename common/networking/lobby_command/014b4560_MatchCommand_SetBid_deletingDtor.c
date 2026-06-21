// addr: 0x014b4560
// name: MatchCommand_SetBid_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall MatchCommand_SetBid_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for MatchCommand_SetBid; it runs base cleanup and frees
                       the object when the delete flag is set. Evidence is the
                       MatchCommand_SetBid::vftable assignment and conditional _free. */
  puStack_8 = &LAB_016a7aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = MatchCommand_SetBid::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

