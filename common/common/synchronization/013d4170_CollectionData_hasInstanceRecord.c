// addr: 0x013d4170
// name: CollectionData_hasInstanceRecord
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionData_hasInstanceRecord(void * this, void * record) */

bool __thiscall CollectionData_hasInstanceRecord(void *this,void *record)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
                    /* Checks whether a collection item record has an instance id and whether that
                       id is present in this CollectionData's instance-id vector. Returns false for
                       records without an instance id. */
  bVar2 = CollectionItemRecord_hasInstanceId(this,(uint)record);
  if (!bVar2) {
    return false;
  }
  uVar1 = *(uint *)((int)this + 0x28);
  if (uVar1 < *(uint *)((int)this + 0x24)) {
    FUN_00d83c2d();
  }
  uVar3 = *(uint *)((int)this + 0x24);
  if (*(uint *)((int)this + 0x28) < uVar3) {
    FUN_00d83c2d();
  }
  uVar3 = InstanceIDVector_find(uVar3,uVar1,record);
  uVar1 = *(uint *)((int)this + 0x28);
  if (uVar1 < *(uint *)((int)this + 0x24)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xffffffe0) {
    FUN_00d83c2d();
  }
  return uVar3 != uVar1;
}

