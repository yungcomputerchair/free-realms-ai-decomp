// addr: 0x013b1c60
// name: Engine_LobbyServiceBase_ctor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_LobbyServiceBase_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for Engine::LobbyServiceBase: constructs the base LobbyView,
                       installs the LobbyServiceBase vtable, zeroes two fields, and initializes an
                       owned std tree/map. Evidence is Engine::LobbyServiceBase::vftable and the
                       paired destructor at 013b1bf0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687721;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01230d10(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = Engine::LobbyServiceBase::vftable;
  Engine_LobbyView_ctor(param_1 + 2);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  MessageDB_IntTextMap_ctor(param_1 + 0x49);
  ExceptionList = local_c;
  return param_1;
}

