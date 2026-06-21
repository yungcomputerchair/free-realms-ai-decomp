// addr: 0x012c6640
// name: PointerVector_uninitializedCopyRange
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ** PointerVector_uninitializedCopyRange(void ** first, void ** last, void
   ** dest) */

void ** PointerVector_uninitializedCopyRange(void **first,void **last,void **dest)

{
  int iVar1;
  
                    /* Copies a pointer range into destination storage and returns the end pointer;
                       this variant is used after allocation/growth. Evidence is memmove_s over
                       4-byte elements and calls from PointerVector assignment. */
  iVar1 = (int)last - (int)first >> 2;
  if (iVar1 != 0) {
    _memmove_s(dest,iVar1 * 4,first,iVar1 * 4);
  }
  return dest + iVar1;
}

