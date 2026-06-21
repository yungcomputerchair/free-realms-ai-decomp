// addr: 0x012c6db0
// name: FilterCriteriaVector_uninitializedCopyRange
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ** FilterCriteriaVector_uninitializedCopyRange(void * allocCtx, void **
   first, void * endCtx, void ** last, void ** dest) */

void ** FilterCriteriaVector_uninitializedCopyRange
                  (void *allocCtx,void **first,void *endCtx,void **last,void **dest)

{
  int iVar1;
  
                    /* Copies a 4-byte pointer range into destination storage and returns the
                       advanced destination pointer. Evidence is the memmove_s over (last-first)
                       pointer slots and use by the FilterCriteria/pointer-vector copy constructor.
                        */
  iVar1 = (int)last - (int)first >> 2;
  if (iVar1 != 0) {
    _memmove_s(dest,iVar1 * 4,first,iVar1 * 4);
  }
  return dest + iVar1;
}

