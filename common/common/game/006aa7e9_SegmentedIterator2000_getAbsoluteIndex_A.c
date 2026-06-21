// addr: 0x006aa7e9
// name: SegmentedIterator2000_getAbsoluteIndex_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SegmentedIterator2000_getAbsoluteIndex_A(void * it) */

int __fastcall SegmentedIterator2000_getAbsoluteIndex_A(void *it)

{
                    /* Returns the iterator absolute index from current segment base at +0x2000 plus
                       the iterator's offset at +0x14. */
  return *(int *)(*(int *)((int)it + 0x10) + 0x2000) + *(int *)((int)it + 0x14);
}

