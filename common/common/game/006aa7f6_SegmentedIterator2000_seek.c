// addr: 0x006aa7f6
// name: SegmentedIterator2000_seek
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SegmentedIterator2000_seek(void * it, uint index) */

uint __thiscall SegmentedIterator2000_seek(void *this,void *it,uint index)

{
  int iVar1;
  int iVar2;
  
                    /* Seeks a segmented iterator to an absolute index using segment metadata at
                       +0x2000/+0x2004/+0x2008 and records the in-segment offset. */
  iVar2 = *(int *)(*(int *)((int)this + 0x10) + 0x2000);
  if ((((int)it < iVar2) ||
      (iVar1 = *(int *)(*(int *)((int)this + 0x10) + 0x2004), (int)it < iVar2 + iVar1)) ||
     (iVar1 == 0x200)) {
    iVar2 = *(int *)((int)this + 0xc);
    if (((int)it < *(int *)(iVar2 + 0x2000)) || (*(int *)((int)this + 0x20) < (int)it)) {
      return (uint)it & 0xffffff00;
    }
    *(int *)((int)this + 0x10) = iVar2;
    iVar2 = *(int *)(iVar2 + 0x2004) + *(int *)(iVar2 + 0x2000);
    while ((iVar2 <= (int)it && (iVar2 = *(int *)(*(int *)((int)this + 0x10) + 0x2008), iVar2 != 0))
          ) {
      *(int *)((int)this + 0x10) = iVar2;
      iVar2 = *(int *)(iVar2 + 0x2004) + *(int *)(iVar2 + 0x2000);
    }
  }
  iVar2 = (int)it - *(int *)(*(int *)((int)this + 0x10) + 0x2000);
  *(int *)((int)this + 0x14) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

