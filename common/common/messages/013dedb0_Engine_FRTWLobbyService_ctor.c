// addr: 0x013dedb0
// name: Engine_FRTWLobbyService_ctor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_FRTWLobbyService_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an Engine::FRTWLobbyService by running the lobby service base
                       constructor, installing Engine::FRTWLobbyService::vftable, and initializing
                       an embedded string. Evidence is the explicit vftable assignment and caller
                       Engine_LobbyService_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ccf6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_LobbyServiceBase_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = Engine::FRTWLobbyService::vftable;
  param_1[0x52] = 0xf;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  ExceptionList = local_c;
  return param_1;
}

