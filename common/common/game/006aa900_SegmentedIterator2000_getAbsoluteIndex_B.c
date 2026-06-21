// addr: 0x006aa900
// name: SegmentedIterator2000_getAbsoluteIndex_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SegmentedIterator2000_getAbsoluteIndex_B(void * it) */

int __fastcall SegmentedIterator2000_getAbsoluteIndex_B(void *it)

{
                    /* Returns current segment base at +0x2000 plus iterator offset +0x14 for
                       another instantiation of the segmented iterator. */
  return *(int *)(*(int *)((int)it + 0x10) + 0x2000) + *(int *)((int)it + 0x14);
}

