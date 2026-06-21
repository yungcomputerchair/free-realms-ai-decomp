// addr: 0x00f36fb0
// name: SkinningTransform_transform4VectorsIndexedRemap
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SkinningTransform_transform4VectorsIndexedRemap(int count_, void * src,
   void * dst, int * remap, float * matrixPalette, int extraFloatCount_, int srcStride_, int
   dstStride_) */

void __cdecl
SkinningTransform_transform4VectorsIndexedRemap
          (int count_,void *src,void *dst,int *remap,float *matrixPalette,int extraFloatCount_,
          int srcStride_,int dstStride_)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
                    /* Transforms position plus three direction vectors using a per-record matrix
                       index remapped through a table, then copies trailing attributes. */
  if (count_ != 0) {
    pfVar5 = (float *)((int)dst + 8);
    pfVar4 = (float *)((int)src + 8);
    do {
      count_ = count_ + -1;
      pfVar2 = matrixPalette + remap[(int)pfVar4[1]] * 0x10;
      pfVar5[-2] = pfVar4[-2] * *pfVar2 + pfVar4[-1] * pfVar2[4] + pfVar2[8] * *pfVar4 + pfVar2[0xc]
      ;
      pfVar5[-1] = pfVar2[1] * pfVar4[-2] + pfVar2[9] * *pfVar4 + pfVar4[-1] * pfVar2[5] +
                   pfVar2[0xd];
      *pfVar5 = pfVar2[6] * pfVar4[-1] + pfVar4[-2] * pfVar2[2] + pfVar2[10] * *pfVar4 + pfVar2[0xe]
      ;
      pfVar5[1] = pfVar2[8] * pfVar4[4] + pfVar4[2] * *pfVar2 + pfVar4[3] * pfVar2[4];
      pfVar5[2] = pfVar2[1] * pfVar4[2] + pfVar4[3] * pfVar2[5] + pfVar4[4] * pfVar2[9];
      pfVar5[3] = pfVar2[6] * pfVar4[3] + pfVar2[10] * pfVar4[4] + pfVar4[2] * pfVar2[2];
      pfVar5[4] = pfVar2[8] * pfVar4[7] + pfVar4[5] * *pfVar2 + pfVar4[6] * pfVar2[4];
      pfVar5[5] = pfVar2[1] * pfVar4[5] + pfVar4[6] * pfVar2[5] + pfVar4[7] * pfVar2[9];
      pfVar5[6] = pfVar2[6] * pfVar4[6] + pfVar2[10] * pfVar4[7] + pfVar4[5] * pfVar2[2];
      pfVar5[7] = pfVar2[8] * pfVar4[10] + pfVar4[8] * *pfVar2 + pfVar4[9] * pfVar2[4];
      pfVar5[8] = pfVar4[8] * pfVar2[1] + pfVar4[9] * pfVar2[5] + pfVar4[10] * pfVar2[9];
      pfVar3 = pfVar4 + 0xb;
      pfVar5[9] = pfVar2[6] * pfVar4[9] + pfVar2[10] * pfVar4[10] + pfVar4[8] * pfVar2[2];
      if (extraFloatCount_ != 0) {
        iVar1 = 0x28 - (int)pfVar3;
        iVar6 = extraFloatCount_;
        do {
          iVar6 = iVar6 + -1;
          *(float *)((int)pfVar5 + iVar1 + (int)pfVar3) = *pfVar3;
          pfVar3 = pfVar3 + 1;
        } while (iVar6 != 0);
      }
      pfVar4 = (float *)((int)pfVar4 + srcStride_);
      pfVar5 = (float *)((int)pfVar5 + dstStride_);
    } while (count_ != 0);
  }
  return;
}

