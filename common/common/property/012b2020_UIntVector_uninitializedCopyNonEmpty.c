// addr: 0x012b2020
// name: UIntVector_uninitializedCopyNonEmpty
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UIntVector_uninitializedCopyNonEmpty(void * first, int last, void *
   dest) */

void * __cdecl UIntVector_uninitializedCopyNonEmpty(void *first,int last,void *dest)

{
  rsize_t _DstSize;
  int iVar1;
  
                    /* Copies a non-empty range of 32-bit elements with memmove_s and returns the
                       destination end pointer. It computes count as (last-first)/4 and copies
                       count*4 bytes when count is positive. */
  iVar1 = last - (int)first >> 2;
  _DstSize = iVar1 * 4;
  if (0 < iVar1) {
    _memmove_s(dest,_DstSize,first,_DstSize);
  }
  return (void *)(_DstSize + (int)dest);
}

