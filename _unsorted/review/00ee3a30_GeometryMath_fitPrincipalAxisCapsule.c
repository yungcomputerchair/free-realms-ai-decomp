// addr: 0x00ee3a30
// name: GeometryMath_fitPrincipalAxisCapsule
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Type propagation algorithm not settling */
/* Setting prototype: void GeometryMath_fitPrincipalAxisCapsule(int stride_, int pointCount_, float
   * points, float * outCenter, float * outAxis, char computeExtent_) */

void __fastcall
GeometryMath_fitPrincipalAxisCapsule
          (int stride_,int pointCount_,float *points,float *outCenter,float *outAxis,
          char computeExtent_)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  undefined3 in_stack_00000011;
  char in_stack_00000014;
  float *local_48;
  float local_40 [7];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar14 = points;
                    /* Computes a centroid and covariance matrix for 3D points, iterates a principal
                       axis estimate, and optionally projects points onto that axis to produce
                       center and extent vectors. */
  local_40[1] = 0.0;
  iVar19 = 0;
  local_40[2] = local_40[1];
  local_40[3] = local_40[1];
  if (3 < (int)points) {
    pfVar16 = outCenter + pointCount_ * 3 + 2;
    iVar17 = ((uint)(points + -1) >> 2) + 1;
    iVar19 = iVar17 * 4;
    pfVar15 = outCenter + 2;
    pfVar18 = outCenter + pointCount_ * 2 + 2;
    pfVar20 = outCenter + pointCount_ + 2;
    do {
      pfVar1 = pfVar15 + -2;
      pfVar2 = pfVar15 + -1;
      fVar8 = *pfVar15;
      pfVar15 = pfVar15 + pointCount_ * 4;
      pfVar3 = pfVar20 + -2;
      pfVar4 = pfVar20 + -1;
      fVar9 = *pfVar20;
      pfVar20 = pfVar20 + pointCount_ * 4;
      pfVar5 = pfVar18 + -2;
      pfVar6 = pfVar18 + -1;
      fVar10 = *pfVar18;
      pfVar18 = pfVar18 + pointCount_ * 4;
      local_40[1] = pfVar16[-2] + *pfVar5 + *pfVar3 + *pfVar1 + local_40[1];
      local_40[2] = pfVar16[-1] + *pfVar6 + *pfVar4 + *pfVar2 + local_40[2];
      local_40[3] = local_40[3] + fVar8 + fVar9 + fVar10 + *pfVar16;
      pfVar16 = pfVar16 + pointCount_ * 4;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  if (iVar19 < (int)points) {
    pfVar15 = outCenter + iVar19 * pointCount_ + 2;
    iVar19 = (int)points - iVar19;
    do {
      local_40[1] = pfVar15[-2] + local_40[1];
      local_40[2] = pfVar15[-1] + local_40[2];
      local_40[3] = local_40[3] + *pfVar15;
      pfVar15 = pfVar15 + pointCount_;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  fVar8 = 1.0 / (float)(int)points;
  local_40[1] = fVar8 * local_40[1];
  local_40[2] = fVar8 * local_40[2];
  local_40[3] = fVar8 * local_40[3];
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  if (0 < (int)points) {
    pfVar15 = outCenter + 2;
    iVar19 = (int)outCenter - (int)(local_40 + 1);
    local_48 = points;
    do {
      fVar9 = pfVar15[-2];
      iVar17 = 0;
      fVar10 = pfVar15[-1];
      fVar11 = *pfVar15;
      pfVar16 = &local_20;
      do {
        iVar7 = iVar17 * 4;
        iVar17 = iVar17 + 1;
        fVar12 = *(float *)((int)local_40 + iVar19 + iVar7 + 4U) - local_40[iVar17];
        pfVar16[-1] = fVar12 * (fVar9 - local_40[1]) + pfVar16[-1];
        *pfVar16 = fVar12 * (fVar10 - local_40[2]) + *pfVar16;
        pfVar16[1] = fVar12 * (fVar11 - local_40[3]) + pfVar16[1];
        pfVar16 = pfVar16 + 3;
      } while (iVar17 < 3);
      pfVar15 = pfVar15 + pointCount_;
      iVar19 = iVar19 + pointCount_ * 4;
      local_48 = (float *)((int)local_48 + -1);
    } while (local_48 != (float *)0x0);
  }
  iVar19 = 3;
  pfVar15 = &local_20;
  do {
    iVar19 = iVar19 + -1;
    pfVar15[-1] = pfVar15[-1] * fVar8;
    *pfVar15 = fVar8 * *pfVar15;
    pfVar15[1] = pfVar15[1] * fVar8;
    pfVar15 = pfVar15 + 3;
  } while (iVar19 != 0);
  iVar19 = 0x19;
  fVar10 = 1.0;
  fVar8 = DAT_017ea718;
  fVar9 = DAT_017e99a8;
  do {
    fVar12 = fVar10 * local_24 + fVar8 * local_20 + fVar9 * local_1c;
    fVar11 = fVar8 * local_14 + fVar9 * local_10 + fVar10 * local_18;
    fVar9 = fVar10 * local_c + fVar8 * local_8 + fVar9 * local_4;
    fVar8 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar9 * fVar9);
    if (fVar8 <= DAT_018212d0) {
      fVar9 = 0.0;
      fVar10 = fVar9;
      fVar8 = fVar9;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fVar9 = fVar8 * fVar9;
      fVar10 = fVar8 * fVar12;
      fVar8 = fVar8 * fVar11;
    }
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  if (in_stack_00000014 == '\0') {
    *_computeExtent_ = fVar10;
    _computeExtent_[1] = fVar8;
    _computeExtent_[2] = fVar9;
    outAxis[2] = 0.0;
    outAxis[1] = 0.0;
    *outAxis = 0.0;
    return;
  }
  iVar19 = 0;
  fVar11 = -1.9140881e+38;
  fVar12 = 1.9140881e+38;
  if (3 < (int)points) {
    local_48 = outCenter + pointCount_ * 3 + 1;
    _in_stack_00000014 = outCenter + pointCount_ + 1;
    iVar17 = ((uint)(points + -1) >> 2) + 1;
    iVar19 = iVar17 * 4;
    pfVar15 = outCenter + 1;
    points = outCenter + pointCount_ * 2 + 1;
    do {
      fVar13 = *pfVar15 * fVar8 + pfVar15[-1] * fVar10 + pfVar15[1] * fVar9;
      if (fVar13 < fVar12) {
        fVar12 = fVar13;
      }
      if (fVar11 < fVar13) {
        fVar11 = fVar13;
      }
      fVar13 = *_in_stack_00000014 * fVar8 +
               _in_stack_00000014[-1] * fVar10 + _in_stack_00000014[1] * fVar9;
      if (fVar13 < fVar12) {
        fVar12 = fVar13;
      }
      if (fVar11 < fVar13) {
        fVar11 = fVar13;
      }
      fVar13 = *points * fVar8 + points[-1] * fVar10 + points[1] * fVar9;
      if (fVar13 < fVar12) {
        fVar12 = fVar13;
      }
      if (fVar11 < fVar13) {
        fVar11 = fVar13;
      }
      fVar13 = *local_48 * fVar8 + local_48[-1] * fVar10 + local_48[1] * fVar9;
      if (fVar13 < fVar12) {
        fVar12 = fVar13;
      }
      if (fVar11 < fVar13) {
        fVar11 = fVar13;
      }
      _in_stack_00000014 = _in_stack_00000014 + pointCount_ * 4;
      points = points + pointCount_ * 4;
      local_48 = local_48 + pointCount_ * 4;
      pfVar15 = pfVar15 + pointCount_ * 4;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  if (iVar19 < (int)pfVar14) {
    pfVar15 = outCenter + iVar19 * pointCount_ + 1;
    iVar19 = (int)pfVar14 - iVar19;
    do {
      fVar13 = *pfVar15 * fVar8 + pfVar15[-1] * fVar10 + pfVar15[1] * fVar9;
      if (fVar13 < fVar12) {
        fVar12 = fVar13;
      }
      if (fVar11 < fVar13) {
        fVar11 = fVar13;
      }
      pfVar15 = pfVar15 + pointCount_;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  if (fVar11 != fVar12) {
    fVar11 = fVar11 - fVar12;
    *_computeExtent_ = fVar11 * fVar10;
    fVar12 = (fVar10 * local_40[1] + fVar8 * local_40[2] + fVar9 * local_40[3]) - fVar12;
    *outAxis = local_40[1] - fVar12 * fVar10;
    _computeExtent_[1] = fVar11 * fVar8;
    outAxis[1] = local_40[2] - fVar12 * fVar8;
    _computeExtent_[2] = fVar11 * fVar9;
    outAxis[2] = local_40[3] - fVar9 * fVar12;
    return;
  }
  *outAxis = *outCenter;
  *_computeExtent_ = 1.0;
  outAxis[1] = outCenter[1];
  _computeExtent_[1] = 1.0;
  outAxis[2] = outCenter[2];
  _computeExtent_[2] = 1.0;
  return;
}

