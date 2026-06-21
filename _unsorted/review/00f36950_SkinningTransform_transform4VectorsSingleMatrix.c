// addr: 0x00f36950
// name: SkinningTransform_transform4VectorsSingleMatrix
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SkinningTransform_transform4VectorsSingleMatrix(int count_, void * src,
   void * dst, float * matrix, int extraFloatCount_, int srcStride_, int dstStride_) */

void __cdecl
SkinningTransform_transform4VectorsSingleMatrix
          (int count_,void *src,void *dst,float *matrix,int extraFloatCount_,int srcStride_,
          int dstStride_)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
                    /* Transforms vertex records with position plus three 3-float vectors using a
                       single matrix and copies trailing attributes. */
  if (count_ != 0) {
    pfVar3 = (float *)((int)dst + 8);
    pfVar2 = (float *)((int)src + 4);
    do {
      count_ = count_ + -1;
      pfVar3[-2] = pfVar2[1] * matrix[8] + pfVar2[-1] * *matrix + *pfVar2 * matrix[4] + matrix[0xc];
      pfVar3[-1] = matrix[5] * *pfVar2 + pfVar2[-1] * matrix[1] + pfVar2[1] * matrix[9] +
                   matrix[0xd];
      *pfVar3 = matrix[2] * pfVar2[-1] + matrix[10] * pfVar2[1] + *pfVar2 * matrix[6] + matrix[0xe];
      pfVar3[1] = pfVar2[4] * matrix[8] + pfVar2[3] * matrix[4] + pfVar2[2] * *matrix;
      pfVar3[2] = matrix[5] * pfVar2[3] + pfVar2[2] * matrix[1] + pfVar2[4] * matrix[9];
      pfVar3[3] = matrix[2] * pfVar2[2] + matrix[10] * pfVar2[4] + pfVar2[3] * matrix[6];
      pfVar3[4] = pfVar2[7] * matrix[8] + pfVar2[6] * matrix[4] + pfVar2[5] * *matrix;
      pfVar3[5] = matrix[5] * pfVar2[6] + pfVar2[5] * matrix[1] + pfVar2[7] * matrix[9];
      pfVar4 = pfVar2 + 0xb;
      pfVar3[6] = matrix[2] * pfVar2[5] + matrix[10] * pfVar2[7] + pfVar2[6] * matrix[6];
      pfVar3[7] = pfVar2[10] * matrix[8] + pfVar2[9] * matrix[4] + pfVar2[8] * *matrix;
      pfVar3[8] = matrix[5] * pfVar2[9] + pfVar2[10] * matrix[9] + pfVar2[8] * matrix[1];
      pfVar3[9] = matrix[2] * pfVar2[8] + matrix[10] * pfVar2[10] + pfVar2[9] * matrix[6];
      if (extraFloatCount_ != 0) {
        iVar1 = 0x28 - (int)pfVar4;
        iVar5 = extraFloatCount_;
        do {
          iVar5 = iVar5 + -1;
          *(float *)((int)pfVar3 + iVar1 + (int)pfVar4) = *pfVar4;
          pfVar4 = pfVar4 + 1;
        } while (iVar5 != 0);
      }
      pfVar2 = (float *)((int)pfVar2 + srcStride_);
      pfVar3 = (float *)((int)pfVar3 + dstStride_);
    } while (count_ != 0);
  }
  return;
}

