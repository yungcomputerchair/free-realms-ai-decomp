// addr: 0x013b1cf0
// name: Engine_LobbyView_scalarDtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_LobbyView_scalarDtor(void * this, char flags_) */

void * __thiscall Engine_LobbyView_scalarDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper for Engine::LobbyView, delegating to the
                       non-deleting destructor and optionally freeing this. The class name comes
                       from nearby LobbyView vtable construction. */
  Engine_LobbyServiceBase_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

