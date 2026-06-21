// addr: 0x014b0bd0
// name: SynchronizationCommand_SendInstances_buildInstanceBatch
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandSendInstances.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SynchronizationCommand_SendInstances_buildInstanceBatch(void * this, int
   minArchetypeId, int maxArchetypes) */

int __thiscall
SynchronizationCommand_SendInstances_buildInstanceBatch
          (void *this,int minArchetypeId,int maxArchetypes)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  void **ppvVar6;
  undefined1 *puVar7;
  uint uStack_80;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  void *local_50 [2];
  void *local_48 [2];
  void *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Builds a SendInstances batch from a collection map: stores the requested
                       archetype count, finds the first archetype at or above the input, copies
                       tradable and non-tradable instance vectors, and returns the next archetype id
                       or 0xffffffff. Evidence is the SynchronizationCommandSendInstances.cpp assert
                       on collection plus sibling dump strings for base archetype, count, instances,
                       non-tradable instances, and delivery id. */
  puStack_c = &LAB_016a6ec0;
  local_10 = ExceptionList;
  uStack_80 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  iVar4 = 0;
  local_8 = 0;
  *(int *)((int)this + 0xc) = maxArchetypes;
  uVar5 = *(undefined4 *)((int)this + 0x20);
  CollectionDB_initSingleton();
  this_00 = (void *)CollectionDB_getCollectionById(uVar5);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("collection",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandSendInstances.cpp",
                 100);
  }
  local_50[0] = PropertyContainer_getChildList(this_00);
  local_3c = *(undefined4 **)((int)local_50[0] + 4);
  local_24 = *local_3c;
  local_48[0] = local_50[0];
  local_40 = local_50[0];
  local_28 = local_50[0];
  while( true ) {
    iVar1 = TreeIterator_notEqual(&local_28,&local_40);
    if ((char)iVar1 == '\0') break;
    piVar2 = (int *)TreeIterator_valueChecked();
    if (minArchetypeId <= *piVar2) break;
    CollectionDataChildIterator_increment((int *)&local_28);
  }
  iVar1 = TreeIterator_equal(&local_28,&local_40);
  if ((char)iVar1 == '\0') {
    puVar3 = (undefined4 *)TreeIterator_valueChecked();
    *(undefined4 *)((int)this + 8) = *puVar3;
    local_18 = 0;
    local_1c = 0;
    while( true ) {
      iVar1 = TreeIterator_notEqual(&local_28,&local_40);
      if ((((char)iVar1 == '\0') || (maxArchetypes <= local_18)) || (9999 < iVar4)) break;
      iVar1 = TreeIterator_valueChecked();
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 != 0) {
        local_30 = 0;
        local_38 = 0;
        ppvVar6 = local_50;
        PropertyVector16_getStorage(iVar1);
        puVar3 = (undefined4 *)FUN_012c1ca0(ppvVar6);
        local_38 = *puVar3;
        local_34 = puVar3[1];
        ppvVar6 = local_48;
        PropertyVector16_getStorage(iVar1);
        puVar3 = (undefined4 *)FUN_012c1c70(ppvVar6);
        local_30 = *puVar3;
        local_2c = puVar3[1];
        while( true ) {
          iVar1 = Vector16Iterator_notEqual(&local_30,&local_38);
          if ((char)iVar1 == '\0') break;
          iVar4 = iVar4 + 1;
          local_1c = iVar4;
          iVar1 = Vector16Iterator_getIndexChecked(&local_30);
          FUN_012c3e50(iVar1);
          Vector16Iterator_postIncrement(local_58,0);
        }
        puVar7 = local_60;
        CollectionEntry_getNonTradableInstancesVector(puVar7);
        puVar3 = (undefined4 *)FUN_012c1ca0(puVar7);
        local_38 = *puVar3;
        local_34 = puVar3[1];
        puVar7 = local_68;
        CollectionEntry_getNonTradableInstancesVector(puVar7);
        puVar3 = (undefined4 *)FUN_012c1c70(puVar7);
        local_30 = *puVar3;
        local_2c = puVar3[1];
        while( true ) {
          iVar1 = Vector16Iterator_notEqual(&local_30,&local_38);
          if ((char)iVar1 == '\0') break;
          iVar4 = iVar4 + 1;
          local_1c = iVar4;
          iVar1 = Vector16Iterator_getIndexChecked(&local_30);
          FUN_012c3e50(iVar1);
          Vector16Iterator_postIncrement(local_70,0);
        }
      }
      CollectionDataChildIterator_increment((int *)&local_28);
      local_18 = local_18 + 1;
    }
    iVar4 = -1;
    iVar1 = TreeIterator_notEqual(&local_28,&local_40);
    if ((char)iVar1 != '\0') {
      piVar2 = (int *)TreeIterator_valueChecked();
      iVar4 = *piVar2;
    }
    ExceptionList = local_10;
    return iVar4;
  }
  ExceptionList = local_10;
  return -1;
}

