// addr: 0x006af5fd
// name: PagedSparseRecordIterator2000_seekRecordA
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PagedSparseRecordIterator2000_seekRecordA(void * this, uint index) */

uint __thiscall PagedSparseRecordIterator2000_seekRecordA(void *this,uint index)

{
  int *in_EAX;
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  uint3 extraout_var;
  
                    /* Seeks to a ushort-indexed sparse record, updates current record id, computes
                       the A absolute index, and verifies containment. */
  if (((*(int *)((int)this + 0x40) == 0) && (in_EAX = *(int **)((int)this + 0x3c), *in_EAX != -1))
     && (*(int *)((int)this + 0x44) != -1)) {
    iVar3 = *(int *)(*(int *)this + 4);
    if ((iVar3 != 0) && (in_EAX = (int *)(*(int *)(*(int *)this + 8) - iVar3 >> 1), index < in_EAX))
    {
      psVar1 = (short *)CheckedVector_ushort_at(index);
      in_EAX = (int *)(int)*psVar1;
      if (in_EAX != (int *)0xffffffff) {
        *(int **)((int)this + 0x44) = in_EAX;
        **(undefined4 **)((int)this + 0x3c) = in_EAX;
        pbVar2 = (byte *)CheckedVector_ushort_at_constB(in_EAX);
        if ((*pbVar2 & 1) == 0) {
          iVar3 = *(int *)((int)this + 0x3c);
          *(undefined4 *)(iVar3 + 4) = 0xffffffff;
        }
        else {
          iVar3 = SegmentedIterator2000_getAbsoluteIndex_A((void *)((int)this + 8));
          *(int *)(*(int *)((int)this + 0x3c) + 4) = iVar3;
          LexerPagedRecordSet_contains
                    ((void *)((int)this + 8),*(int *)(*(int *)((int)this + 0x3c) + 4));
          iVar3 = (uint)extraout_var << 8;
        }
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

