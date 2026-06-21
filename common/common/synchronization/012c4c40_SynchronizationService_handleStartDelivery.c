// addr: 0x012c4c40
// name: SynchronizationService_handleStartDelivery
// subsystem: common/common/synchronization
// source (binary assert): common/common/synchronization/SynchronizationService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_handleStartDelivery(void * this, uint
   collectionId_, uint accountId_, uint syncId_, bool isIncremental_, uint deliveryId_, void *
   propertyList, uint totalCount_, uint extraCount_, void * addList, void * removeList) */

void __thiscall
SynchronizationService_handleStartDelivery
          (void *this,uint collectionId_,uint accountId_,uint syncId_,bool isIncremental_,
          uint deliveryId_,void *propertyList,uint totalCount_,uint extraCount_,void *addList,
          void *removeList)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  undefined3 in_stack_00000011;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Starts delivery for a synchronization batch, records service state, sends the
                       start-delivery message, applies additions/removals to the collection,
                       normalizes the add list, and sends a follow-up update. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166e911;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x40) = 1;
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  if (iVar2 == 0) {
    FUN_012f5a60("myAccount","..\\common\\common\\synchronization\\SynchronizationService.cpp",0xf4)
    ;
  }
  uVar1 = FUN_013a3480();
  SynchronizationService_selectOrCreateCollection(this,uVar1,1);
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mCollection","..\\common\\common\\synchronization\\SynchronizationService.cpp",
                 0xff);
  }
  CollectionData_setDesiredId(*(void **)((int)this + 8),0);
  uVar1 = accountId_;
  *(uint *)((int)this + 0x44) = syncId_;
  *(bool *)((int)this + 0x48) = isIncremental_;
  *(uint *)((int)this + 0x2c) = accountId_;
  _isIncremental_ = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (_isIncremental_ == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x1e);
  DisplayActionBuilder_addIntArg(pvVar3,collectionId_);
  DisplayActionBuilder_addIntArg(pvVar3,uVar1);
  DisplayActionBuilder_addBoolArg(pvVar3,*(bool *)((int)this + 0x48));
  DisplayActionBuilder_addIntArg(pvVar3,deliveryId_);
  DisplayActionBuilder_addStringArg(pvVar3,propertyList);
  DisplayActionBuilder_addIntArg(pvVar3,totalCount_);
  DisplayActionBuilder_addIntArg(pvVar3,extraCount_);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar3);
  pvVar3 = addList;
  uVar1 = *(uint *)((int)addList + 8);
  _isIncremental_ = (void *)uVar1;
  if (uVar1 < *(uint *)((int)addList + 4)) {
    FUN_00d83c2d();
  }
  uVar6 = *(uint *)((int)pvVar3 + 4);
  if (*(uint *)((int)pvVar3 + 8) < uVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar3 == (void *)0x0) {
      FUN_00d83c2d();
    }
    pvVar4 = removeList;
    if (uVar6 == uVar1) break;
    if (pvVar3 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)pvVar3 + 8) <= uVar6) {
      FUN_00d83c2d();
    }
    pvVar3 = *(void **)(uVar6 + 4);
    pvVar4 = PropertyContainer_findChild(*(void **)((int)this + 8));
    if (pvVar4 == (void *)0x0) {
      syncId_ = (uint)Mem_Alloc(0x30);
      uStack_4 = 1;
      if ((void *)syncId_ == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)CollectionItem_ctor();
      }
      uStack_4 = 0xffffffff;
      CollectionItem_setItemId(pvVar4,(int)pvVar3);
      PropertyContainer_insertChildIfPresent(pvVar3,pvVar4);
    }
    pvVar3 = addList;
    if (*(uint *)((int)addList + 8) <= uVar6) {
      FUN_00d83c2d();
    }
    CollectionData_insertUniqueItemRecord(uVar6);
    if (*(uint *)((int)pvVar3 + 8) <= uVar6) {
      FUN_00d83c2d();
    }
    uVar6 = uVar6 + 0x10;
    pvVar3 = addList;
    uVar1 = (uint)_isIncremental_;
  }
  _isIncremental_ = *(void **)((int)removeList + 8);
  if (_isIncremental_ < *(void **)((int)removeList + 4)) {
    FUN_00d83c2d();
  }
  pvVar3 = *(void **)((int)pvVar4 + 4);
  if (*(void **)((int)pvVar4 + 8) < pvVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar3 == _isIncremental_) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(void **)((int)pvVar4 + 8) <= pvVar3) {
      FUN_00d83c2d();
    }
    pvVar5 = PropertyContainer_findChild(*(void **)((int)this + 8));
    if (pvVar5 != (void *)0x0) {
      if (*(void **)((int)pvVar4 + 8) <= pvVar3) {
        FUN_00d83c2d();
      }
      CollectionData_removeInstanceRecordIfPresent(pvVar3);
    }
    if (*(void **)((int)pvVar4 + 8) <= pvVar3) {
      FUN_00d83c2d();
    }
    pvVar3 = (void *)((int)pvVar3 + 0x10);
  }
  pvVar3 = addList;
  FUN_012c4a10(&collectionId_);
  CollectionElementVector_copyAssign(pvVar3);
  _isIncremental_ = Mem_Alloc(0x14);
  uStack_4 = 2;
  if (_isIncremental_ == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x1c);
  DisplayActionBuilder_addIntArg(pvVar3,collectionId_);
  DisplayActionBuilder_addIntArg(pvVar3,accountId_);
  DisplayActionBuilder_addBoolArg(pvVar3,*(bool *)((int)this + 0x48));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar3);
  ExceptionList = local_c;
  return;
}

