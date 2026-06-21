// addr: 0x00f3cd60
// name: SkinningTransform_transform3VectorsIndexedAligned
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SkinningTransform_transform3VectorsIndexedAligned(int count_, float *
   src, void * dst, void * matrixOrRemap, int matrixBase_) */

void __cdecl
SkinningTransform_transform3VectorsIndexedAligned
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
  float *pfVar21;
  int in_stack_0000001c;
  int in_stack_00000020;
  
                    /* Implements the aligned fast path for indexed 3-vector skinning transform; if
                       the matrix base is unaligned it delegates to existing fallback at 00f36500.
                        */
  if ((matrixBase_ & 0xfU) != 0) {
    SkinningTransform_transform3VectorsIndexed
              (count_,src,dst,matrixOrRemap,(float *)matrixBase_,2,in_stack_0000001c,
               in_stack_00000020);
    return;
  }
  pfVar21 = (float *)(*(int *)matrixOrRemap * 0x40 + matrixBase_);
  fVar9 = *pfVar21;
  fVar10 = pfVar21[1];
  fVar11 = pfVar21[2];
  fVar12 = pfVar21[4];
  fVar13 = pfVar21[5];
  fVar14 = pfVar21[6];
  fVar15 = pfVar21[8];
  fVar16 = pfVar21[9];
  fVar17 = pfVar21[10];
  fVar18 = pfVar21[0xc];
  fVar19 = pfVar21[0xd];
  fVar20 = pfVar21[0xe];
  for (; count_ != 0; count_ = count_ + -1) {
    fVar7 = src[9];
    fVar8 = src[10];
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
    *(ulonglong *)((int)dst + 0x18) =
         CONCAT44(fVar1 * fVar10 + fVar2 * fVar13 + fVar3 * fVar16,
                  fVar1 * fVar9 + fVar2 * fVar12 + fVar3 * fVar15);
    *(float *)((int)dst + 0x20) = fVar1 * fVar11 + fVar2 * fVar14 + fVar3 * fVar17;
    *(float *)((int)dst + 0x24) = fVar7;
    src = src + 0xb;
    *(float *)((int)dst + 0x28) = fVar8;
    dst = (undefined8 *)((int)dst + 0x2c);
  }
  return;
}

