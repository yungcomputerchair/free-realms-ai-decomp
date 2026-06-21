// addr: 0x014f0760
// name: NetworkCommand_UpdateDataVersion_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_UpdateDataVersion_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall NetworkCommand_UpdateDataVersion_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for NetworkCommand_UpdateDataVersion. It
                       calls 014f0560 and conditionally frees this. */
  NetworkCommand_UpdateDataVersion_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

