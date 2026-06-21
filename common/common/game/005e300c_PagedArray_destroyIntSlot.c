// addr: 0x005e300c
// name: PagedArray_destroyIntSlot
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PagedArray_destroyIntSlot(void * this, int index) */

void __thiscall PagedArray_destroyIntSlot(void *this,int index)

{
  uint unaff_retaddr;
  
                    /* Destroys or releases the 4-byte element at a paged-array slot computed from
                       the active page and element index. */
  SegmentedIterator1000_seek
            (this,(void *)(*(int *)(*(int *)((int)this + 0x10) + 0x1000) +
                           *(int *)((int)this + 0x14) + index),unaff_retaddr);
  return;
}

