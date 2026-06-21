// addr: 0x013d8f00
// name: LobbyCommand_OfferAdjournedGame_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
LobbyCommand_OfferAdjournedGame_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for LobbyCommand_OfferAdjournedGame; runs LobbyCommand
                       teardown and frees when requested. Evidence is
                       LobbyCommand_OfferAdjournedGame::vftable and conditional _free. */
  puStack_8 = &LAB_0168bf88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = LobbyCommand_OfferAdjournedGame::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

