// addr: 0x01341740
// name: DwordRange_copyForwardIfNonEmpty2
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DwordRange_copyForwardIfNonEmpty2(void * first, void * last, void *
   dst) */

void * __cdecl DwordRange_copyForwardIfNonEmpty2(void *first,void *last,void *dst)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a positive-length range of 4-byte elements with memmove_s and returns
                       the destination end pointer. This is a duplicate/instantiation of a generic
                       dword range-copy helper. */
  iVar1 = (int)last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (0 < iVar1) {
    _memmove_s(dst,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dst);
}

