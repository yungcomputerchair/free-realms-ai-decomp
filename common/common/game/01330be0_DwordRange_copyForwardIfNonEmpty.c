// addr: 0x01330be0
// name: DwordRange_copyForwardIfNonEmpty
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DwordRange_copyForwardIfNonEmpty(void * first, void * last, void * dst)
    */

void * __cdecl DwordRange_copyForwardIfNonEmpty(void *first,void *last,void *dst)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a non-empty range of 4-byte elements with memmove_s and returns the
                       end of the destination range. It skips the call when the computed element
                       count is not positive. */
  iVar1 = (int)last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (0 < iVar1) {
    _memmove_s(dst,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dst);
}

