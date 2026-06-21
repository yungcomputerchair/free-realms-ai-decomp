// addr: 0x012dca40
// name: PropertyTree21_getOrCreateVectorForId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree21_getOrCreateVectorForId(void * this, void * value, int
   property_id) */

void __thiscall PropertyTree21_getOrCreateVectorForId(void *this,void *value,int property_id)

{
  int iVar1;
  int iVar2;
  void *element;
  void **ppvVar3;
  void *local_1c;
  void *local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = property_id;
                    /* Finds a property-id entry in a PropertyTree21; if absent, creates a new
                       vector entry for the id, otherwise validates the existing iterator, then
                       copies/assigns the supplied value. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01671328;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  PropertyIntTree_lowerBound2((void *)((int)this + 0x24),&local_1c,&property_id);
  iVar1 = *(int *)((int)this + 0x28);
  if ((void *)((int)this + 0x24) != local_1c) {
    FUN_00d83c2d();
  }
  if ((void *)iVar1 == local_18) {
    local_18 = (void *)0x0;
    local_14 = (void *)0x0;
    local_10 = 0;
    local_4 = 0;
    StdVector28_pushBack(&local_1c,value,element);
    ppvVar3 = &local_1c;
    value = (void *)iVar2;
    PropertyVectorTree_findOrInsert(&value);
    StdVector28_assign(ppvVar3);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
      StdStringRange_destroy(local_18,local_14);
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  else {
    if (local_1c == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (local_18 == (void *)*(int *)((int)local_1c + 4)) {
      FUN_00d83c2d();
    }
    StdVector28_pushBack((void *)((int)local_18 + 0x10),value,element);
  }
  ExceptionList = local_c;
  return;
}

