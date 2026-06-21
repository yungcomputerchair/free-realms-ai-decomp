// addr: 0x01438ab0
// name: SortService_executeSortPipeline
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SortService_executeSortPipeline(void * sortRequest, void * resultVector)
    */

void __thiscall SortService_executeSortPipeline(void *this,void *sortRequest,void *resultVector)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined1 local_4c [4];
  void *local_48;
  void *local_44;
  undefined1 local_3c [4];
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Runs the full sort pipeline: initializes an output vector, applies default
                       criteria when enabled, applies grouped filters, applies sort criteria, and
                       appends/merges the accumulated results into the caller's result vector.
                       Evidence is calls to SortService_getInstance, the SortService filter/sort
                       helpers, and final vector merge into resultVector. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697380;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa4);
  ExceptionList = &local_c;
  PointerVector_copyConstruct(local_4c,sortRequest,pvVar1);
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (*(char *)((int)this + 0x34) == '\0') {
    pvVar4 = (void *)((int)this + 0x38);
    puVar3 = local_1c;
    puVar2 = local_4c;
    SortService_getInstance();
    SortService_filterUniqueSortablesByCriteria(puVar2,puVar3,pvVar4);
    PointerVector_assign(local_4c,local_1c,pvVar1);
  }
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4._0_1_ = 2;
  if (((*(int *)((int)this + 8) != 0) &&
      (*(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2 != 0)) ||
     ((*(int *)((int)this + 0x18) != 0 &&
      (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18) >> 2 != 0)))) {
    SortService_applySecondaryFilterGroups(this,local_4c,local_2c,pvVar1);
    PointerVector_assign(local_4c,local_2c,pvVar1);
  }
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  pvVar4 = (void *)((int)this + 0x24);
  if ((*(int *)((int)this + 0x28) != 0) &&
     (*(int *)((int)this + 0x2c) - *(int *)((int)this + 0x28) >> 2 != 0)) {
    puVar3 = local_3c;
    puVar2 = local_4c;
    SortService_getInstance();
    SortService_sortSortableVectorByCriteria(puVar2,puVar3,pvVar4);
    PointerVector_assign(local_4c,local_3c,pvVar1);
  }
  pvVar1 = local_44;
  if (local_44 < local_48) {
    FUN_00d83c2d();
  }
  pvVar4 = local_48;
  if (local_44 < local_48) {
    FUN_00d83c2d();
  }
  FUN_01438440(local_4c,pvVar4,local_4c,pvVar1,sortRequest);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_38 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0xffffffff;
  if (local_48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  ExceptionList = local_c;
  return;
}

