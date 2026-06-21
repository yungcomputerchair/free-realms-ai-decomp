// addr: 0x00f07880
// name: GeometryIntersection_testBoxInterval
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: int GeometryIntersection_testBoxInterval(void * box, float * minExtents, float
   * maxExtents, float * point) */

int __cdecl
GeometryIntersection_testBoxInterval(void *box,float *minExtents,float *maxExtents,float *point)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  float *pfVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pvVar3 = box;
  fVar2 = _DAT_0186fa30;
                    /* Projects a point relative to a 3-axis box against positive and negative face
                       normals and returns whether the accumulated interval remains valid. */
  fVar1 = DAT_017eb6e4;
  local_c = *point - *(float *)((int)box + 0x30);
  pfVar5 = (float *)((int)box + 8);
  box = (void *)0x3;
  local_8 = point[1] - *(float *)((int)pvVar3 + 0x34);
  local_4 = point[2] - *(float *)((int)pvVar3 + 0x38);
  iVar4 = (int)maxExtents - (int)minExtents;
  do {
    local_18 = pfVar5[-2];
    local_14 = pfVar5[-1];
    local_10 = *pfVar5;
    FUN_00f07710(&local_18,-*(float *)(iVar4 + (int)minExtents));
    local_18 = -local_18;
    local_14 = -local_14;
    local_10 = -local_10;
    FUN_00f07710(&local_18,*minExtents);
    pfVar5 = pfVar5 + 4;
    minExtents = minExtents + 1;
    box = (void *)((int)box + -1);
  } while (box != (void *)0x0);
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    return 0;
  }
  if ((NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) && (NAN(fVar2) || 0.0 < fVar2 == (fVar2 == 0.0))
     ) {
    return 0;
  }
  return 1;
}

