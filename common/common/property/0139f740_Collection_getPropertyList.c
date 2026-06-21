// addr: 0x0139f740
// name: Collection_getPropertyList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Collection_getPropertyList(void * this) */

void * __fastcall Collection_getPropertyList(void *this)

{
                    /* Returns the address of the subobject at offset +4. Evidence is the trivial
                       this+4 accessor and callers include CollectionDB_insertCollection and other
                       collection-loading routines. */
  return (void *)((int)this + 4);
}

