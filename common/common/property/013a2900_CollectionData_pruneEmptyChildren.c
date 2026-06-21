// addr: 0x013a2900
// name: CollectionData_pruneEmptyChildren
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_pruneEmptyChildren(void * this) */

void __fastcall CollectionData_pruneEmptyChildren(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int key;
  undefined4 *puVar4;
  int local_2c;
  void *local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scans child collection entries, records children with no properties, and then
                       removes those children by persistent id from the collection data. */
  puStack_8 = &LAB_016859e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  puVar4 = *(undefined4 **)((int)this + 0x5c);
  local_20 = (undefined4 *)*puVar4;
  local_28 = this;
  local_24 = (int)this + 0x58;
  while( true ) {
    puVar1 = local_20;
    iVar3 = local_24;
    if ((local_24 == 0) || (local_24 != (int)this + 0x58)) {
      FUN_00d83c2d();
    }
    puVar2 = local_14;
    if (puVar1 == puVar4) break;
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (puVar1 == *(undefined4 **)(iVar3 + 4)) {
      FUN_00d83c2d();
    }
    local_2c = puVar1[4];
    if ((local_2c != 0) && (iVar3 = PropertyVector16_getCount(local_2c), iVar3 == 0)) {
      FUN_013a25c0(&local_2c);
    }
    CollectionDataChildIterator_increment(&local_24);
  }
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  puVar4 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar2) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= puVar4) {
      FUN_00d83c2d();
    }
    if ((void *)*puVar4 != (void *)0x0) {
      PersistentComponent_getPersistentId((void *)*puVar4);
      CollectionData_removeChildCollectionByKey(local_28,key);
    }
    if (local_14 <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}

