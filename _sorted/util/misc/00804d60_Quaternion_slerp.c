// addr: 0x00804d60
// name: Quaternion_slerp
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: float * Quaternion_slerp(float * out, float * from, float * to, float t_) */

float * __cdecl Quaternion_slerp(float *out,float *from,float *to,float t_)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float10 fVar12;
  float10 fVar13;
  
                    /* Spherical-linear interpolates between two 4-float vectors/quaternions using
                       acos/sin scaling; falls back to copying the target when the angle is below
                       epsilon. */
  fVar4 = *from;
  fVar5 = from[1];
  fVar6 = from[2];
  fVar7 = from[3];
  fVar8 = *to;
  fVar9 = to[1];
  fVar10 = to[2];
  fVar11 = to[3];
  fVar12 = (float10)FUN_00d842c0();
  if ((float10)_DAT_017ebf0c < fVar12) {
    fVar13 = (float10)fsin(((float10)1 - (float10)t_) * fVar12);
    fVar1 = (float)fVar13;
    fVar13 = (float10)fsin((float10)t_ * fVar12);
    fVar2 = (float)fVar13;
    fVar12 = (float10)fsin(fVar12);
    fVar3 = (float)((float10)1 / fVar12);
    *out = (fVar1 * fVar4 + fVar2 * fVar8) * fVar3;
    out[1] = (fVar1 * fVar5 + fVar2 * fVar9) * fVar3;
    out[2] = (fVar1 * fVar6 + fVar2 * fVar10) * fVar3;
    out[3] = (fVar1 * fVar7 + fVar2 * fVar11) * fVar3;
    return out;
  }
  *out = *to;
  out[1] = to[1];
  out[2] = to[2];
  out[3] = to[3];
  return out;
}

