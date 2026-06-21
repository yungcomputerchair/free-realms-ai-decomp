// addr: 0x010bb850
// name: FUN_010bb850
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void find_nearest_path_segment(int pathMgr_, float * query, float * outPoint,
   undefined4 * outSegmentId, uint * outEdgeId) */

void __thiscall
find_nearest_path_segment
          (void *this,int pathMgr_,float *query,float *outPoint,undefined4 *outSegmentId,
          uint *outEdgeId)

{
  uint *puVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float local_20;
  
                    /* Searches linked path/segment records, projects a 3D query point onto each
                       segment, computes distance, and returns the nearest point plus optional
                       segment and edge ids. Class identity is not evident. */
  fVar22 = DAT_01762a34;
  if (outPoint != (float *)0x0) {
    *outPoint = -NAN;
  }
  if (outSegmentId != (undefined4 *)0x0) {
    *outSegmentId = 0xffffffff;
  }
  fVar5 = DAT_0181cd40;
  pfVar2 = *(float **)((int)this + 0xc);
  do {
    if (pfVar2 == (float *)0x0) {
      return;
    }
    puVar3 = (uint *)pfVar2[9];
joined_r0x010bb8b5:
    if (puVar3 != (uint *)0x0) {
      local_60 = pfVar2[4];
      fStack_5c = pfVar2[5];
      uVar4 = *puVar3;
      fStack_58 = pfVar2[6];
      fVar13 = pfVar2[7];
      for (puVar6 = *(uint **)((int)this + (uVar4 & 0x3ff) * 4 + 0x18); puVar6 != (uint *)0x0;
          puVar6 = (uint *)puVar6[0x14]) {
        if (puVar6[0x15] == uVar4) goto LAB_010bb900;
      }
LAB_010bb91c:
      puVar6 = (uint *)0x0;
      goto LAB_010bb91e;
    }
    pfVar2 = (float *)pfVar2[0x17];
  } while( true );
LAB_010bb900:
  while (*puVar6 != uVar4) {
    puVar1 = puVar6 + 0x15;
    puVar6 = (uint *)puVar6[0x14];
    while( true ) {
      if (puVar6 == (uint *)0x0) goto LAB_010bb91c;
      if (puVar6[0x15] == *puVar1) break;
      puVar6 = (uint *)puVar6[0x14];
    }
  }
LAB_010bb91e:
  fVar7 = (float)puVar6[4] - local_60;
  fVar9 = (float)puVar6[5] - fStack_5c;
  fVar10 = (float)puVar6[6] - fStack_58;
  fVar12 = (float)puVar6[7] - fVar13;
  fVar16 = (*(float *)pathMgr_ - local_60) * fVar7;
  fVar19 = (*(float *)(pathMgr_ + 4) - fStack_5c) * fVar9;
  fVar20 = (*(float *)(pathMgr_ + 8) - fStack_58) * fVar10;
  fVar21 = (*(float *)(pathMgr_ + 0xc) - fVar13) * fVar12;
  fVar8 = fVar9 * fVar9 + fVar7 * fVar7;
  fVar11 = fVar12 * fVar12 + fVar10 * fVar10;
  fVar14 = fVar19 + fVar16;
  fVar15 = fVar21 + fVar20;
  auVar17._0_4_ = fVar15 + fVar14;
  auVar17._4_4_ = fVar15 + fVar16 + fVar19;
  auVar17._8_4_ = fVar14 + fVar15;
  auVar17._12_4_ = fVar14 + fVar20 + fVar21;
  auVar18._4_4_ = fVar11 + fVar7 * fVar7 + fVar9 * fVar9;
  auVar18._0_4_ = fVar11 + fVar8;
  auVar18._8_4_ = fVar8 + fVar11;
  auVar18._12_4_ = fVar8 + fVar10 * fVar10 + fVar12 * fVar12;
  auVar18 = divps(auVar17,auVar18);
  local_20 = auVar18._0_4_;
  if (0.0 < local_20) {
    if (local_20 < _DAT_0175b420) {
      local_60 = local_20 * fVar7 + local_60;
      fStack_5c = local_20 * fVar9 + fStack_5c;
      fStack_58 = local_20 * fVar10 + fStack_58;
      fVar13 = local_20 * fVar12 + fVar13;
    }
    else {
      local_60 = (float)puVar6[4];
      fStack_5c = (float)puVar6[5];
      fStack_58 = (float)puVar6[6];
      fVar13 = (float)puVar6[7];
    }
  }
  else {
    local_60 = pfVar2[4];
    fStack_5c = pfVar2[5];
    fStack_58 = pfVar2[6];
    fVar13 = pfVar2[7];
  }
  fVar7 = *(float *)(pathMgr_ + 4) - fStack_5c;
  fVar8 = *(float *)(pathMgr_ + 8) - fStack_58;
  fVar7 = fVar7 * fVar7 * fVar5 + (*(float *)pathMgr_ - local_60) * (*(float *)pathMgr_ - local_60)
          + fVar8 * fVar8;
  if ((fVar7 < fVar22) || (fVar22 < 0.0)) {
    *query = local_60;
    query[1] = fStack_5c;
    query[2] = fStack_58;
    query[3] = fVar13;
    if (outPoint != (float *)0x0) {
      *outPoint = *pfVar2;
    }
    fVar22 = fVar7;
    if (outSegmentId != (undefined4 *)0x0) {
      *outSegmentId = *puVar3;
    }
  }
  puVar3 = (uint *)puVar3[5];
  goto joined_r0x010bb8b5;
}

