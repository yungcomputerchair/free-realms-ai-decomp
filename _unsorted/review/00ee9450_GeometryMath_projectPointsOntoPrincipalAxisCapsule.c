// addr: 0x00ee9450
// name: GeometryMath_projectPointsOntoPrincipalAxisCapsule
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GeometryMath_projectPointsOntoPrincipalAxisCapsule(void * work, int
   pointCount_, void * points, void * src, void * positions) */

void __cdecl
GeometryMath_projectPointsOntoPrincipalAxisCapsule
          (void *work,int pointCount_,void *points,void *src,void *positions)

{
  float *pfVar1;
  float *outAxis;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
                    /* Copies point coordinates, calls GeometryMath_fitPrincipalAxisCapsule, then
                       projects each point along the fitted capsule axis into a work buffer. */
  iVar2 = *(int *)((int)work + 4);
  iVar10 = *(int *)(iVar2 + 0x1c);
  iVar11 = *(int *)(iVar2 + 0x20);
  iVar12 = 0;
  if (3 < pointCount_) {
    iVar9 = (pointCount_ - 4U >> 2) + 1;
    iVar12 = iVar9 * 4;
    puVar5 = (undefined4 *)(iVar11 + 4);
    puVar7 = (undefined4 *)((int)src + 0xc);
    do {
      puVar5[-1] = puVar7[-3];
      iVar9 = iVar9 + -1;
      *puVar5 = *(undefined4 *)((int)src + (-0x10 - iVar11) + (int)(puVar5 + 4));
      puVar5[1] = puVar7[-1];
      puVar5[2] = *puVar7;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + 4;
    } while (iVar9 != 0);
  }
  if (iVar12 < pointCount_) {
    iVar9 = pointCount_ - iVar12;
    puVar5 = (undefined4 *)(iVar11 + iVar12 * 4);
    do {
      iVar9 = iVar9 + -1;
      *puVar5 = *(undefined4 *)((int)puVar5 + ((int)src - iVar11));
      puVar5 = puVar5 + 1;
    } while (iVar9 != 0);
  }
  pfVar1 = (float *)(iVar2 + 4);
  outAxis = (float *)(iVar2 + 0x10);
  GeometryMath_fitPrincipalAxisCapsule
            ((int)positions,3,(float *)pointCount_,positions,outAxis,(char)pfVar1);
  iVar12 = *(int *)(iVar2 + 0x20) + (iVar10 / 2) * 4;
  iVar10 = 0;
  fVar3 = SQRT(*pfVar1 * *pfVar1 + *(float *)(iVar2 + 8) * *(float *)(iVar2 + 8) +
               *(float *)(iVar2 + 0xc) * *(float *)(iVar2 + 0xc)) *
          SQRT(*pfVar1 * *pfVar1 + *(float *)(iVar2 + 8) * *(float *)(iVar2 + 8) +
               *(float *)(iVar2 + 0xc) * *(float *)(iVar2 + 0xc));
  if (3 < pointCount_) {
    fVar4 = 1.0 / fVar3;
    iVar11 = (pointCount_ - 4U >> 2) + 1;
    iVar10 = iVar11 * 4;
    pfVar6 = (float *)((int)positions + 0x14);
    pfVar8 = (float *)(iVar12 + 8);
    do {
      iVar11 = iVar11 + -1;
      pfVar8[-2] = ((pfVar6[-4] - *(float *)(iVar2 + 0x14)) * *(float *)(iVar2 + 8) +
                   (pfVar6[-3] - *(float *)(iVar2 + 0x18)) * *(float *)(iVar2 + 0xc) +
                   *pfVar1 * (pfVar6[-5] - *outAxis)) * fVar4;
      pfVar8[-1] = ((pfVar6[-1] - *(float *)(iVar2 + 0x14)) * *(float *)(iVar2 + 8) +
                   (*pfVar6 - *(float *)(iVar2 + 0x18)) * *(float *)(iVar2 + 0xc) +
                   *pfVar1 * (pfVar6[-2] - *outAxis)) * fVar4;
      *pfVar8 = ((pfVar6[2] - *(float *)(iVar2 + 0x14)) * *(float *)(iVar2 + 8) +
                (pfVar6[3] - *(float *)(iVar2 + 0x18)) * *(float *)(iVar2 + 0xc) +
                *pfVar1 * (pfVar6[1] - *outAxis)) * fVar4;
      pfVar8[1] = ((pfVar6[5] - *(float *)(iVar2 + 0x14)) * *(float *)(iVar2 + 8) +
                  (pfVar6[6] - *(float *)(iVar2 + 0x18)) * *(float *)(iVar2 + 0xc) +
                  *pfVar1 * (pfVar6[4] - *outAxis)) * fVar4;
      pfVar6 = pfVar6 + 0xc;
      pfVar8 = pfVar8 + 4;
    } while (iVar11 != 0);
  }
  if (pointCount_ <= iVar10) {
    return;
  }
  pfVar6 = (float *)((int)positions + iVar10 * 0xc + 8);
  do {
    iVar10 = iVar10 + 1;
    *(float *)(iVar12 + -4 + iVar10 * 4) =
         ((pfVar6[-1] - *(float *)(iVar2 + 0x14)) * *(float *)(iVar2 + 8) +
         (*pfVar6 - *(float *)(iVar2 + 0x18)) * *(float *)(iVar2 + 0xc) +
         *pfVar1 * (pfVar6[-2] - *outAxis)) * (1.0 / fVar3);
    pfVar6 = pfVar6 + 3;
  } while (iVar10 < pointCount_);
  return;
}

