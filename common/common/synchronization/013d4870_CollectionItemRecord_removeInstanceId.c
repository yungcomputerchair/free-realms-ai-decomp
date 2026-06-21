// addr: 0x013d4870
// name: CollectionItemRecord_removeInstanceId
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionItemRecord_removeInstanceId(void * this, uint instanceId_) */

void __thiscall CollectionItemRecord_removeInstanceId(void *this,uint instanceId_)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 local_8 [4];
  uint local_4;
  
                    /* Removes a matching instance id from both embedded vectors in a collection
                       item record, if present. */
  uVar1 = *(uint *)((int)this + 0x18);
  pvVar5 = (void *)((int)this + 0x10);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x14);
  if (*(uint *)((int)this + 0x18) < uVar2) {
    FUN_00d83c2d();
  }
  local_4 = uVar2;
  pvVar4 = (void *)CollectionItem_findByIdsInRange(uVar2,uVar1,instanceId_);
  pvVar3 = *(void **)((int)this + 0x18);
  if (pvVar3 < *(void **)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  if (pvVar5 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (pvVar4 != pvVar3) {
    CollectionElementVector_eraseAt(pvVar5,local_8,pvVar5,pvVar4);
  }
  uVar1 = *(uint *)((int)this + 0x28);
  pvVar5 = (void *)((int)this + 0x20);
  if (uVar1 < *(uint *)((int)this + 0x24)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x24);
  if (*(uint *)((int)this + 0x28) < uVar2) {
    FUN_00d83c2d();
  }
  local_4 = uVar2;
  pvVar4 = (void *)CollectionItem_findByIdsInRange(uVar2,uVar1,instanceId_);
  pvVar3 = *(void **)((int)this + 0x28);
  if (pvVar3 < *(void **)((int)this + 0x24)) {
    FUN_00d83c2d();
  }
  if (pvVar5 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (pvVar4 != pvVar3) {
    CollectionElementVector_eraseAt(pvVar5,local_8,pvVar5,pvVar4);
  }
  return;
}

