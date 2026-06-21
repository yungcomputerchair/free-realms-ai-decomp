// addr: 0x0052a5e3
// name: LineTable_findNextVisibleRow
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LineTable_findNextVisibleRow(void * this, int rowIndex_, void * filter,
   uint * range, uint fallbackIndex_) */

uint __thiscall
LineTable_findNextVisibleRow(void *this,int rowIndex_,void *filter,uint *range,uint fallbackIndex_)

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
  bool bVar10;
  bool bVar11;
  undefined1 local_2c [8];
  int local_24;
  uint local_20;
  uint local_1c;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
                    /* Builds a temporary set of row glyph identifiers for a line and walks forward
                       to find the next row boundary not present in that set. Evidence mirrors
                       0052a425 but uses the second range endpoint and increments row index. */
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
    local_1c = range[1];
    iVar5 = rowIndex_ + 1;
    uVar8 = local_1c;
    if (iVar5 != *(int *)((int)this + 8)) {
      uVar8 = *(int *)(iVar9 + 0xc + *(int *)((int)this + 0xc)) - 1;
      if (local_1c != uVar8) {
        fallbackIndex_ = local_1c;
        if (uVar8 <= local_1c) {
          fallbackIndex_ = uVar8;
        }
        if (iVar5 < *(int *)((int)this + 8)) {
          do {
            bVar11 = SBORROW4(fallbackIndex_,local_1c);
            iVar2 = fallbackIndex_ - local_1c;
            bVar10 = fallbackIndex_ == local_1c;
            if ((int)local_1c <= (int)fallbackIndex_) goto LAB_0052a7a8;
            cVar4 = FUN_004ffe52(local_2c,iVar5,filter);
            if (cVar4 == '\0') break;
            iVar9 = iVar9 + 0xc;
            fallbackIndex_ = *(uint *)(iVar9 + *(int *)((int)this + 0xc));
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)((int)this + 8));
        }
        bVar11 = SBORROW4(fallbackIndex_,local_1c);
        iVar2 = fallbackIndex_ - local_1c;
        bVar10 = fallbackIndex_ == local_1c;
LAB_0052a7a8:
        uVar8 = fallbackIndex_;
        if (!bVar10 && bVar11 == iVar2 < 0) {
          uVar8 = local_1c;
        }
      }
    }
  }
  FUN_0051c337();
  return uVar8;
}

