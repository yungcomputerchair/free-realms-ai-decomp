// addr: 0x012c9b40
// name: SortService_sortSortableVectorByCriteria
// subsystem: common/common/sort
// source (binary assert): common/common/sort/SortService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SortService_sortSortableVectorByCriteria(void * thisObj, void *
   sortableVector, void * criteriaVector) */

bool SortService_sortSortableVectorByCriteria
               (void *thisObj,void *sortableVector,void *criteriaVector)

{
  int *piVar1;
  int *piVar2;
  void **last;
  void **first;
  bool bVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies/uses a sortable pointer vector and walks the criteria vector from back
                       to front, sorting the sortable range after validating each non-null
                       criterion. Evidence is SortService.cpp, the 'criterion' assert, and calls to
                       the vector assignment and merge-sort range helpers. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166f308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PointerVector_assign(sortableVector,thisObj,(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4));
  piVar2 = *(int **)((int)criteriaVector + 4);
  if (*(int **)((int)criteriaVector + 8) < piVar2) {
    FUN_00d83c2d();
  }
  piVar4 = *(int **)((int)criteriaVector + 8);
  if (piVar4 < *(int **)((int)criteriaVector + 4)) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (criteriaVector == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar2) break;
    if (criteriaVector == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar4 <= *(int **)((int)criteriaVector + 4)) {
      FUN_00d83c2d();
    }
    piVar1 = piVar4 + -1;
    if (*(int **)((int)criteriaVector + 8) <= piVar1) {
      FUN_00d83c2d();
    }
    if (*piVar1 == 0) {
      FUN_012f5a60();
    }
    uStack_4 = 0;
    last = *(void ***)((int)sortableVector + 8);
    if (last < *(void ***)((int)sortableVector + 4)) {
      FUN_00d83c2d();
    }
    first = *(void ***)((int)sortableVector + 4);
    if (*(void ***)((int)sortableVector + 8) < first) {
      FUN_00d83c2d();
    }
    uStack_4 = 0xffffffff;
    PointerVector_sortRange(sortableVector,first,sortableVector,last);
    bVar3 = piVar4 <= *(int **)((int)criteriaVector + 4);
    piVar4 = piVar1;
    if (bVar3) {
      FUN_00d83c2d();
    }
  }
  ExceptionList = local_c;
  return true;
}

