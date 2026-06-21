// addr: 0x012ed150
// name: Engine_LobbyService_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_LobbyService_ctor(void * this) */

void * __fastcall Engine_LobbyService_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::LobbyService by calling its base initializer and
                       installing the LobbyService vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_FRTWLobbyService_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = Engine::LobbyService::vftable;
  ExceptionList = local_c;
  return this;
}

