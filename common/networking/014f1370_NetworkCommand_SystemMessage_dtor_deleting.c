// addr: 0x014f1370
// name: NetworkCommand_SystemMessage_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_SystemMessage_dtor_deleting(void * this, char flags_) */

void * __thiscall NetworkCommand_SystemMessage_dtor_deleting(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper for NetworkCommand_SystemMessage; calls
                       its destructor and optionally frees this. */
  NetworkCommand_SystemMessage_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

