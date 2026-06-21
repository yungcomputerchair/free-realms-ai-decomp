// addr: 0x012c1240
// name: SynchronizationService_handleComplete
// subsystem: common/common/synchronization
// source (binary assert): common/common/synchronization/SynchronizationService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationService_handleComplete(void * this, uint collectionId_) */

void __thiscall SynchronizationService_handleComplete(void *this,uint collectionId_)

{
  void *this_00;
  void *pvVar1;
  int iVar2;
  void *str;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Handles synchronization completion by clearing the in-progress flag,
                       restoring the active desired id, sending a completion/status command, and for
                       trade collections sending the property list. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166e366;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mCollection","..\\common\\common\\synchronization\\SynchronizationService.cpp",
                 0x19e,DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  }
  *(undefined1 *)((int)this + 0x40) = 0;
  CollectionData_setDesiredId(*(void **)((int)this + 8),*(uint *)((int)this + 0x44));
  CollectionDB_initSingleton();
  CollectionDB_reinsertSynchronizableCollections(this_00);
  pvVar1 = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x1d);
  DisplayActionBuilder_addIntArg(pvVar1,collectionId_);
  DisplayActionBuilder_addBoolArg(pvVar1,*(bool *)((int)this + 0x48));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar1);
  iVar2 = CollectionData_getCollectionType(*(void **)((int)this + 8));
  if (iVar2 == 3) {
    pvVar1 = Mem_Alloc(0x14);
    uStack_4 = 1;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(0x36);
    str = Collection_getPropertyList(*(void **)((int)this + 8));
    DisplayActionBuilder_addStringArg(pvVar1,str);
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(pvVar1);
  }
  *(undefined1 *)((int)this + 0x48) = 0;
  ExceptionList = local_c;
  return;
}

