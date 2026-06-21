// addr: 0x012ae8a0
// name: CollectionDB_resolveDefaultCollection
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CollectionDB_resolveDefaultCollection(void) */

void CollectionDB_resolveDefaultCollection(void)

{
  undefined4 uVar1;
  
                    /* Initializes the shared backing database, derives a collection key via
                       FUN_012d08f0, then resolves it through CollectionDB_getCollection-like
                       FUN_012ae3f0. Evidence is the call chain into CollectionDB.cpp and callers
                       that need collection/archetype data. */
  DisplayActionManager_ensureSingleton();
  uVar1 = FUN_012d08f0();
  CollectionDB_getCollectionById(uVar1);
  return;
}

