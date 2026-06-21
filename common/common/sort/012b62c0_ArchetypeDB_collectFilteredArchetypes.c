// addr: 0x012b62c0
// name: ArchetypeDB_collectFilteredArchetypes
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_collectFilteredArchetypes(void * thisObj, void * filterList,
   void * outVector, void * sortableVector) */

void ArchetypeDB_collectFilteredArchetypes
               (void *thisObj,void *filterList,void *outVector,void *sortableVector)

{
  int value;
  int iVar1;
  void **ppvVar2;
  int *piVar3;
  bool bVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  void *local_5c;
  void *local_58;
  void **local_54;
  void *local_50;
  undefined1 auStack_4c [4];
  void *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  int *local_38;
  int *local_34;
  undefined4 local_30;
  undefined1 auStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds FilterCriteria objects from a filter list, converts sortables/property
                       objects as needed, applies the SortService filter pass, converts the
                       resulting sortable vector to archetypes, and stores the output. Evidence is
                       FilterCriteria ctor/setters, SortService filter helpers,
                       ArchetypeVector_fromSortableVector, and the
                       ArchetypeDB_loadAllArchetypesIntoList caller. */
  puStack_8 = &LAB_0166d37b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  local_58 = SortService_getInstance();
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_30 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_48 = filterList;
  local_50 = *(void **)filterList;
  local_54 = &thisObj;
  while( true ) {
    pvVar5 = local_50;
    ppvVar2 = local_54;
    if ((local_54 == (void **)0x0) || (local_54 != &thisObj)) {
      FUN_00d83c2d();
    }
    if (pvVar5 == local_48) break;
    if (ppvVar2 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar5 == ppvVar2[1]) {
      FUN_00d83c2d();
    }
    value = *(int *)((int)pvVar5 + 0xc);
    if (pvVar5 == ppvVar2[1]) {
      FUN_00d83c2d();
    }
    iVar1 = *(int *)((int)pvVar5 + 0x10);
    if (iVar1 != 0) {
      local_5c = Mem_Alloc(0x1c);
      local_4._0_1_ = 2;
      if (local_5c == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = FilterCriteria_ctor(local_5c);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      local_5c = pvVar5;
      FilterCriteria_setPrimaryFilter(pvVar5,value);
      FilterCriteria_setSecondaryFilter(pvVar5,1);
      FUN_012c54a0(iVar1);
      FUN_012b5ab0(&local_5c);
    }
    FUN_012af3e0();
  }
  PropertyObjectVector_fromSortableVector(auStack_1c,sortableVector);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_4._0_1_ = 4;
  bVar4 = SortService_filterSortablesByCriteria(auStack_1c,auStack_2c,auStack_3c);
  sortableVector = (void *)CONCAT31(sortableVector._1_3_,bVar4);
  uVar6 = ArchetypeVector_fromSortableVector(auStack_4c,auStack_2c);
  local_4._0_1_ = 5;
  UIntVector_assign(uVar6);
  piVar3 = local_34;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  local_48 = (void *)0x0;
  uStack_44 = 0;
  uStack_40 = 0;
  if (local_34 < local_38) {
    FUN_00d83c2d();
  }
  piVar7 = local_38;
  if (local_34 < local_38) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x3c) {
      FUN_00d83c2d();
    }
    if (piVar7 == piVar3) break;
    if (&stack0x00000000 == (undefined1 *)0x3c) {
      FUN_00d83c2d();
    }
    if (local_34 <= piVar7) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    if (local_34 <= piVar7) {
      FUN_00d83c2d();
    }
    piVar7 = piVar7 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pvStack_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_28);
  }
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_38 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_30 = 0;
  local_4 = 0xffffffff;
  FUN_012b4650(auStack_4c,&thisObj,*(undefined4 *)filterList,&thisObj,filterList);
                    /* WARNING: Subroutine does not return */
  _free(filterList);
}

