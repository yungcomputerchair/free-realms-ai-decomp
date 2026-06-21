// addr: 0x00dda9c0
// name: ViewportBounds_computeAdjustedRect
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void ViewportBounds_computeAdjustedRect(void * this, float * outRect) */

void __thiscall ViewportBounds_computeAdjustedRect(void *this,float *outRect)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* Copies seven floats from the object-owned record, sets a boolean-like flag
                       from a bit at +0x2f8, then adjusts output extents using render width/height
                       helper results and offsets at +0x170/+0x174. */
  pfVar3 = (float *)(*(int *)this + 0x44);
  pfVar4 = outRect;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  outRect[6] = (float)(*(byte *)(*(int *)this + 0x2f8) >> 4 & 1);
  iVar2 = FUN_00dec750();
  iVar1 = FUN_00dec760();
  if ((0 < iVar2) && (0 < iVar1)) {
    fVar6 = *(float *)(*(int *)this + 0x170);
    fVar7 = *(float *)(*(int *)this + 0x174);
    fVar5 = _DAT_0175b420 / (float)iVar1;
    if (outRect[6] == 1.4013e-45) {
      fVar6 = fVar6 * (_DAT_0175b420 / (float)iVar2);
      *outRect = *outRect - fVar6;
      outRect[1] = outRect[1] - fVar6;
      fVar7 = fVar7 * fVar5;
      outRect[2] = outRect[2] - fVar7;
      outRect[3] = outRect[3] - fVar7;
      return;
    }
    fVar6 = outRect[4] * fVar6 * (_DAT_0175b420 / (float)iVar2);
    *outRect = *outRect - fVar6;
    fVar5 = outRect[4] * fVar7 * fVar5;
    outRect[2] = outRect[2] - fVar5;
    outRect[1] = outRect[1] - fVar6;
    outRect[3] = outRect[3] - fVar5;
  }
  return;
}

