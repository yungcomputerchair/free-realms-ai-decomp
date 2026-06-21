// addr: 0x012c1210
// name: CollectionReference_isResolvedToCachedCollection
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionReference_isResolvedToCachedCollection(void * ref) */

bool __fastcall CollectionReference_isResolvedToCachedCollection(void *ref)

{
  void *this;
  void *pvVar1;
  
                    /* Checks whether a reference's cached collection pointer matches the collection
                       currently resolved from CollectionDB for its stored key. It returns false
                       when no cached pointer exists or the DB lookup fails. */
  if (*(int *)((int)ref + 8) != 0) {
    CollectionDB_initSingleton();
    pvVar1 = CollectionDB_getCollection(this,(void *)((int)ref + 0xc));
    if (pvVar1 != (void *)0x0) {
      return pvVar1 == *(void **)((int)ref + 8);
    }
  }
  return false;
}

