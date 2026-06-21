// addr: 0x0139f7d0
// name: CollectionData_getCollectionType
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CollectionData_getCollectionType(void * this) */

int __fastcall CollectionData_getCollectionType(void *this)

{
                    /* Returns the collection type field at offset 0x84. */
  return *(int *)((int)this + 0x84);
}

