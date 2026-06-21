// addr: 0x013d2980
// name: PostedTrade_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PostedTrade_scalarDeletingDtor(void * this, char flags) */

void * __thiscall PostedTrade_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for PostedTrade. It runs the PostedTrade
                       destructor and frees the object when requested by the flags argument. */
  PostedTrade_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

