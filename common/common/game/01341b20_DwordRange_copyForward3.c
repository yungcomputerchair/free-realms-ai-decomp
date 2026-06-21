// addr: 0x01341b20
// name: DwordRange_copyForward3
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DwordRange_copyForward3(void * first, void * last, void * dst) */

void * DwordRange_copyForward3(void *first,void *last,void *dst)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a non-zero range of 4-byte elements with memmove_s and returns the
                       destination end pointer. This is a generated range-copy instantiation. */
  iVar1 = (int)last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(dst,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dst);
}

