// addr: 0x012dc150
// name: PropertyIndex_addSecondaryId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyIndex_addSecondaryId(void * this, uint id, uint key) */

void __thiscall PropertyIndex_addSecondaryId(void *this,uint id,uint key)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *value;
  undefined4 *extraout_EAX;
  undefined1 *puVar5;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = key;
                    /* Adds an id to the uint-vector stored under a key in the second integer-keyed
                       property tree at this+0xc, creating the vector entry if needed. Evidence is
                       PropertyIntTree_lowerBound and UIntVector_pushBack. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01671208;
  local_c = ExceptionList;
  value = (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  ExceptionList = &local_c;
  PropertyIntTree_lowerBound((void *)((int)this + 0xc),local_1c,(int *)&key);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = *(int *)((int)this + 0x10);
  iVar3 = extraout_EAX[1];
  if ((void *)((int)this + 0xc) != pvVar1) {
    FUN_00d83c2d();
  }
  if (iVar2 == iVar3) {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    UIntVector_pushBack(local_1c,&id,value);
    puVar5 = local_1c;
    id = uVar4;
    PropertyIntVectorMap_findOrCreateSlot(&id);
    UIntVector_assign(puVar5);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  else {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    UIntVector_pushBack((void *)(iVar3 + 0x10),&id,value);
  }
  ExceptionList = local_c;
  return;
}

