// addr: 0x014cf3e0
// name: LobbyCommand_AddBooster_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall LobbyCommand_AddBooster_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for LobbyCommand_AddBooster. It sets the
                       AddBooster vtable, performs destructor epilogue work, and frees this when the
                       flag requests it. */
  puStack_8 = &LAB_016abdf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_AddBooster::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

