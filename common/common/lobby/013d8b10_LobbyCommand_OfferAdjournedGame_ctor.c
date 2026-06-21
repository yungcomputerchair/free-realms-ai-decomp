// addr: 0x013d8b10
// name: LobbyCommand_OfferAdjournedGame_ctor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LobbyCommand_OfferAdjournedGame_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a LobbyCommand_OfferAdjournedGame by running the LobbyCommand base
                       constructor, setting the class vtable, and zeroing three command fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168bec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = LobbyCommand_OfferAdjournedGame::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return param_1;
}

