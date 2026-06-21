// addr: 0x014adaa0
// name: SynchronizationCommand_applyCollectionItemToggles
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x014adaf4) */
/* Setting prototype: uint SynchronizationCommand_applyCollectionItemToggles(void * cmd) */

uint __fastcall SynchronizationCommand_applyCollectionItemToggles(void *cmd)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *extraout_EAX;
  void *extraout_EAX_00;
  void *extraout_EAX_01;
  void *ids;
  undefined4 uVar6;
  
                    /* Walks a command vector of collection item ids and applies add/remove/toggle
                       behavior to an item vector depending on the command mode. */
  uVar6 = *(undefined4 *)((int)cmd + 0x14);
  CollectionDB_initSingleton();
  pvVar3 = (void *)CollectionDB_getCollectionById(uVar6);
  pvVar4 = pvVar3;
  if (pvVar3 != (void *)0x0) {
    ids = *(void **)((int)cmd + 8);
    if (*(void **)((int)cmd + 0xc) < ids) {
      pvVar4 = (void *)FUN_00d83c2d();
    }
    while( true ) {
      pvVar5 = *(void **)((int)cmd + 0xc);
      if (pvVar5 < *(void **)((int)cmd + 8)) {
        pvVar4 = (void *)FUN_00d83c2d();
      }
      if (ids == pvVar5) break;
      if (*(void **)((int)cmd + 0xc) <= ids) {
        FUN_00d83c2d();
      }
      pvVar5 = PropertyContainer_findChild(pvVar3);
      pvVar4 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        iVar1 = *(int *)((int)cmd + 0x1c);
        if (iVar1 == 1) {
          pvVar4 = (void *)0x0;
          if (*(int *)((int)cmd + 0x18) != 0) {
            pvVar4 = ids;
            if (*(void **)((int)cmd + 0xc) <= ids) {
              FUN_00d83c2d();
            }
LAB_014adb91:
            CollectionData_removeInstanceRecordIfPresent(pvVar4);
            pvVar4 = extraout_EAX_01;
          }
        }
        else if (iVar1 == 2) {
          pvVar4 = (void *)0x0;
          if (*(int *)((int)cmd + 0x18) != 0) {
            if (*(void **)((int)cmd + 0xc) <= ids) {
              FUN_00d83c2d();
            }
            CollectionElementVector_eraseMatchingItemIds(pvVar5,ids);
            pvVar4 = extraout_EAX_00;
          }
        }
        else {
          pvVar4 = (void *)(iVar1 + -3);
          if ((pvVar4 == (void *)0x0) && (*(int *)((int)cmd + 0x18) != 0)) {
            if (*(void **)((int)cmd + 0xc) <= ids) {
              FUN_00d83c2d();
            }
            bVar2 = InstanceIDVector_contains(pvVar5,ids);
            if (!bVar2) {
              pvVar4 = (void *)FUN_013aab00();
              goto LAB_014adb91;
            }
            pvVar4 = (void *)FUN_013aab00();
            CollectionElementVector_eraseMatchingItemIds(pvVar5,pvVar4);
            pvVar4 = extraout_EAX;
          }
        }
      }
      if (*(void **)((int)cmd + 0xc) <= ids) {
        pvVar4 = (void *)FUN_00d83c2d();
      }
      ids = (void *)((int)ids + 0x10);
    }
  }
  return CONCAT31((int3)((uint)pvVar4 >> 8),1);
}

