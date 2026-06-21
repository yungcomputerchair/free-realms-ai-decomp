// addr: 0x01438560
// name: SortService_applySecondaryFilterGroups
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SortService_applySecondaryFilterGroups(void * filterGroup, void *
   resultVector, void * criteriaContext) */

void __thiscall
SortService_applySecondaryFilterGroups
          (void *this,void *filterGroup,void *resultVector,void *criteriaContext)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 *criteriaVector;
  undefined1 local_1c [4];
  void *local_18;
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Chooses among two criterion/filter vectors in a filter group, optionally
                       merges both groups, then applies SortService_filterSortablesByCriteria to
                       populate the result. Evidence is the offset-based tests for two vectors,
                       merge helper calls, SortService_getInstance, and
                       SortService_filterSortablesByCriteria calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697308;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  pvVar4 = (void *)((int)this + 4);
  if ((*(int *)((int)this + 8) == 0) ||
     (*(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2 == 0)) {
    pvVar4 = (void *)((int)this + 0x14);
    SortService_getInstance();
    SortService_filterSortablesByCriteria(filterGroup,resultVector,pvVar4);
  }
  else if ((*(int *)((int)this + 0x18) == 0) ||
          (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18) >> 2 == 0)) {
    SortService_getInstance();
    SortService_filterSortablesByCriteria(filterGroup,resultVector,pvVar4);
  }
  else {
    FUN_014382c0(pvVar4);
    local_4 = 0;
    uVar1 = *(uint *)((int)this + 0x1c);
    if (uVar1 < *(uint *)((int)this + 0x18)) {
      FUN_00d83c2d(uVar3);
    }
    uVar2 = *(uint *)((int)this + 0x18);
    if (*(uint *)((int)this + 0x1c) < uVar2) {
      FUN_00d83c2d(uVar3);
    }
    pvVar4 = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d(uVar3);
    }
    FUN_01437750(local_1c,pvVar4,(int)this + 0x14,uVar2,(int)this + 0x14,uVar1,resultVector);
    criteriaVector = local_1c;
    SortService_getInstance();
    SortService_filterSortablesByCriteria(filterGroup,resultVector,criteriaVector);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}

