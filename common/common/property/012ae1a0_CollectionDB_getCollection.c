// addr: 0x012ae1a0
// name: CollectionDB_getCollection
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionDB_getCollection(void * this, void * collectionName) */

void * __thiscall CollectionDB_getCollection(void *this,void *collectionName)

{
  int iVar1;
  int *extraout_EAX;
  undefined4 *puVar2;
  void *pvVar3;
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up a collection by name in the CollectionDB cache and falls back to
                       loading it from mDBMStorage when the cache entry is absent. The code mirrors
                       DeckDB_getDeck but uses CollectionDB.cpp helpers and returns the cached
                       CollectionData pointer. */
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\CollectionDB.cpp",0x51);
  }
  iVar1 = *(int *)((int)this + 4);
  CollectionMap_findByName(this,local_8,collectionName);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] != iVar1) {
    puVar2 = (undefined4 *)
             CollectionDB_getOrCreateCollectionSlotByName(this,collectionName,unaff_EDI);
    return (void *)*puVar2;
  }
  pvVar3 = (void *)CollectionDB_loadCollection(collectionName);
  return pvVar3;
}

