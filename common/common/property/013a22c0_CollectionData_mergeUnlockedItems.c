// addr: 0x013a22c0
// name: CollectionData_mergeUnlockedItems
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_mergeUnlockedItems(void * this, void * collection) */

void __thiscall CollectionData_mergeUnlockedItems(void *this,void *collection)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int *key;
  undefined4 *extraout_EAX;
  int *piVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  void *pvStack_44;
  undefined4 *puStack_40;
  int local_3c;
  int iStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  void *pvStack_2c;
  int iStack_24;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Merges item records from another CollectionData when a predicate accepts the
                       source item id, reusing existing items or creating CollectionItem records as
                       needed. Evidence: CollectionData.cpp assert 'collection', iteration of
                       collection+0x58 items, CollectionItem_ctor/setItemId, and
                       CollectionData_insertUniqueItemRecord. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016858bb;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffa4);
  ExceptionList = &local_c;
  if (collection == (void *)0x0) {
    FUN_012f5a60("collection","..\\common\\common\\property\\CollectionData.cpp",0x4b);
  }
  iVar7 = (int)collection + 0x58;
  local_3c = iVar7;
  DeckBuilderUtilities_getInstance();
  puStack_40 = *(undefined4 **)((int)collection + 0x5c);
  puStack_34 = (undefined4 *)*puStack_40;
  iStack_38 = iVar7;
  do {
    puVar4 = puStack_34;
    iVar1 = iStack_38;
    puVar3 = puStack_40;
    if ((iStack_38 == 0) || (iStack_38 != iVar7)) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar3) {
      ExceptionList = local_c;
      return;
    }
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    cVar5 = (**(code **)*extraout_EAX)(puVar4[3]);
    if (cVar5 != '\0') {
      if (puVar4 == *(undefined4 **)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      iVar7 = puVar4[4];
      if (puVar4 == *(undefined4 **)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      pvStack_44 = (void *)puVar4[3];
      iStack_24 = *(int *)((int)this + 0x5c);
      piVar6 = (int *)FUN_013a0ab0(auStack_20,&pvStack_44);
      pvVar9 = (void *)*piVar6;
      iVar1 = piVar6[1];
      if ((pvVar9 == (void *)0x0) || (pvVar9 != (void *)((int)this + 0x58))) {
        FUN_00d83c2d();
      }
      if (iVar1 != iStack_24) {
        if (pvVar9 == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (iVar1 == *(int *)((int)pvVar9 + 4)) {
          FUN_00d83c2d();
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar7 = PropertyVector16_getStorage(iVar7);
          uVar2 = *(uint *)(iVar7 + 8);
          if (uVar2 < *(uint *)(iVar7 + 4)) {
            FUN_00d83c2d();
          }
          uVar8 = *(uint *)(iVar7 + 4);
          if (*(uint *)(iVar7 + 8) < uVar8) {
            FUN_00d83c2d();
          }
          while( true ) {
            if (iVar7 == 0) {
              FUN_00d83c2d();
            }
            if (uVar8 == uVar2) break;
            if (iVar7 == 0) {
              FUN_00d83c2d();
            }
            if (*(uint *)(iVar7 + 8) <= uVar8) {
              FUN_00d83c2d();
            }
            CollectionData_insertUniqueItemRecord(uVar8);
            if (*(uint *)(iVar7 + 8) <= uVar8) {
              FUN_00d83c2d();
            }
            uVar8 = uVar8 + 0x10;
          }
          goto LAB_013a24c6;
        }
      }
      pvStack_44 = Mem_Alloc(0x30);
      pvVar9 = (void *)0x0;
      uStack_4 = 0;
      if (pvStack_44 != (void *)0x0) {
        pvVar9 = (void *)CollectionItem_ctor();
      }
      iVar1 = iStack_38;
      uStack_4 = 0xffffffff;
      if (puVar4 == *(undefined4 **)(iStack_38 + 4)) {
        FUN_00d83c2d();
      }
      CollectionItem_setItemId(pvVar9,puVar4[3]);
      PropertyVector16_getStorage(iVar7);
      FUN_013d52b0();
      if (puVar4 == *(undefined4 **)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      if (pvVar9 != (void *)0x0) {
        iStack_30 = PersistentComponent_getPersistentId(pvVar9);
        pvStack_2c = pvVar9;
        PropertyContainerMap_insertOrFind((void *)((int)this + 0x58),auStack_18,&iStack_30,key);
      }
    }
LAB_013a24c6:
    CollectionDataChildIterator_increment(&iStack_38);
    iVar7 = local_3c;
  } while( true );
}

