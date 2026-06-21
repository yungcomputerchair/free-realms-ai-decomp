// addr: 0x00f36660
// name: SkinningTransform_transform3VectorsSingleMatrix
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SkinningTransform_transform3VectorsSingleMatrix(int count_, void * src,
   void * dst, float * matrix, int extraFloatCount_, int srcStride_, int dstStride_) */

void __cdecl
SkinningTransform_transform3VectorsSingleMatrix
          (int count_,void *src,void *dst,float *matrix,int extraFloatCount_,int srcStride_,
          int dstStride_)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
                    /* Transforms vertex records with position plus two 3-float vectors using a
                       single 4x4 matrix and copies optional trailing attributes. */
  if (count_ != 0) {
    pfVar3 = (float *)((int)dst + 8);
    pfVar2 = (float *)((int)src + 4);
    do {
      count_ = count_ + -1;
      pfVar3[-2] = *matrix * pfVar2[-1] + matrix[4] * *pfVar2 + matrix[8] * pfVar2[1] + matrix[0xc];
      pfVar3[-1] = pfVar2[-1] * matrix[1] + pfVar2[1] * matrix[9] + matrix[5] * *pfVar2 +
                   matrix[0xd];
      *pfVar3 = matrix[2] * pfVar2[-1] + matrix[10] * pfVar2[1] + matrix[6] * *pfVar2 + matrix[0xe];
      pfVar3[1] = matrix[4] * pfVar2[3] + *matrix * pfVar2[2] + matrix[8] * pfVar2[4];
      pfVar3[2] = matrix[5] * pfVar2[3] + pfVar2[2] * matrix[1] + pfVar2[4] * matrix[9];
      pfVar3[3] = matrix[6] * pfVar2[3] + matrix[2] * pfVar2[2] + matrix[10] * pfVar2[4];
      pfVar3[4] = matrix[4] * pfVar2[6] + *matrix * pfVar2[5] + matrix[8] * pfVar2[7];
      pfVar3[5] = matrix[5] * pfVar2[6] + pfVar2[5] * matrix[1] + pfVar2[7] * matrix[9];
      pfVar4 = pfVar2 + 8;
      pfVar3[6] = matrix[6] * pfVar2[6] + matrix[2] * pfVar2[5] + matrix[10] * pfVar2[7];
      if (extraFloatCount_ != 0) {
        iVar1 = 0x1c - (int)pfVar4;
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

