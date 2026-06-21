// addr: 0x00572210
// name: PagedSparseRecordIterator2000_resetA
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PagedSparseRecordIterator2000_resetA(void * this) */

void __fastcall PagedSparseRecordIterator2000_resetA(void *this)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  
                    /* Initializes/resets a paged sparse-record iterator, setting the first record
                       id, computing its A absolute index, and allocating scratch storage for record
                       count. */
  StdVector24_truncateAndRelease(this,0);
  pvVar5 = (void *)((int)this + 8);
  PagedSparseRecordMap_initialize(pvVar5,*(int *)((int)this + 4),1);
  *(undefined4 *)((int)this + 0x40) = 0;
  iVar3 = SegmentedIterator2000_getAbsoluteIndex_A(pvVar5);
  *(int *)((int)this + 0x4c) = iVar3;
  iVar3 = *(int *)this;
  if (((iVar3 == 0) || (*(int *)((int)this + 4) == 0)) || (*(int *)(iVar3 + 0x3c) == 0)) {
    **(undefined4 **)((int)this + 0x3c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  }
  else {
    **(undefined4 **)((int)this + 0x3c) = *(undefined4 *)(iVar3 + 0x40);
    uVar1 = **(undefined4 **)((int)this + 0x3c);
    *(undefined4 *)((int)this + 0x44) = uVar1;
    pbVar4 = (byte *)CheckedVector_ushort_at_constB(uVar1);
    if ((*pbVar4 & 1) == 0) {
      *(undefined4 *)(*(int *)((int)this + 0x3c) + 4) = 0xffffffff;
    }
    else {
      iVar3 = SegmentedIterator2000_getAbsoluteIndex_A(pvVar5);
      *(int *)(*(int *)((int)this + 0x3c) + 4) = iVar3;
      LexerPagedRecordSet_contains(pvVar5,*(int *)(*(int *)((int)this + 0x3c) + 4));
    }
    if (*(void **)((int)this + 100) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 100));
    }
    lVar2 = (ulonglong)*(uint *)(*(int *)this + 0x48) * 4;
    pvVar5 = Mem_Alloc(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    *(void **)((int)this + 100) = pvVar5;
  }
  *(undefined4 *)((int)this + 0x48) = 1;
  return;
}

