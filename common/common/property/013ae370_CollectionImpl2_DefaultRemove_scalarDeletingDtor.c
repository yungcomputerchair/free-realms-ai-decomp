// addr: 0x013ae370
// name: CollectionImpl2_DefaultRemove_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionImpl2_DefaultRemove_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall CollectionImpl2_DefaultRemove_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for
                       Engine::CollectionImpl<2,Engine::DefaultRemove<2>>. It calls the real
                       destructor and frees the object when requested by the flags argument. */
  CollectionImpl2_DefaultRemove_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

