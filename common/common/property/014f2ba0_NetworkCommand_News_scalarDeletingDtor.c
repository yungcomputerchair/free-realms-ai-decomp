// addr: 0x014f2ba0
// name: NetworkCommand_News_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_News_scalarDeletingDtor(void * this, char flags) */

void * __thiscall NetworkCommand_News_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor thunk for NetworkCommand_News. It calls the class
                       destructor at 014f2990 and frees this when requested. */
  NetworkCommand_News_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

