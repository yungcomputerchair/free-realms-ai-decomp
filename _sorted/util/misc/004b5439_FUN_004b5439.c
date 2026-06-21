// addr: 0x004b5439
// name: FUN_004b5439
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * build_layout_line_record(undefined4 ctx_, int * previous, int layout_,
   uint * outFlags) */

int * build_layout_line_record(undefined4 ctx_,int *previous,int layout_,uint *outFlags)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  uint local_8;
  
                    /* Builds a line/layout record from a previous record and iterates layout
                       content until flags terminate; if data was collected, finalizes metrics and
                       returns the record. Class identity is not evident. */
  local_8 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  *outFlags = 0;
  piVar1 = (int *)FUN_004b2272();
  if (piVar1 == (int *)0x0) {
    FUN_004a08bd();
    piVar1 = (int *)0x0;
  }
  else {
    if (previous == (int *)0x0) {
      piVar1[9] = 0;
      *piVar1 = 0;
      piVar1[1] = 0;
    }
    else {
      iVar2 = FUN_00482d4b();
      if (iVar2 == 0) {
        iVar2 = previous[9] + 1;
      }
      else {
        piVar3 = (int *)FUN_004a04e6();
        iVar2 = *(int *)(*piVar3 + 0x2c) + *(int *)(*piVar3 + 0x28) + -1 + previous[9];
      }
      piVar1[9] = iVar2 + 1;
      iVar2 = previous[1];
      iVar4 = previous[8];
      *piVar1 = *previous - previous[7];
      piVar1[1] = iVar2 - iVar4;
      piVar1[1] = previous[3] + (iVar2 - iVar4);
    }
    iVar2 = layout_;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = *(int *)(layout_ + 0x78);
    *(undefined4 *)(layout_ + 0xb8) = 0xffffffff;
    *(undefined4 *)(layout_ + 0xd4) = 0xffffffff;
    *(undefined1 **)(layout_ + 0x24) = local_1c;
    *(int **)(layout_ + 0x20) = piVar1;
    if ((*(float *)(*(int *)(layout_ + 0x2c) + 0x70) != 0.0) &&
       ((float)piVar1[3] <
        (float)*(int *)(layout_ + 0x58) * *(float *)(*(int *)(layout_ + 0x2c) + 0x70))) {
      iVar4 = FUN_00d83c90();
      piVar1[3] = iVar4;
    }
    iVar4 = 0;
    while (layout_ = FUN_004a8b7c(ctx_,iVar4,iVar2,&local_8), layout_ != 0) {
      if ((*(float *)(*(int *)(iVar2 + 0x2c) + 0x70) != 0.0) &&
         ((float)piVar1[3] <
          (float)*(int *)(iVar2 + 0x58) * *(float *)(*(int *)(iVar2 + 0x2c) + 0x70))) {
        iVar4 = FUN_00d83c90();
        piVar1[3] = iVar4;
      }
      if ((local_8 & 0x10) != 0) {
        FUN_004b2d32(&layout_);
      }
      if ((local_8 & 0x1000) != 0) break;
      local_8 = 0;
      iVar4 = layout_;
    }
    *outFlags = local_8;
    if ((local_18 == 0) || (iVar2 = local_14 - local_18 >> 2, iVar2 == 0)) {
      FUN_004ab0c3(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = FUN_00482d7f(0);
      FUN_004b5033(piVar1,uVar5,iVar2,uVar6,uVar7);
      iVar2 = FUN_00d83cc6();
      piVar1[3] = piVar1[3] + iVar2;
    }
    FUN_004a08bd();
  }
  return piVar1;
}

