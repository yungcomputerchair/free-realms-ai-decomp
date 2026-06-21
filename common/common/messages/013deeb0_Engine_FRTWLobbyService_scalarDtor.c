// addr: 0x013deeb0
// name: Engine_FRTWLobbyService_scalarDtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_FRTWLobbyService_scalarDtor(void * this, char flags_) */

void * __thiscall Engine_FRTWLobbyService_scalarDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for Engine::FRTWLobbyService. It delegates to the
                       class destructor and frees the object when requested. */
  Engine_FRTWLobbyService_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

