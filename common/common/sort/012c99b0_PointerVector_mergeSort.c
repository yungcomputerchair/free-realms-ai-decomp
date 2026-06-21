// addr: 0x012c99b0
// name: PointerVector_mergeSort
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_mergeSort(void ** first, void ** last) */

void __cdecl PointerVector_mergeSort(void **first,void **last)

{
  int iVar1;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void **local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Sets up a temporary buffer and invokes the recursive sort helper for a
                       pointer range. Evidence is the element count from (last-first)/4, temporary
                       vector locals, and call to the recursive merge-sort routine. */
  puStack_8 = &LAB_0166f2a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (int)last - (int)first >> 2;
  local_14 = (iVar1 + 1) / 2;
  local_10 = &local_20;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_4._1_3_ = 0;
  local_4._0_1_ = 1;
  FUN_012c97f0(first,last,iVar1,&local_24);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  ExceptionList = local_c;
  return;
}

