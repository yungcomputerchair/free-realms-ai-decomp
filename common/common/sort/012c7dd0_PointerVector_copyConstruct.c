// addr: 0x012c7dd0
// name: PointerVector_copyConstruct
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PointerVector_copyConstruct(void * thisObj, void * sourceVector) */

void * __thiscall PointerVector_copyConstruct(void *this,void *thisObj,void *sourceVector)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  uint uVar6;
  uint uStack_38;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Initializes this pointer vector and copies all elements from the source
                       vector, allocating exact capacity when the source is non-empty. Evidence is
                       zeroing begin/end/capacity, allocation by source size, and uninitialized
                       range copy. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0166edd0;
  local_10 = ExceptionList;
  uStack_38 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  if (*(int *)((int)thisObj + 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)((int)thisObj + 8) - *(int *)((int)thisObj + 4) >> 2;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar6 != 0) {
    local_18 = this;
    puVar1 = &uStack_38;
    if (0x3fffffff < uVar6) {
      FUN_012b40a0();
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    iVar2 = FUN_012b0b10(uVar6);
    *(int *)((int)this + 4) = iVar2;
    *(int *)((int)this + 8) = iVar2;
    *(uint *)((int)this + 0xc) = iVar2 + uVar6 * 4;
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_012c5f50(local_20);
    puVar4 = (undefined4 *)FUN_012c5ef0(local_28);
    ppvVar5 = FilterCriteriaVector_uninitializedCopyRange
                        ((void *)*puVar4,(void **)puVar4[1],(void *)*puVar3,(void **)puVar3[1],
                         *(void ***)((int)this + 4));
    *(void ***)((int)this + 8) = ppvVar5;
  }
  ExceptionList = local_10;
  return this;
}

