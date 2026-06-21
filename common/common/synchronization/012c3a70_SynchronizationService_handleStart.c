// addr: 0x012c3a70
// name: SynchronizationService_handleStart
// subsystem: common/common/synchronization
// source (binary assert): common/common/synchronization/SynchronizationService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_handleStart(void * this, uint collectionId_, int
   expectedId_, int currentCount_, int desiredCount_) */

void __thiscall
SynchronizationService_handleStart
          (void *this,uint collectionId_,int expectedId_,int currentCount_,int desiredCount_)

{
  uint uVar1;
  int iVar2;
  void *handle;
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Handles a Start synchronization command: validates the collection
                       child-property count and requested id, records the active sync id, and queues
                       a Complete command; otherwise it falls back to the generic failure/update
                       path. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166e6d8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  SynchronizationService_selectOrCreateCollection(this,collectionId_,1);
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mCollection","..\\common\\common\\synchronization\\SynchronizationService.cpp",
                 0x60,uVar1);
  }
  iVar2 = CollectionData_getTotalChildPropertyCount(*(void **)((int)this + 8));
  if (iVar2 == currentCount_ + desiredCount_) {
    uVar1 = CollectionData_getDesiredId(*(void **)((int)this + 8));
    if (uVar1 == expectedId_) {
      *(int *)((int)this + 0x44) = expectedId_;
      SynchronizationCommand_Complete_ctor();
      uStack_4 = 0;
      DisplayActionManager_ensureSingleton();
      CommandHandle_releaseIfPresent(handle);
      uStack_4 = 0xffffffff;
      SynchronizationCommand_Complete_dtor(auStack_14);
      ExceptionList = local_c;
      return;
    }
  }
  SynchronizationService_sendUpdateCommand();
  ExceptionList = local_c;
  return;
}

