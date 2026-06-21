// addr: 0x012c9a90
// name: PointerVector_sortRange
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_sortRange(void * vectorObj, void ** first, void *
   sameVectorObj, void ** last) */

void __cdecl PointerVector_sortRange(void *vectorObj,void **first,void *sameVectorObj,void **last)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Validates that the range belongs to the supplied vector and sorts the
                       non-empty pointer range. Evidence is the vector identity check and call to
                       the merge-sort wrapper on [first,last). */
  puStack_8 = &LAB_0166f2e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if ((vectorObj == (void *)0x0) || (vectorObj != sameVectorObj)) {
    FUN_00d83c2d();
  }
  if (first != last) {
    local_4 = local_4 & 0xffffff00;
    PointerVector_mergeSort(first,last);
  }
  ExceptionList = local_c;
  return;
}

