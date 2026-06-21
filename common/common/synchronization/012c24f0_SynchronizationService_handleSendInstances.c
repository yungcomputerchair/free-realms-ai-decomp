// addr: 0x012c24f0
// name: SynchronizationService_handleSendInstances
// subsystem: common/common/synchronization
// source (binary assert): common/common/synchronization/SynchronizationService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_handleSendInstances(void * this, uint
   collectionId_, uint accountId_, int countDelta_, void * addList, void * removeList) */

void __thiscall
SynchronizationService_handleSendInstances
          (void *this,uint collectionId_,uint accountId_,int countDelta_,void *addList,
          void *removeList)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *handle;
  uint uVar5;
  void *apvStack_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Applies a SendInstances command by inserting missing child items, adding
                       requested instance records, removing requested records, updating the pending
                       count, and queuing an update command. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0166e47e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mCollection","..\\common\\common\\synchronization\\SynchronizationService.cpp",
                 0x149,DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  }
  uVar1 = *(uint *)((int)addList + 8);
  if (uVar1 < *(uint *)((int)addList + 4)) {
    FUN_00d83c2d();
  }
  uVar5 = *(uint *)((int)addList + 4);
  if (*(uint *)((int)addList + 8) < uVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (addList == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (uVar5 == uVar1) break;
    if (addList == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)addList + 8) <= uVar5) {
      FUN_00d83c2d();
    }
    pvVar4 = *(void **)(uVar5 + 4);
    pvVar2 = PropertyContainer_findChild(*(void **)((int)this + 8));
    if (pvVar2 == (void *)0x0) {
      apvStack_14[0] = Mem_Alloc(0x30);
      pvVar3 = (void *)0x0;
      if (apvStack_14[0] != (void *)0x0) {
        pvStack_4 = pvVar2;
        pvVar3 = (void *)CollectionItem_ctor();
      }
      pvStack_4 = (void *)0xffffffff;
      CollectionItem_setItemId(pvVar3,(int)pvVar4);
      PropertyContainer_insertChildIfPresent(pvVar4,pvVar3);
    }
    if (*(uint *)((int)addList + 8) <= uVar5) {
      FUN_00d83c2d();
    }
    CollectionData_insertUniqueItemRecord(uVar5);
    if (*(uint *)((int)addList + 8) <= uVar5) {
      FUN_00d83c2d();
    }
    uVar5 = uVar5 + 0x10;
  }
  pvVar4 = *(void **)((int)removeList + 8);
  if (pvVar4 < *(void **)((int)removeList + 4)) {
    FUN_00d83c2d();
  }
  pvVar2 = *(void **)((int)removeList + 4);
  if (*(void **)((int)removeList + 8) < pvVar2) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (removeList == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == pvVar4) break;
    if (removeList == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(void **)((int)removeList + 8) <= pvVar2) {
      FUN_00d83c2d();
    }
    pvVar3 = PropertyContainer_findChild(*(void **)((int)this + 8));
    if (pvVar3 != (void *)0x0) {
      if (*(void **)((int)removeList + 8) <= pvVar2) {
        FUN_00d83c2d();
      }
      CollectionData_removeInstanceRecordIfPresent(pvVar2);
    }
    if (*(void **)((int)removeList + 8) <= pvVar2) {
      FUN_00d83c2d();
    }
    pvVar2 = (void *)((int)pvVar2 + 0x10);
  }
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + countDelta_;
  pvVar4 = Mem_Alloc(0x14);
  pvStack_4 = (void *)0x1;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)FUN_012f9eb0();
  }
  pvStack_4 = (void *)0xffffffff;
  FUN_012f8c70(0x1c);
  DisplayActionBuilder_addIntArg(pvVar4,collectionId_);
  DisplayActionBuilder_addIntArg(pvVar4,countDelta_);
  DisplayActionBuilder_addBoolArg(pvVar4,*(bool *)((int)this + 0x48));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar4);
  SynchronizationCommand_Update_ctor();
  pvStack_4 = (void *)0x2;
  DisplayActionManager_ensureSingleton();
  CommandHandle_releaseIfPresent(handle);
  pvStack_4 = (void *)0xffffffff;
  SynchronizationCommand_Update_dtor(apvStack_14);
  ExceptionList = local_c;
  return;
}

