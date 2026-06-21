// addr: 0x012ae0f0
// name: CollectionDB_setCollection
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionDB_setCollection(void * this, void * collection) */

bool __thiscall CollectionDB_setCollection(void *this,void *collection)

{
  void *pvVar1;
  int iVar2;
  int *extraout_EAX;
  undefined4 *puVar3;
  void *unaff_EDI;
  undefined1 auStack_8 [8];
  
                    /* Adds/replaces a Collection pointer in the CollectionDB in-memory name map
                       without writing storage. */
  if (collection == (void *)0x0) {
    FUN_012f5a60("collection","..\\common\\common\\property\\CollectionDB.cpp",0xf7);
  }
  pvVar1 = Collection_getPropertyList(collection);
  iVar2 = FUN_00f942a0(0,*(undefined4 *)((int)pvVar1 + 0x14),&DAT_0175b400,0);
  if (iVar2 == 0) {
    FUN_012f5a60("false","..\\common\\common\\property\\CollectionDB.cpp",0xfa);
  }
  iVar2 = *(int *)((int)this + 4);
  pvVar1 = Collection_getPropertyList(collection);
  CollectionMap_findByName(this,auStack_8,pvVar1);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar2) {
    pvVar1 = Collection_getPropertyList(collection);
    puVar3 = (undefined4 *)CollectionDB_getOrCreateCollectionSlotByName(this,pvVar1,unaff_EDI);
    *puVar3 = collection;
  }
  return true;
}

