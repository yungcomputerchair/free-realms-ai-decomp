// addr: 0x00f3d1b0
// name: SkinningTransform_transform4VectorsSingleMatrixAligned
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SkinningTransform_transform4VectorsSingleMatrixAligned(int count_, float
   * src, void * dst, void * matrixOrRemap, int matrixBase_) */

void __cdecl
SkinningTransform_transform4VectorsSingleMatrixAligned
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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int in_stack_00000018;
  int in_stack_0000001c;
  
                    /* Implements the aligned fast path for single-matrix 4-vector skinning
                       transform; if the matrix base is unaligned it delegates to existing fallback
                       at 00f36950. */
  if (((uint)matrixOrRemap & 0xf) != 0) {
    SkinningTransform_transform4VectorsSingleMatrix
              (count_,src,dst,matrixOrRemap,2,in_stack_00000018,in_stack_0000001c);
    return;
  }
  fVar9 = *(float *)matrixOrRemap;
  fVar10 = *(float *)((int)matrixOrRemap + 4);
  fVar11 = *(float *)((int)matrixOrRemap + 8);
  fVar12 = *(float *)((int)matrixOrRemap + 0x10);
  fVar13 = *(float *)((int)matrixOrRemap + 0x14);
  fVar14 = *(float *)((int)matrixOrRemap + 0x18);
  fVar15 = *(float *)((int)matrixOrRemap + 0x20);
  fVar16 = *(float *)((int)matrixOrRemap + 0x24);
  fVar17 = *(float *)((int)matrixOrRemap + 0x28);
  fVar18 = *(float *)((int)matrixOrRemap + 0x30);
  fVar19 = *(float *)((int)matrixOrRemap + 0x34);
  fVar20 = *(float *)((int)matrixOrRemap + 0x38);
  for (; count_ != 0; count_ = count_ + -1) {
    fVar7 = src[0xc];
    fVar8 = src[0xd];
    fVar1 = *src;
    fVar2 = src[1];
    fVar3 = src[2];
    fVar4 = src[3];
    fVar5 = src[4];
    fVar6 = src[5];
    *(ulonglong *)dst =
         CONCAT44(fVar1 * fVar10 + fVar19 + fVar2 * fVar13 + fVar3 * fVar16,
                  fVar1 * fVar9 + fVar18 + fVar2 * fVar12 + fVar3 * fVar15);
    *(float *)((int)dst + 8) = fVar1 * fVar11 + fVar20 + fVar2 * fVar14 + fVar3 * fVar17;
    *(ulonglong *)((int)dst + 0xc) =
         CONCAT44(fVar4 * fVar10 + fVar5 * fVar13 + fVar6 * fVar16,
                  fVar4 * fVar9 + fVar5 * fVar12 + fVar6 * fVar15);
    *(float *)((int)dst + 0x14) = fVar4 * fVar11 + fVar5 * fVar14 + fVar6 * fVar17;
    fVar1 = src[6];
    fVar2 = src[7];
    fVar3 = src[8];
    fVar4 = src[9];
    fVar5 = src[10];
    fVar6 = src[0xb];
    *(ulonglong *)((int)dst + 0x18) =
         CONCAT44(fVar1 * fVar10 + fVar2 * fVar13 + fVar3 * fVar16,
                  fVar1 * fVar9 + fVar2 * fVar12 + fVar3 * fVar15);
    *(float *)((int)dst + 0x20) = fVar1 * fVar11 + fVar2 * fVar14 + fVar3 * fVar17;
    *(ulonglong *)((int)dst + 0x24) =
         CONCAT44(fVar4 * fVar10 + fVar5 * fVar13 + fVar6 * fVar16,
                  fVar4 * fVar9 + fVar5 * fVar12 + fVar6 * fVar15);
    *(float *)((int)dst + 0x2c) = fVar4 * fVar11 + fVar5 * fVar14 + fVar6 * fVar17;
    *(float *)((int)dst + 0x30) = fVar7;
    src = src + 0xe;
    *(float *)((int)dst + 0x34) = fVar8;
    dst = (undefined8 *)((int)dst + 0x38);
  }
  return;
}

