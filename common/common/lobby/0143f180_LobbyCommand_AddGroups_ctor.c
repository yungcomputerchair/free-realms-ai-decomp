// addr: 0x0143f180
// name: LobbyCommand_AddGroups_ctor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall LobbyCommand_AddGroups_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_AddGroups by running the LobbyCommand base
                       constructor, setting the AddGroups vtable, and zeroing its vector triplet. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01698473;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = LobbyCommand_AddGroups::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return param_1;
}

