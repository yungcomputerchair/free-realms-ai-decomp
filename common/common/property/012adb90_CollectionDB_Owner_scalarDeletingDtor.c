// addr: 0x012adb90
// name: CollectionDB_Owner_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionDB_Owner_scalarDeletingDtor(void * this, char flags) */

void * __thiscall CollectionDB_Owner_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for the object whose destructor is FUN_012adb30.
                       It conditionally frees this after running the real destructor. */
  CollectionDB_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

