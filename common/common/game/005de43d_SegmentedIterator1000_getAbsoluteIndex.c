// addr: 0x005de43d
// name: SegmentedIterator1000_getAbsoluteIndex
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SegmentedIterator1000_getAbsoluteIndex(void * it) */

int __fastcall SegmentedIterator1000_getAbsoluteIndex(void *it)

{
                    /* Returns the iterator's absolute index as current segment base at +0x1000 plus
                       the iterator offset at +0x14. */
  return *(int *)(*(int *)((int)it + 0x10) + 0x1000) + *(int *)((int)it + 0x14);
}

