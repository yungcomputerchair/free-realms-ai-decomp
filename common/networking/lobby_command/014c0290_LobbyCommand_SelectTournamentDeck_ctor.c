// addr: 0x014c0290
// name: LobbyCommand_SelectTournamentDeck_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LobbyCommand_SelectTournamentDeck_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for LobbyCommand_SelectTournamentDeck; after base construction it
                       initializes a small-string field, pointer fields, and a boolean flag
                       defaulting true. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a9cd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = LobbyCommand_SelectTournamentDeck::vftable;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  ExceptionList = local_c;
  return param_1;
}

