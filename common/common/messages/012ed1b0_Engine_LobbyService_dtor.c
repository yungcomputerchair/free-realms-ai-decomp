// addr: 0x012ed1b0
// name: Engine_LobbyService_dtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_LobbyService_dtor(void * this) */

void __fastcall Engine_LobbyService_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor wrapper for Engine::LobbyService that installs the LobbyService
                       vtable and then destroys the FRTWLobbyService base/subobject. It does not
                       free the object. */
  puStack_8 = &LAB_01673788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::LobbyService::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWLobbyService_dtor(this);
  ExceptionList = local_c;
  return;
}

