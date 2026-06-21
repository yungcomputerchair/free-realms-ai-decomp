// addr: 0x00f079b0
// name: GeometryIntersection_clipBoxInterval
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: int GeometryIntersection_clipBoxInterval(void * box, float * minExtents, float
   * maxExtents, float * point, int flags_, float * outInterval) */

int __cdecl
GeometryIntersection_clipBoxInterval
          (void *box,float *minExtents,float *maxExtents,float *point,int flags_,float *outInterval)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  float *pfVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = point;
                    /* Computes a point offset from a 3-axis box center, clips against each
                       positive/negative axis plane, writes an output interval, and reports whether
                       it is non-empty and positive. */
  pvVar2 = box;
  *outInterval = DAT_017eb6e4;
  outInterval[4] = _DAT_0186fa30;
  local_c = *point - *(float *)((int)box + 0x30);
  pfVar4 = (float *)((int)box + 8);
  local_8 = point[1] - *(float *)((int)box + 0x34);
  box = minExtents;
  point = (float *)0x3;
  local_4 = pfVar3[2] - *(float *)((int)pvVar2 + 0x38);
  do {
    local_18 = pfVar4[-2];
    local_14 = pfVar4[-1];
    local_10 = *pfVar4;
    fVar1 = local_10 * local_10 + local_14 * local_14 + local_18 * local_18;
    FUN_00f077b0(&local_18,-(fVar1 * *(float *)(((int)maxExtents - (int)minExtents) + (int)box)),
                 &local_c,outInterval);
    local_18 = -local_18;
    local_14 = -local_14;
    local_10 = -local_10;
    FUN_00f077b0(&local_18,fVar1 * *(float *)box,&local_c,outInterval);
    box = (void *)((int)box + 4);
    pfVar4 = pfVar4 + 4;
    point = (float *)((int)point + -1);
  } while (point != (float *)0x0);
  if ((*outInterval <= outInterval[4]) &&
     ((fVar1 = *outInterval, !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0) ||
      (fVar1 = outInterval[4], !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))))) {
    return 1;
  }
  return 0;
}

