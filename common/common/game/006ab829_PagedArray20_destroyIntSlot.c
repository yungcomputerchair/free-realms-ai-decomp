// addr: 0x006ab829
// name: PagedArray20_destroyIntSlot
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PagedArray20_destroyIntSlot(void * this, int index) */

void __thiscall PagedArray20_destroyIntSlot(void *this,int index)

{
  uint unaff_retaddr;
  
                    /* Destroys or releases the 4-byte element at an indexed slot in the larger
                       0x2000-byte paged array variant. */
  SegmentedIterator2000_seek
            (this,(void *)(*(int *)(*(int *)((int)this + 0x10) + 0x2000) +
                           *(int *)((int)this + 0x14) + index),unaff_retaddr);
  return;
}

