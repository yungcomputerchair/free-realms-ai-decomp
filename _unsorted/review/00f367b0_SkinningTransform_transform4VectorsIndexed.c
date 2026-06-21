// addr: 0x00f367b0
// name: SkinningTransform_transform4VectorsIndexed
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SkinningTransform_transform4VectorsIndexed(int count_, void * src, void *
   dst, int * matrixIndex, float * matrixPalette, int matrixBase_, int extraFloatCount_, int
   srcStride_, int dstStride_) */

void __cdecl
SkinningTransform_transform4VectorsIndexed
          (int count_,void *src,void *dst,int *matrixIndex,float *matrixPalette,int matrixBase_,
          int extraFloatCount_,int srcStride_,int dstStride_)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
                    /* Transforms vertex records containing position plus three direction vectors by
                       a palette matrix selected from matrixIndex, then copies any extra floats. */
  pfVar2 = matrixPalette + *matrixIndex * 0x10;
  if (count_ != 0) {
    pfVar4 = (float *)((int)dst + 8);
    pfVar3 = (float *)((int)src + 4);
    do {
      count_ = count_ + -1;
      pfVar4[-2] = *pfVar3 * pfVar2[4] + pfVar3[-1] * *pfVar2 + pfVar2[8] * pfVar3[1] + pfVar2[0xc];
      pfVar4[-1] = *pfVar3 * pfVar2[5] + pfVar3[1] * pfVar2[9] + pfVar2[1] * pfVar3[-1] +
                   pfVar2[0xd];
      *pfVar4 = pfVar2[6] * *pfVar3 + pfVar2[10] * pfVar3[1] + pfVar2[2] * pfVar3[-1] + pfVar2[0xe];
      pfVar4[1] = pfVar3[3] * pfVar2[4] + pfVar3[2] * *pfVar2 + pfVar2[8] * pfVar3[4];
      pfVar4[2] = pfVar3[3] * pfVar2[5] + pfVar3[4] * pfVar2[9] + pfVar2[1] * pfVar3[2];
      pfVar4[3] = pfVar2[6] * pfVar3[3] + pfVar2[10] * pfVar3[4] + pfVar2[2] * pfVar3[2];
      pfVar4[4] = pfVar3[6] * pfVar2[4] + pfVar3[5] * *pfVar2 + pfVar2[8] * pfVar3[7];
      pfVar4[5] = pfVar3[6] * pfVar2[5] + pfVar3[7] * pfVar2[9] + pfVar2[1] * pfVar3[5];
      pfVar5 = pfVar3 + 0xb;
      pfVar4[6] = pfVar2[6] * pfVar3[6] + pfVar2[10] * pfVar3[7] + pfVar2[2] * pfVar3[5];
      pfVar4[7] = pfVar3[9] * pfVar2[4] + pfVar3[8] * *pfVar2 + pfVar2[8] * pfVar3[10];
      pfVar4[8] = pfVar3[9] * pfVar2[5] + pfVar3[10] * pfVar2[9] + pfVar3[8] * pfVar2[1];
      pfVar4[9] = pfVar2[6] * pfVar3[9] + pfVar2[10] * pfVar3[10] + pfVar2[2] * pfVar3[8];
      if (matrixBase_ != 0) {
        iVar1 = 0x28 - (int)pfVar5;
        iVar6 = matrixBase_;
        do {
          iVar6 = iVar6 + -1;
          *(float *)((int)pfVar4 + iVar1 + (int)pfVar5) = *pfVar5;
          pfVar5 = pfVar5 + 1;
        } while (iVar6 != 0);
      }
      pfVar3 = (float *)((int)pfVar3 + extraFloatCount_);
      pfVar4 = (float *)((int)pfVar4 + srcStride_);
    } while (count_ != 0);
  }
  return;
}

