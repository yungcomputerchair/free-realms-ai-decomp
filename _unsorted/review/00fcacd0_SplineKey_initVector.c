// addr: 0x00fcacd0
// name: SplineKey_initVector
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: float SplineKey_initVector(void * this, int * keyData, char worldSpace_) */

float __thiscall SplineKey_initVector(void *this,int *keyData,char worldSpace_)

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
  int iVar10;
  
                    /* Initializes vector/key fields from keyData, optionally converting coordinates
                       through a matrix, and copies trailing key parameters. */
  *(int *)((int)this + 4) = keyData[0xc];
  iVar10 = *keyData;
  *(int *)((int)this + 0x50) = iVar10;
  if (worldSpace_ == '\0') {
    fVar1 = (float)keyData[6];
    fVar2 = (float)keyData[5];
    fVar3 = (float)keyData[4];
    fVar4 = *(float *)(iVar10 + 0x28);
    fVar5 = *(float *)(iVar10 + 0x24);
    fVar6 = *(float *)(iVar10 + 0x20);
    fVar7 = *(float *)(iVar10 + 0x34);
    fVar8 = *(float *)(iVar10 + 0x38);
    fVar9 = *(float *)(iVar10 + 0x30);
    *(float *)((int)this + 0x30) =
         *(float *)(iVar10 + 0x14) * fVar2 + *(float *)(iVar10 + 0x18) * fVar1 +
         *(float *)(iVar10 + 0x10) * fVar3;
    *(float *)((int)this + 0x34) = fVar5 * fVar2 + fVar4 * fVar1 + fVar6 * fVar3;
    *(float *)((int)this + 0x38) = fVar7 * fVar2 + fVar8 * fVar1 + fVar9 * fVar3;
    iVar10 = 0;
  }
  else {
    *(int *)((int)this + 0x30) = keyData[4];
    *(int *)((int)this + 0x34) = keyData[5];
    *(int *)((int)this + 0x38) = keyData[6];
    iVar10 = keyData[7];
  }
  *(int *)((int)this + 0x3c) = iVar10;
  *(int *)((int)this + 0x40) = keyData[8];
  *(int *)((int)this + 0x44) = keyData[9];
  *(int *)((int)this + 0x48) = keyData[10];
  *(int *)((int)this + 0x4c) = keyData[0xb];
  return (float)keyData[0xc];
}

