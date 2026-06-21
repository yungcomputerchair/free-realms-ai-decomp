// addr: 0x013a1d10
// name: CollectionData_buildItemMapFromChildren
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_buildItemMapFromChildren(void * collection_data) */

void __thiscall CollectionData_buildItemMapFromChildren(void *this,void *collection_data)

{
  undefined4 *puVar1;
  void *sourceRecord;
  int iVar2;
  undefined4 *puVar3;
  int *key;
  void *pvVar4;
  void *this_00;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  void *local_28;
  undefined1 local_24 [16];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Iterates collection child entries, constructs CollectionItem objects for
                       non-null child components, copies child data into them, and inserts them into
                       a map keyed by persistent id. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016857cb;
  local_14 = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  ExceptionList = &local_14;
  if (collection_data != (void *)0x0) {
    puVar1 = *(undefined4 **)((int)collection_data + 0x5c);
    local_30 = (undefined4 *)*puVar1;
    local_34 = (int)collection_data + 0x58;
    while( true ) {
      puVar3 = local_30;
      iVar2 = local_34;
      if ((local_34 == 0) || (local_34 != (int)collection_data + 0x58)) {
        FUN_00d83c2d();
      }
      if (puVar3 == puVar1) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      sourceRecord = (void *)puVar3[4];
      if (sourceRecord != (void *)0x0) {
        pvVar4 = Mem_Alloc(0x30);
        this_00 = (void *)0x0;
        local_c = 0;
        if (pvVar4 != (void *)0x0) {
          this_00 = (void *)CollectionItem_ctor();
        }
        local_c = 0xffffffff;
        CollectionItemRecord_moveFrom(this_00,sourceRecord);
        if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
          FUN_00d83c2d();
        }
        if (this_00 != (void *)0x0) {
          local_2c = PersistentComponent_getPersistentId(this_00);
          local_28 = this_00;
          PropertyContainerMap_insertOrFind((void *)((int)this + 0x58),local_24,&local_2c,key);
        }
      }
      CollectionDataChildIterator_increment(&local_34);
    }
  }
  ExceptionList = local_14;
  return;
}

