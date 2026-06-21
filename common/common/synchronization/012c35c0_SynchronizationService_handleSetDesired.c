// addr: 0x012c35c0
// name: SynchronizationService_handleSetDesired
// subsystem: common/common/synchronization
// source (binary assert): common/common/synchronization/SynchronizationService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_handleSetDesired(void * this, uint desiredId_) */

void __thiscall SynchronizationService_handleSetDesired(void *this,uint desiredId_)

{
  int iVar1;
  uint accountId_;
  
                    /* Applies a SetDesired synchronization command by asserting account and
                       collection state, selecting the account collection, and storing the desired
                       id at collection offset 0x88. */
  DisplayActionManager_ensureSingleton();
  iVar1 = FUN_012d08e0();
  if (iVar1 == 0) {
    FUN_012f5a60("myAccount","..\\common\\common\\synchronization\\SynchronizationService.cpp",0x1da
                );
  }
  accountId_ = FUN_013a3480();
  SynchronizationService_selectOrCreateCollection(this,accountId_,1);
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mCollection","..\\common\\common\\synchronization\\SynchronizationService.cpp",
                 0x1dd);
  }
  CollectionData_setDesiredId(*(void **)((int)this + 8),desiredId_);
  return;
}

