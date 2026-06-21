// addr: 0x013d4c30
// name: CollectionItem_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionItem_deletingDtor(void * this, char flags) */

void * __thiscall CollectionItem_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for CollectionItem: calls CollectionItem_dtor and
                       frees this when requested. */
  CollectionItem_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

