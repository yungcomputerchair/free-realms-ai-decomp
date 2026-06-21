// addr: 0x014357d0
// name: CollectionViewBase_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionViewBase_scalarDeletingDtor(void * this, char flags) */

void * __thiscall CollectionViewBase_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for Engine::CollectionViewBase. It runs
                       the real destructor and frees this when the deleting flag requests it. */
  Engine_CollectionViewBase_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

