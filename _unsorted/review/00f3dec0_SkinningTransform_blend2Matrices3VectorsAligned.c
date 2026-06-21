// addr: 0x00f3dec0
// name: SkinningTransform_blend2Matrices3VectorsAligned
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void SkinningTransform_blend2Matrices3VectorsAligned(int count_, float * src,
   void * dst, void * matrixOrRemap, int matrixBase_) */

void __cdecl
SkinningTransform_blend2Matrices3VectorsAligned
          (int count_,float *src,void *dst,void *matrixOrRemap,int matrixBase_)

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
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int in_stack_0000001c;
  int in_stack_00000020;
  
                    /* Implements the aligned fast path blending two matrices for 3-vector skinning;
                       if the matrix base is unaligned it delegates to existing fallback at
                       00f37970. */
  if ((matrixBase_ & 0xfU) == 0) {
    for (; count_ != 0; count_ = count_ + -1) {
      fVar7 = src[10];
      fVar8 = src[0xb];
      pfVar12 = (float *)(*(int *)((int)matrixOrRemap + (uint)*(byte *)((int)src + 0xe) * 4) * 0x40
                         + matrixBase_);
      pfVar11 = (float *)(*(int *)((int)matrixOrRemap + (uint)*(byte *)((int)src + 0xf) * 4) * 0x40
                         + matrixBase_);
      fVar14 = (float)*(byte *)(src + 3) * _DAT_01872260;
      fVar13 = (float)*(byte *)((int)src + 0xd) * _DAT_01872260;
      fVar9 = pfVar12[0xe];
      fVar15 = fVar14 * *pfVar12 + fVar13 * *pfVar11;
      fVar16 = fVar14 * pfVar12[1] + fVar13 * pfVar11[1];
      fVar17 = fVar14 * pfVar12[2] + fVar13 * pfVar11[2];
      fVar18 = fVar14 * pfVar12[4] + fVar13 * pfVar11[4];
      fVar19 = fVar14 * pfVar12[5] + fVar13 * pfVar11[5];
      fVar20 = fVar14 * pfVar12[6] + fVar13 * pfVar11[6];
      fVar21 = fVar14 * pfVar12[8] + fVar13 * pfVar11[8];
      fVar22 = fVar14 * pfVar12[9] + fVar13 * pfVar11[9];
      fVar23 = fVar14 * pfVar12[10] + fVar13 * pfVar11[10];
      fVar10 = pfVar11[0xe];
      fVar1 = *src;
      fVar2 = src[1];
      fVar3 = src[2];
      fVar4 = src[4];
      fVar5 = src[5];
      fVar6 = src[6];
      *(ulonglong *)dst =
           CONCAT44(fVar1 * fVar16 + fVar14 * pfVar12[0xd] + fVar13 * pfVar11[0xd] + fVar2 * fVar19
                    + fVar3 * fVar22,
                    fVar1 * fVar15 + fVar14 * pfVar12[0xc] + fVar13 * pfVar11[0xc] + fVar2 * fVar18
                    + fVar3 * fVar21);
      *(float *)((int)dst + 8) =
           fVar1 * fVar17 + fVar14 * fVar9 + fVar13 * fVar10 + fVar2 * fVar20 + fVar3 * fVar23;
      *(ulonglong *)((int)dst + 0xc) =
           CONCAT44(fVar4 * fVar16 + fVar5 * fVar19 + fVar6 * fVar22,
                    fVar4 * fVar15 + fVar5 * fVar18 + fVar6 * fVar21);
      *(float *)((int)dst + 0x14) = fVar4 * fVar17 + fVar5 * fVar20 + fVar6 * fVar23;
      fVar1 = src[7];
      fVar2 = src[8];
      fVar3 = src[9];
      *(ulonglong *)((int)dst + 0x18) =
           CONCAT44(fVar1 * fVar16 + fVar2 * fVar19 + fVar3 * fVar22,
                    fVar1 * fVar15 + fVar2 * fVar18 + fVar3 * fVar21);
      *(float *)((int)dst + 0x20) = fVar1 * fVar17 + fVar2 * fVar20 + fVar3 * fVar23;
      *(float *)((int)dst + 0x24) = fVar7;
      src = src + 0xc;
      *(float *)((int)dst + 0x28) = fVar8;
      dst = (undefined8 *)((int)dst + 0x2c);
    }
    return;
  }
  SkinningTransform_blend2Matrices3Vectors
            (count_,src,dst,matrixOrRemap,(float *)matrixBase_,2,in_stack_0000001c,in_stack_00000020
            );
  return;
}

