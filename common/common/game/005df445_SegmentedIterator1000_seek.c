// addr: 0x005df445
// name: SegmentedIterator1000_seek
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SegmentedIterator1000_seek(void * it, uint index) */

uint __thiscall SegmentedIterator1000_seek(void *this,void *it,uint index)

{
  int iVar1;
  int iVar2;
  
                    /* Moves a segmented iterator to an absolute index by selecting the segment
                       whose base/count covers it and storing the in-segment offset. */
  iVar2 = *(int *)(*(int *)((int)this + 0x10) + 0x1000);
  if ((((int)it < iVar2) ||
      (iVar1 = *(int *)(*(int *)((int)this + 0x10) + 0x1004), (int)it < iVar2 + iVar1)) ||
     (iVar1 == 0x200)) {
    iVar2 = *(int *)((int)this + 0xc);
    if (((int)it < *(int *)(iVar2 + 0x1000)) || (*(int *)((int)this + 0x20) < (int)it)) {
      return (uint)it & 0xffffff00;
    }
    *(int *)((int)this + 0x10) = iVar2;
    iVar2 = *(int *)(iVar2 + 0x1004) + *(int *)(iVar2 + 0x1000);
    while ((iVar2 <= (int)it && (iVar2 = *(int *)(*(int *)((int)this + 0x10) + 0x1008), iVar2 != 0))
          ) {
      *(int *)((int)this + 0x10) = iVar2;
      iVar2 = *(int *)(iVar2 + 0x1004) + *(int *)(iVar2 + 0x1000);
    }
  }
  iVar2 = (int)it - *(int *)(*(int *)((int)this + 0x10) + 0x1000);
  *(int *)((int)this + 0x14) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

