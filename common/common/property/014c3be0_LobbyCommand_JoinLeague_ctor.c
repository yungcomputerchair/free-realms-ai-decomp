// addr: 0x014c3be0
// name: LobbyCommand_JoinLeague_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LobbyCommand_JoinLeague_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_JoinLeague by running LobbyCommand_Join_ctor and
                       installing the derived vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_Join_ctor(param_1);
  *param_1 = LobbyCommand_JoinLeague::vftable;
  ExceptionList = local_c;
  return param_1;
}

