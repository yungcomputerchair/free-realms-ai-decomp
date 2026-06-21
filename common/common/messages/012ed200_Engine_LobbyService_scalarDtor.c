// addr: 0x012ed200
// name: Engine_LobbyService_scalarDtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_LobbyService_scalarDtor(void * this, char flags_) */

void * __thiscall Engine_LobbyService_scalarDtor(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::LobbyService. It sets the LobbyService
                       vtable, destroys the FRTWLobbyService base, and optionally frees the object.
                        */
  puStack_8 = &LAB_016737b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::LobbyService::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWLobbyService_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

