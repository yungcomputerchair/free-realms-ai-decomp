// addr: 0x014f52e0
// name: NetworkCommand_EULA_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_EULA_dtor_deleting(void * this, char flags_) */

void * __thiscall NetworkCommand_EULA_dtor_deleting(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper for NetworkCommand_EULA; calls its
                       destructor and optionally frees this. */
  NetworkCommand_EULA_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

