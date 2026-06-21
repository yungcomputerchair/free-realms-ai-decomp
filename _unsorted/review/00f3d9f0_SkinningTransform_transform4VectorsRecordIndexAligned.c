// addr: 0x00f3d9f0
// name: SkinningTransform_transform4VectorsRecordIndexAligned
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SkinningTransform_transform4VectorsRecordIndexAligned(int count_, float *
   src, void * dst, void * matrixOrRemap, int matrixBase_) */

void __cdecl
SkinningTransform_transform4VectorsRecordIndexAligned
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
  float *pfVar19;
  int in_stack_00000018;
  int in_stack_0000001c;
  
                    /* Implements the aligned fast path using the record-embedded matrix index for
                       4-vector skinning; if the matrix base is unaligned it delegates to existing
                       fallback at 00f37150. */
  if (((uint)matrixOrRemap & 0xf) == 0) {
    for (; count_ != 0; count_ = count_ + -1) {
      fVar7 = src[0xd];
      fVar8 = src[0xe];
      pfVar19 = (float *)((int)src[3] * 0x40 + (int)matrixOrRemap);
      fVar9 = *pfVar19;
      fVar10 = pfVar19[1];
      fVar11 = pfVar19[2];
      fVar12 = pfVar19[4];
      fVar13 = pfVar19[5];
      fVar14 = pfVar19[6];
      fVar15 = pfVar19[8];
      fVar16 = pfVar19[9];
      fVar17 = pfVar19[10];
      fVar18 = pfVar19[0xe];
      fVar1 = *src;
      fVar2 = src[1];
      fVar3 = src[2];
      fVar4 = src[4];
      fVar5 = src[5];
      fVar6 = src[6];
      *(ulonglong *)dst =
           CONCAT44(fVar1 * fVar10 + pfVar19[0xd] + fVar2 * fVar13 + fVar3 * fVar16,
                    fVar1 * fVar9 + pfVar19[0xc] + fVar2 * fVar12 + fVar3 * fVar15);
      *(float *)((int)dst + 8) = fVar1 * fVar11 + fVar18 + fVar2 * fVar14 + fVar3 * fVar17;
      *(ulonglong *)((int)dst + 0xc) =
           CONCAT44(fVar4 * fVar10 + fVar5 * fVar13 + fVar6 * fVar16,
                    fVar4 * fVar9 + fVar5 * fVar12 + fVar6 * fVar15);
      *(float *)((int)dst + 0x14) = fVar4 * fVar11 + fVar5 * fVar14 + fVar6 * fVar17;
      fVar1 = src[7];
      fVar2 = src[8];
      fVar3 = src[9];
      fVar4 = src[10];
      fVar5 = src[0xb];
      fVar6 = src[0xc];
      *(ulonglong *)((int)dst + 0x18) =
           CONCAT44(fVar1 * fVar10 + fVar2 * fVar13 + fVar3 * fVar16,
                    fVar1 * fVar9 + fVar2 * fVar12 + fVar3 * fVar15);
      *(float *)((int)dst + 0x20) = fVar1 * fVar11 + fVar2 * fVar14 + fVar3 * fVar17;
      *(ulonglong *)((int)dst + 0x24) =
           CONCAT44(fVar4 * fVar10 + fVar5 * fVar13 + fVar6 * fVar16,
                    fVar4 * fVar9 + fVar5 * fVar12 + fVar6 * fVar15);
      *(float *)((int)dst + 0x2c) = fVar4 * fVar11 + fVar5 * fVar14 + fVar6 * fVar17;
      *(float *)((int)dst + 0x30) = fVar7;
      src = src + 0xf;
      *(float *)((int)dst + 0x34) = fVar8;
      dst = (undefined8 *)((int)dst + 0x38);
    }
    return;
  }
  SkinningTransform_transform4VectorsRecordIndex
            (count_,src,dst,matrixOrRemap,2,in_stack_00000018,in_stack_0000001c);
  return;
}

