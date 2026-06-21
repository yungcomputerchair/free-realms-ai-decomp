// addr: 0x014c31d0
// name: LobbyCommand_NotifyOfIgnore_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall LobbyCommand_NotifyOfIgnore_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for LobbyCommand_NotifyOfIgnore; after base
                       destruction it conditionally frees the object. Evidence is the class vftable
                       assignment and flags-controlled _free. */
  puStack_8 = &LAB_016aa5a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_NotifyOfIgnore::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

