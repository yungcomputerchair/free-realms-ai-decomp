// addr: 0x01345750
// name: CollectionReference_ensureCollectionLoaded
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionReference_ensureCollectionLoaded(void * this) */

bool __fastcall CollectionReference_ensureCollectionLoaded(void *this)

{
  int iVar1;
  
                    /* Ensures a collection reference has resolved its cached CollectionDB pointer,
                       returning whether resolution succeeded. It initializes CollectionDB and
                       resolves the key stored at offset 0x38 into the cache at offset 0x2c. */
  if (*(int *)((int)this + 0x2c) != 0) {
    return true;
  }
  CollectionDB_initSingleton();
  iVar1 = CollectionDB_getCollectionById(*(undefined4 *)((int)this + 0x38));
  *(int *)((int)this + 0x2c) = iVar1;
  return iVar1 != 0;
}

