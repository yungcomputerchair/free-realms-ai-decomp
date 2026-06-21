// addr: 0x00518d07
// name: TextLineSpan_mergeAdjacentRuns
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 TextLineSpan_mergeAdjacentRuns(void * this, void * outRuns, int
   limit_, int * range) */

undefined4 __thiscall TextLineSpan_mergeAdjacentRuns(void *this,void *outRuns,int limit_,int *range)

{
  int iVar1;
  char cVar2;
  short *psVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  short local_38 [2];
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [12];
  undefined1 local_1c [8];
  int local_14;
  int local_c;
  uint local_8;
  
                    /* Scans line records and child glyph/segment data, building or extending output
                       ranges when adjacent entries share the same short key and contiguous
                       positions. Evidence is the loop over row records at param_1+0xc, the fallback
                       range clipping, and merging into param_2 when the last output entry matches.
                        */
  if (limit_ == 0) {
    local_14 = 0;
    iVar7 = *(int *)((int)this + 8) + -1;
    limit_ = 0x7fffffff;
  }
  else {
    local_14 = FUN_004f66e6(*(undefined4 *)limit_,0,*(undefined4 *)((int)this + 8));
    iVar7 = FUN_004f66e6(*(undefined4 *)(limit_ + 4),local_14,*(undefined4 *)((int)this + 8));
    if (iVar7 + 1 < *(int *)((int)this + 8)) {
      limit_ = *(int *)(limit_ + 4);
      iVar8 = *(int *)((iVar7 + 1) * 0xc + *(int *)((int)this + 0xc)) + -1;
      if (limit_ <= iVar8) goto LAB_00518d75;
    }
    else {
      iVar8 = *(int *)(limit_ + 4);
    }
    limit_ = iVar8;
  }
LAB_00518d75:
  FUN_004a6011();
  local_c = local_14;
  do {
    if (iVar7 <= local_c) {
      return *(undefined4 *)((int)outRuns + 8);
    }
    local_8 = 0;
    iVar8 = local_c * 0xc;
    while( true ) {
      iVar6 = *(int *)(iVar8 + 4 + *(int *)((int)this + 0xc));
      iVar1 = *(int *)(iVar6 + 4);
      if ((iVar1 == 0) || ((uint)(*(int *)(iVar6 + 8) - iVar1 >> 1) <= local_8)) break;
      psVar3 = (short *)FUN_004ce2d0(local_8);
      local_38[0] = *psVar3;
      local_34 = FUN_004ce94f(local_8);
      piVar4 = (int *)(*(int *)((int)this + 0xc) + iVar8);
      local_30 = *piVar4;
      local_2c = limit_;
      if ((local_c + 1 < *(int *)((int)this + 8)) && (local_2c = piVar4[3] + -1, limit_ <= local_2c)
         ) {
        local_2c = limit_;
      }
      pvVar9 = outRuns;
      uVar5 = FUN_004edbc7(local_38);
      FUN_00483914(uVar5,pvVar9);
      FUN_00483914(*(undefined4 *)((int)outRuns + 4),outRuns);
      cVar2 = FUN_0048342b(local_1c);
      if (((cVar2 == '\0') && (psVar3 = (short *)FUN_00492a94(), *psVar3 == local_38[0])) &&
         (iVar6 = FUN_00492a94(), *(int *)(iVar6 + 0xc) == local_30 + -1)) {
        FUN_00492a94();
        cVar2 = FUN_004db5c1(local_34);
        if (cVar2 == '\0') goto LAB_00518e7f;
        iVar6 = FUN_00492a94();
        *(int *)(iVar6 + 0xc) = local_2c;
      }
      else {
LAB_00518e7f:
        FUN_0051167a(local_28,local_38);
      }
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

