// addr: 0x012f6ad0
// name: STLVector_dword_moveRange
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * STLVector_dword_moveRange(void * unused, void * beginPtr, void *
   unusedEnd, void * endPtr, void * destPtr) */

void * STLVector_dword_moveRange
                 (void *unused,void *beginPtr,void *unusedEnd,void *endPtr,void *destPtr)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Moves a contiguous range of 32-bit elements to destPtr with memmove_s and
                       returns the end of the copied destination range. */
  iVar1 = (int)endPtr - (int)beginPtr >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(destPtr,_DstSize,beginPtr,_DstSize);
  }
  return (void *)(_DstSize + (int)destPtr);
}

