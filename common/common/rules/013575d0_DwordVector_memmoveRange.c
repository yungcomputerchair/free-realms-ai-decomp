// addr: 0x013575d0
// name: DwordVector_memmoveRange
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DwordVector_memmoveRange(void * unused, void * first, void * unusedEnd,
   void * last, void * dest) */

void * DwordVector_memmoveRange(void *unused,void *first,void *unusedEnd,void *last,void *dest)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Moves a contiguous range of dword-sized entries to destination with memmove_s
                       and returns the advanced destination pointer. */
  iVar1 = (int)last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(dest,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dest);
}

