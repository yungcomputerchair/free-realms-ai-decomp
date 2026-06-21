// addr: 0x013dee20
// name: Engine_FRTWLobbyService_dtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_FRTWLobbyService_dtor(void * this) */

void __fastcall Engine_FRTWLobbyService_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys an Engine::FRTWLobbyService object/subobject, including a
                       std::string member near offset 0x134, then calls the base LobbyView/Lobby
                       service destructor. It installs the FRTWLobbyService vtable first. */
  puStack_8 = &LAB_0168cd36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWLobbyService::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x148)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x134));
  }
  *(undefined4 *)((int)this + 0x148) = 0xf;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined1 *)((int)this + 0x134) = 0;
  local_4 = 0xffffffff;
  Engine_LobbyServiceBase_dtor(this);
  ExceptionList = local_c;
  return;
}

