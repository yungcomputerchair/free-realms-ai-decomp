// addr: 0x012c3430
// name: SynchronizationService_handleRemoveInstances
// subsystem: common/common/synchronization
// source (binary assert): common/common/synchronization/SynchronizationService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_handleRemoveInstances(void * this, void *
   instanceVector) */

void __thiscall SynchronizationService_handleRemoveInstances(void *this,void *instanceVector)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  void *this_00;
  uint instanceId_;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Processes a vector of instances to remove: for each existing child it checks
                       whether the instance id is present, removes it from collection data, and if
                       anything changed sends an update notification. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166e62b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  iVar4 = FUN_012d08e0(uVar3);
  if (iVar4 == 0) {
    FUN_012f5a60("myAccount","..\\common\\common\\synchronization\\SynchronizationService.cpp",0x173
                );
  }
  uVar3 = FUN_013a3480();
  SynchronizationService_selectOrCreateCollection(this,uVar3,1);
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mCollection","..\\common\\common\\synchronization\\SynchronizationService.cpp",
                 0x176);
  }
  uVar3 = *(uint *)((int)instanceVector + 8);
  bVar1 = false;
  if (uVar3 < *(uint *)((int)instanceVector + 4)) {
    FUN_00d83c2d();
  }
  instanceId_ = *(uint *)((int)instanceVector + 4);
  if (*(uint *)((int)instanceVector + 8) < instanceId_) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (instanceVector == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (instanceId_ == uVar3) break;
    if (instanceVector == (void *)0x0) {
      FUN_00d83c2d();
    }
    if ((*(uint *)((int)instanceVector + 8) <= instanceId_) &&
       (FUN_00d83c2d(), *(uint *)((int)instanceVector + 8) <= instanceId_)) {
      FUN_00d83c2d();
    }
    pvVar5 = PropertyContainer_findChild(*(void **)((int)this + 8));
    if (pvVar5 != (void *)0x0) {
      bVar2 = CollectionItemRecord_hasInstanceId(pvVar5,instanceId_);
      if (bVar2) {
        bVar1 = true;
      }
      CollectionItemRecord_removeInstanceId(pvVar5,instanceId_);
    }
    if (*(uint *)((int)instanceVector + 8) <= instanceId_) {
      FUN_00d83c2d();
    }
    instanceId_ = instanceId_ + 0x10;
  }
  CollectionDB_initSingleton();
  CollectionDB_reinsertSynchronizableCollections(this_00);
  if (bVar1) {
    pvVar5 = Mem_Alloc(0x14);
    uVar6 = 0;
    uStack_4 = 0;
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(0x1f);
    PacketWriter_writeInstanceVector(instanceVector);
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(uVar6);
  }
  ExceptionList = local_c;
  return;
}

