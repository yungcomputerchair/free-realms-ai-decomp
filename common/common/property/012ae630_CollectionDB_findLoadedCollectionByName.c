// addr: 0x012ae630
// name: CollectionDB_findLoadedCollectionByName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012ae797) */
/* Setting prototype: int CollectionDB_findLoadedCollectionByName(void * collection_db, void * name)
    */

int __thiscall CollectionDB_findLoadedCollectionByName(void *this,void *collection_db,void *name)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  void *local_30;
  uint *local_2c;
  void *local_28;
  undefined4 *puStack_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  uint *local_14;
  uint *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Searches loaded collections by name; if the in-memory tree is exhausted,
                       loads all collections and scans them for a matching property-container name
                       block. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166cbd8;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  puVar10 = *(undefined4 **)((int)this + 4);
  local_2c = (uint *)*puVar10;
  local_30 = this;
  local_28 = this;
  while( true ) {
    puVar9 = local_2c;
    pvVar6 = local_30;
    if ((local_30 == (void *)0x0) || (local_30 != this)) {
      FUN_00d83c2d(uVar3);
    }
    if (puVar9 == puVar10) break;
    if (pvVar6 == (void *)0x0) {
      FUN_00d83c2d(uVar3);
    }
    if (puVar9 == *(undefined4 **)((int)pvVar6 + 4)) {
      FUN_00d83c2d(uVar3);
    }
    pvVar6 = (void *)puVar9[10];
    if (pvVar6 != (void *)0x0) {
      pvVar4 = PropertyContainer_getField68Block(pvVar6);
      if (*(uint *)((int)collection_db + 0x18) < 0x10) {
        iVar5 = (int)collection_db + 4;
      }
      else {
        iVar5 = *(int *)((int)collection_db + 4);
      }
      iVar5 = FUN_00f942a0(0,*(undefined4 *)((int)pvVar4 + 0x14),iVar5,
                           *(undefined4 *)((int)collection_db + 0x14));
      if (iVar5 == 0) {
        ExceptionList = puStack_8;
        return (int)pvVar6;
      }
    }
    CollectionDB_TreeIterator_next((int *)&local_30);
  }
  local_18 = 0;
  local_14 = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_4 = 0;
  CollectionDB_getAllCollections(this,local_1c);
  local_2c = local_10;
  if (local_10 < local_14) {
    FUN_00d83c2d();
  }
  puVar9 = local_14;
  if (local_10 < local_14) {
    FUN_00d83c2d();
  }
  puVar10 = &local_18;
  puStack_20 = puVar10;
  do {
    if ((puVar10 == (undefined4 *)0x0) || (puVar10 != &local_18)) {
      FUN_00d83c2d();
    }
    if (puVar9 == local_2c) {
      if (local_14 == (uint *)0x0) {
        ExceptionList = puStack_8;
        return 0;
      }
      if (local_14 != local_10) {
        puVar9 = local_14 + 6;
        do {
          if (0xf < *puVar9) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar9[-5]);
          }
          *puVar9 = 0xf;
          puVar9[-1] = 0;
          *(undefined1 *)(puVar9 + -5) = 0;
          puVar1 = puVar9 + 1;
          puVar9 = puVar9 + 7;
        } while (puVar1 != local_10);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_14);
    }
    if (puVar10 == (undefined4 *)0x0) {
      FUN_00d83c2d();
    }
    if ((uint *)puVar10[2] <= puVar9) {
      FUN_00d83c2d();
    }
    pvVar6 = (void *)CollectionDB_loadCollection(puVar9);
    if (pvVar6 != (void *)0x0) {
      pvVar4 = PropertyContainer_getField68Block(pvVar6);
      uVar3 = *(uint *)((int)name + 0x14);
      if (*(uint *)((int)name + 0x18) < 0x10) {
        iVar5 = (int)name + 4;
      }
      else {
        iVar5 = *(int *)((int)name + 4);
      }
      uVar2 = *(uint *)((int)pvVar4 + 0x14);
      uVar8 = uVar2;
      if (uVar3 <= uVar2) {
        uVar8 = uVar3;
      }
      if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
        iVar7 = (int)pvVar4 + 4;
      }
      else {
        iVar7 = *(int *)((int)pvVar4 + 4);
      }
      iVar5 = FUN_00f93bd0(iVar7,iVar5,uVar8);
      puVar10 = puStack_20;
      if (((iVar5 == 0) && (uVar3 <= uVar2)) && (uVar2 == uVar3)) {
        if (local_14 == (uint *)0x0) {
          ExceptionList = puStack_8;
          return (int)pvVar6;
        }
        StdStringRange_destroy(local_14,local_10);
                    /* WARNING: Subroutine does not return */
        _free(local_14);
      }
    }
    if ((uint *)puVar10[2] <= puVar9) {
      FUN_00d83c2d();
    }
    puVar9 = puVar9 + 7;
  } while( true );
}

