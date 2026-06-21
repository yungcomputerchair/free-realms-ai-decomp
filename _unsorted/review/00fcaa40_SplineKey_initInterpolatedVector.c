// addr: 0x00fcaa40
// name: SplineKey_initInterpolatedVector
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: float SplineKey_initInterpolatedVector(void * this, int * keyData, char
   worldSpace_) */

float __thiscall SplineKey_initInterpolatedVector(void *this,int *keyData,char worldSpace_)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  
                    /* Initializes a key/frame object from keyData, optionally transforms a local
                       vector through a matrix, stores timing fields, and interpolates between two
                       existing vectors using the key weight. */
  *(int *)((int)this + 4) = keyData[8];
  iVar9 = *keyData;
  *(int *)((int)this + 8) = iVar9;
  if (worldSpace_ == '\0') {
    fVar8 = (float)keyData[6];
    fVar10 = (float)keyData[5];
    fVar1 = (float)keyData[4];
    fVar2 = *(float *)(iVar9 + 0x28);
    fVar3 = *(float *)(iVar9 + 0x24);
    fVar4 = *(float *)(iVar9 + 0x20);
    fVar5 = *(float *)(iVar9 + 0x34);
    fVar6 = *(float *)(iVar9 + 0x38);
    fVar7 = *(float *)(iVar9 + 0x30);
    *(float *)((int)this + 0x40) =
         *(float *)(iVar9 + 0x14) * fVar10 + *(float *)(iVar9 + 0x18) * fVar8 +
         *(float *)(iVar9 + 0x10) * fVar1;
    *(float *)((int)this + 0x44) = fVar3 * fVar10 + fVar2 * fVar8 + fVar4 * fVar1;
    *(float *)((int)this + 0x48) = fVar5 * fVar10 + fVar6 * fVar8 + fVar7 * fVar1;
    iVar9 = 0;
  }
  else {
    *(int *)((int)this + 0x40) = keyData[4];
    *(int *)((int)this + 0x44) = keyData[5];
    *(int *)((int)this + 0x48) = keyData[6];
    iVar9 = keyData[7];
  }
  fVar10 = _DAT_0175b420;
  *(int *)((int)this + 0x4c) = iVar9;
  fVar8 = (float)keyData[8];
  fVar10 = fVar10 - fVar8;
  *(float *)((int)this + 0x50) =
       *(float *)((int)this + 0x20) * fVar10 + fVar8 * *(float *)((int)this + 0x30);
  *(float *)((int)this + 0x54) =
       *(float *)((int)this + 0x24) * fVar10 + *(float *)((int)this + 0x34) * fVar8;
  *(float *)((int)this + 0x58) =
       *(float *)((int)this + 0x28) * fVar10 + *(float *)((int)this + 0x38) * fVar8;
  return (float)keyData[8];
}

