// addr: 0x013d40b0
// name: CollectionItemRecord_hasInstanceId
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionItemRecord_hasInstanceId(void * this, uint instanceId_) */

bool __thiscall CollectionItemRecord_hasInstanceId(void *this,uint instanceId_)

{
  uint uVar1;
  uint uVar2;
  
                    /* Checks whether a collection item record's embedded instance-id vector
                       contains the requested id. */
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x14);
  if (*(uint *)((int)this + 0x18) < uVar2) {
    FUN_00d83c2d();
  }
  uVar2 = InstanceIDVector_find(uVar2,uVar1,instanceId_);
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xfffffff0) {
    FUN_00d83c2d();
  }
  return uVar2 != uVar1;
}

