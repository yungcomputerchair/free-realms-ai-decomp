// addr: 0x005232ae
// name: PropertyGraph_copyIndexedEntry
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyGraph_copyIndexedEntry(void * self, int * dstIndex, int *
   srcIndex) */

int __thiscall PropertyGraph_copyIndexedEntry(void *this,void *self,int *dstIndex,int *srcIndex)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_10;
  void *local_c;
  void *local_8;
  
                    /* Validates two indexed handle parameters, then copies a 16-byte entry from one
                       index to another in an internal table. Negative source indexes are resolved
                       through an indirection entry and update a back-reference list. */
  local_8 = this;
  pvVar2 = (void *)(**(code **)(*(int *)((int)this + 0x1c) + 0x34))();
  if (((((char)pvVar2 == '\0') || (*(char *)((int)this + 0x38) == '\0')) ||
      (pvVar2 = self, *(undefined ***)((int)self + 4) != &PTR_PTR_01afbd1c)) ||
     ((undefined **)dstIndex[1] != &PTR_PTR_01afbd1c)) {
LAB_0052340e:
    return (uint)pvVar2 & 0xffffff00;
  }
  pvVar1 = *(void **)self;
  pvVar2 = (void *)FUN_004ce39b();
  if (pvVar2 <= pvVar1) goto LAB_0052340e;
  uVar7 = *dstIndex;
  if ((int)uVar7 < 0) {
    pvVar2 = (void *)FUN_004ce364();
    if (pvVar2 <= (void *)(uVar7 & 0x7fffffff)) goto LAB_0052340e;
    puVar3 = (undefined1 *)FUN_004ce37a((void *)(uVar7 & 0x7fffffff));
    local_10 = *(int *)(puVar3 + 0x10);
    if (local_10 == -1) {
      *(void **)(puVar3 + 0x10) = pvVar1;
      puVar4 = (undefined1 *)FUN_004ce3ae(pvVar1);
      *puVar4 = *puVar3;
      iVar5 = FUN_004ce3ae(pvVar1);
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(puVar3 + 4);
      iVar5 = FUN_004ce3ae(pvVar1);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(puVar3 + 8);
      iVar5 = FUN_004ce3ae(pvVar1);
      *(undefined4 *)(iVar5 + 0xc) = 0;
      goto LAB_00523377;
    }
    local_c = pvVar1;
    StdAllocator_destroyAndReturn((void *)((int)local_8 + 0x88),&local_10);
    uVar7 = *(uint *)(puVar3 + 0x10);
  }
  puVar3 = (undefined1 *)FUN_004ce3ae(uVar7);
  puVar4 = (undefined1 *)FUN_004ce3ae(pvVar1);
  *puVar4 = *puVar3;
  iVar5 = FUN_004ce3ae(uVar7);
  iVar6 = FUN_004ce3ae(pvVar1);
  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar5 + 4);
  iVar5 = FUN_004ce3ae(uVar7);
  iVar6 = FUN_004ce3ae(pvVar1);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 8);
  iVar6 = FUN_004ce3ae(uVar7);
  iVar5 = FUN_004ce3ae(pvVar1);
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
LAB_00523377:
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}

