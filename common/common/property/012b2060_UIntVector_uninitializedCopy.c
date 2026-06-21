// addr: 0x012b2060
// name: UIntVector_uninitializedCopy
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UIntVector_uninitializedCopy(void * first, int last, void * dest) */

void * UIntVector_uninitializedCopy(void *first,int last,void *dest)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a range of 32-bit elements with memmove_s when the count is nonzero
                       and returns dest+bytesCopied. This is the zero-safe variant used by vector
                       assignment. */
  iVar1 = last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(dest,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dest);
}

