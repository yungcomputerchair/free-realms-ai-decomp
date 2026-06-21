// addr: 0x01355bb0
// name: VectorDword_moveRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VectorDword_moveRange(void * unused, void * first, void * unused2, void
   * last, void * dest) */

void * VectorDword_moveRange(void *unused,void *first,void *unused2,void *last,void *dest)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Moves/copies a contiguous range of 4-byte elements with memmove_s and returns
                       the advanced destination pointer. Extra parameters are unused artifacts from
                       a template helper signature. */
  iVar1 = (int)last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(dest,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dest);
}

