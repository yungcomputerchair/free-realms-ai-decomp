// addr: 0x012ac430
// name: CollectionDB_reinsertSynchronizableCollections
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_reinsertSynchronizableCollections(void * this) */

void __fastcall CollectionDB_reinsertSynchronizableCollections(void *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_8;
  undefined4 *local_4;
  
                    /* Iterates the collection database tree and reinserts non-trade/non-special
                       collection data into the database index. */
  puVar1 = *(undefined4 **)((int)this + 4);
  local_4 = (undefined4 *)*puVar1;
  local_8 = this;
  while( true ) {
    puVar3 = local_4;
    pvVar2 = local_8;
    if ((local_8 == (void *)0x0) || (local_8 != this)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar3[10] != 0) {
      if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
        FUN_00d83c2d();
      }
      iVar4 = CollectionData_getCollectionType((void *)puVar3[10]);
      if (iVar4 != 3) {
        if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
          FUN_00d83c2d();
        }
        iVar4 = CollectionData_getCollectionType((void *)puVar3[10]);
        if (iVar4 != 4) {
          if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
            FUN_00d83c2d();
          }
          CollectionDB_insertCollection(this,(void *)puVar3[10]);
        }
      }
    }
    CollectionDB_TreeIterator_next((int *)&local_8);
  }
  return;
}

