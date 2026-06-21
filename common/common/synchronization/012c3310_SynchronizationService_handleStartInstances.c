// addr: 0x012c3310
// name: SynchronizationService_handleStartInstances
// subsystem: common/common/synchronization
// source (binary assert): common/common/synchronization/SynchronizationService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_handleStartInstances(void * this, uint
   collectionId_, int collectionType_, uint accountId_, uint syncId_) */

void __thiscall
SynchronizationService_handleStartInstances
          (void *this,uint collectionId_,int collectionType_,uint accountId_,uint syncId_)

{
  uint uVar1;
  void *pvVar2;
  char *text;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Begins an instance synchronization for a collection type, resets the desired
                       id, records account/sync fields, clears collection data, and sends an
                       online/offline/trade status message. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166e5fb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  SynchronizationService_selectOrCreateCollection(this,collectionId_,collectionType_);
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mCollection","..\\common\\common\\synchronization\\SynchronizationService.cpp",
                 0xd0,uVar1);
  }
  CardCollection_setCollectionType(*(void **)((int)this + 8),collectionType_);
  CollectionData_setDesiredId(*(void **)((int)this + 8),0);
  *(uint *)((int)this + 0x44) = syncId_;
  *(uint *)((int)this + 0x2c) = accountId_;
  SynchronizationService_processCollectionDataChildren(*(int *)((int)this + 8));
  if (collectionType_ == 1) {
    text = "online";
  }
  else if ((collectionType_ == 2) || (collectionType_ != 3)) {
    text = "offline";
  }
  else {
    text = "trade";
  }
  pvVar2 = Mem_Alloc(0x14);
  this_00 = (void *)0x0;
  uStack_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x1b);
  DisplayActionBuilder_addIntArg(this_00,collectionId_);
  DisplayActionBuilder_addCStringArg(this_00,text);
  DisplayActionBuilder_addIntArg(this_00,accountId_);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(this_00);
  SynchronizationService_sendUpdateCommand();
  ExceptionList = local_c;
  return;
}

