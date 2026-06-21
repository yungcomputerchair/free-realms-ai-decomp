// addr: 0x01332200
// name: DwordRange_copyForward
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DwordRange_copyForward(void * first, void * last, void * dst) */

void * DwordRange_copyForward(void *first,void *last,void *dst)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a range of 4-byte elements with memmove_s when the count is non-zero
                       and returns the destination end pointer. This is a generic vector/STL helper.
                        */
  iVar1 = (int)last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(dst,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dst);
}

