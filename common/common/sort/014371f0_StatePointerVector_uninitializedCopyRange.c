// addr: 0x014371f0
// name: StatePointerVector_uninitializedCopyRange
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ** StatePointerVector_uninitializedCopyRange(void * allocCtx, void **
   first, void * endCtx, void ** last, void ** dest) */

void ** StatePointerVector_uninitializedCopyRange
                  (void *allocCtx,void **first,void *endCtx,void **last,void **dest)

{
  int iVar1;
  
                    /* Copies a pointer range into destination storage with memmove_s and returns
                       the end pointer. Evidence is the 4-byte element copy and sole caller in a
                       state-vector copy constructor used by sorting filters. */
  iVar1 = (int)last - (int)first >> 2;
  if (iVar1 != 0) {
    _memmove_s(dest,iVar1 * 4,first,iVar1 * 4);
  }
  return dest + iVar1;
}

