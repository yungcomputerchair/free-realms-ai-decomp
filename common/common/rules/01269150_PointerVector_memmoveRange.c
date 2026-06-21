// addr: 0x01269150
// name: PointerVector_memmoveRange
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PointerVector_memmoveRange(void * unused, void * first, void *
   unusedEnd, void * last, void * dest) */

void * PointerVector_memmoveRange(void *unused,void *first,void *unusedEnd,void *last,void *dest)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Moves a contiguous range of 4-byte entries to destination with memmove_s and
                       returns the destination end pointer. */
  iVar1 = (int)last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(dest,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dest);
}

