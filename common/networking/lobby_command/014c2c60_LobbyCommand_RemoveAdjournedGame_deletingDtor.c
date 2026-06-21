// addr: 0x014c2c60
// name: LobbyCommand_RemoveAdjournedGame_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
LobbyCommand_RemoveAdjournedGame_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for LobbyCommand_RemoveAdjournedGame; it runs the
                       same base destruction sequence and frees this when flags bit 0 is set.
                       Evidence is the class vftable store followed by conditional _free. */
  puStack_8 = &LAB_016aa488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_RemoveAdjournedGame::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

