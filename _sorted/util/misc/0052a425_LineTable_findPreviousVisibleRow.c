// addr: 0x0052a425
// name: LineTable_findPreviousVisibleRow
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LineTable_findPreviousVisibleRow(void * this, int rowIndex_, void *
   filter, uint * range, uint fallbackIndex_) */

uint __thiscall
LineTable_findPreviousVisibleRow
          (void *this,int rowIndex_,void *filter,uint *range,uint fallbackIndex_)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_2c [8];
  int local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
                    /* Builds a temporary set of row glyph identifiers for a line and walks backward
                       to find the previous row boundary not present in that set. Evidence is row
                       lookup by index, temporary vector/tree population, and backward calls to a
                       row visibility test. */
  pvVar3 = filter;
  if ((int)fallbackIndex_ < 1) {
    rowIndex_ = FUN_004f66e6(rowIndex_,0,*(undefined4 *)((int)this + 8));
    if (rowIndex_ == -1) {
      return 0xffffffff;
    }
  }
  else {
    rowIndex_ = fallbackIndex_ - 1;
  }
  FUN_004fb515();
  iVar9 = rowIndex_ * 0xc;
  iVar5 = *(int *)((int)this + 0xc) + iVar9;
  if (*(int *)((int)filter + 8) == 0) {
    iVar2 = *(int *)(iVar5 + 4);
    fallbackIndex_ = 0;
    filter = (void *)0x1;
    local_8 = *(undefined4 *)(iVar5 + 8);
    while ((iVar5 = *(int *)(iVar2 + 4), iVar5 != 0 &&
           (fallbackIndex_ < (uint)(*(int *)(iVar2 + 8) - iVar5 >> 1)))) {
      uVar6 = FUN_004ce2d0(fallbackIndex_);
      local_c = (undefined4 *)FUN_005204b2(uVar6);
      uVar6 = FUN_004ce94f(fallbackIndex_);
      fallbackIndex_ = fallbackIndex_ + 1;
      *local_c = uVar6;
    }
  }
  else {
    uVar6 = *(undefined4 *)(iVar5 + 4);
    local_8 = *(undefined4 *)(iVar5 + 8);
    puVar1 = (undefined4 *)((int)filter + 4);
    filter = (void *)0x0;
    FUN_0040b4e5(*(undefined4 *)*puVar1,pvVar3);
    while( true ) {
      FUN_0040b4e5(*(undefined4 *)((int)pvVar3 + 4),pvVar3);
      cVar4 = FUN_0040aec0(&local_20);
      if (cVar4 != '\0') break;
      uVar7 = FUN_004169f1();
      local_c = (undefined4 *)FUN_004e195e(uVar6,uVar7);
      if (local_c != (undefined4 *)0xffffffff) {
        uVar7 = FUN_004ce2d0(local_c);
        local_10 = (undefined4 *)FUN_005204b2(uVar7);
        uVar7 = FUN_004ce94f(local_c);
        *local_10 = uVar7;
      }
      FUN_00417334();
    }
  }
  if (local_24 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    if (range == (uint *)0x0) {
      local_20 = 0;
      local_1c = 0x7ffffffe;
      range = &local_20;
    }
    local_20 = *range;
    uVar8 = *(uint *)(iVar9 + *(int *)((int)this + 0xc));
    if (uVar8 != local_20) {
      if (uVar8 < local_20) {
        uVar8 = local_20;
      }
      if (rowIndex_ != 0) {
        while (((rowIndex_ = rowIndex_ + -1, -1 < rowIndex_ && ((int)local_20 < (int)uVar8)) &&
               (cVar4 = FUN_004ffe52(local_2c,rowIndex_,filter), cVar4 != '\0'))) {
          iVar9 = iVar9 + -0xc;
          uVar8 = *(uint *)(iVar9 + *(int *)((int)this + 0xc));
        }
        if ((int)uVar8 < (int)local_20) {
          uVar8 = local_20;
        }
      }
    }
  }
  FUN_0051c337();
  return uVar8;
}

