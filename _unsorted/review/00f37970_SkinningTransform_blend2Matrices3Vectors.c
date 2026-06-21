// addr: 0x00f37970
// name: SkinningTransform_blend2Matrices3Vectors
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void SkinningTransform_blend2Matrices3Vectors(int count_, void * src, void *
   dst, int * remap, float * matrixPalette, int extraFloatCount_, int srcStride_, int dstStride_) */

void __cdecl
SkinningTransform_blend2Matrices3Vectors
          (int count_,void *src,void *dst,int *remap,float *matrixPalette,int extraFloatCount_,
          int srcStride_,int dstStride_)

{
  float fVar1;
  int iVar2;
  byte *pbVar3;
  float *pfVar4;
  byte *pbVar5;
  float *pfVar6;
  int iVar7;
  
                    /* Blends two palette matrices by byte weights from each source record,
                       transforms position plus two vectors, and copies trailing attributes. */
  if (count_ != 0) {
    pfVar6 = (float *)((int)dst + 8);
    pbVar3 = (byte *)((int)src + 0xc);
    do {
      pfVar4 = matrixPalette + remap[pbVar3[2]] * 0x10;
      count_ = count_ + -1;
      fVar1 = (float)*pbVar3 * DAT_017f1ae4;
      _DAT_01c00ccc = matrixPalette + remap[pbVar3[3]] * 0x10;
      _DAT_01c00cc8 = (float)pbVar3[1] * DAT_017f1ae4;
      _DAT_01c00c88 = _DAT_01c00cc8 * *_DAT_01c00ccc + fVar1 * *pfVar4;
      _DAT_01c00c8c = _DAT_01c00ccc[1] * _DAT_01c00cc8 + pfVar4[1] * fVar1;
      _DAT_01c00c90 = _DAT_01c00ccc[2] * _DAT_01c00cc8 + pfVar4[2] * fVar1;
      _DAT_01c00c94 = _DAT_01c00ccc[3] * _DAT_01c00cc8 + pfVar4[3] * fVar1;
      _DAT_01c00c98 = _DAT_01c00ccc[4] * _DAT_01c00cc8 + pfVar4[4] * fVar1;
      _DAT_01c00c9c = _DAT_01c00ccc[5] * _DAT_01c00cc8 + pfVar4[5] * fVar1;
      _DAT_01c00ca0 = _DAT_01c00ccc[6] * _DAT_01c00cc8 + pfVar4[6] * fVar1;
      _DAT_01c00ca4 = _DAT_01c00ccc[7] * _DAT_01c00cc8 + pfVar4[7] * fVar1;
      _DAT_01c00ca8 = _DAT_01c00ccc[8] * _DAT_01c00cc8 + pfVar4[8] * fVar1;
      _DAT_01c00cac = _DAT_01c00ccc[9] * _DAT_01c00cc8 + pfVar4[9] * fVar1;
      _DAT_01c00cb0 = _DAT_01c00ccc[10] * _DAT_01c00cc8 + pfVar4[10] * fVar1;
      _DAT_01c00cb4 = _DAT_01c00ccc[0xb] * _DAT_01c00cc8 + pfVar4[0xb] * fVar1;
      _DAT_01c00cb8 = _DAT_01c00ccc[0xc] * _DAT_01c00cc8 + pfVar4[0xc] * fVar1;
      _DAT_01c00cbc = _DAT_01c00ccc[0xd] * _DAT_01c00cc8 + pfVar4[0xd] * fVar1;
      _DAT_01c00cc0 = _DAT_01c00ccc[0xe] * _DAT_01c00cc8 + pfVar4[0xe] * fVar1;
      _DAT_01c00cc4 = _DAT_01c00ccc[0xf] * _DAT_01c00cc8 + pfVar4[0xf] * fVar1;
      pfVar6[-2] = _DAT_01c00cb8 +
                   _DAT_01c00c88 * *(float *)(pbVar3 + -0xc) +
                   _DAT_01c00ca8 * *(float *)(pbVar3 + -4) + *(float *)(pbVar3 + -8) * _DAT_01c00c98
      ;
      pfVar6[-1] = _DAT_01c00c8c * *(float *)(pbVar3 + -0xc) +
                   *(float *)(pbVar3 + -8) * _DAT_01c00c9c + *(float *)(pbVar3 + -4) * _DAT_01c00cac
                   + _DAT_01c00cbc;
      pbVar5 = pbVar3 + 0x1c;
      *pfVar6 = _DAT_01c00c90 * *(float *)(pbVar3 + -0xc) +
                *(float *)(pbVar3 + -8) * _DAT_01c00ca0 + *(float *)(pbVar3 + -4) * _DAT_01c00cb0 +
                _DAT_01c00cc0;
      pfVar6[1] = *(float *)(pbVar3 + 4) * _DAT_01c00c88 +
                  *(float *)(pbVar3 + 8) * _DAT_01c00c98 + *(float *)(pbVar3 + 0xc) * _DAT_01c00ca8;
      pfVar6[2] = *(float *)(pbVar3 + 4) * _DAT_01c00c8c +
                  *(float *)(pbVar3 + 8) * _DAT_01c00c9c + *(float *)(pbVar3 + 0xc) * _DAT_01c00cac;
      pfVar6[3] = *(float *)(pbVar3 + 4) * _DAT_01c00c90 +
                  *(float *)(pbVar3 + 8) * _DAT_01c00ca0 + *(float *)(pbVar3 + 0xc) * _DAT_01c00cb0;
      pfVar6[4] = _DAT_01c00c88 * *(float *)(pbVar3 + 0x10) +
                  _DAT_01c00c98 * *(float *)(pbVar3 + 0x14) +
                  _DAT_01c00ca8 * *(float *)(pbVar3 + 0x18);
      pfVar6[5] = _DAT_01c00c8c * *(float *)(pbVar3 + 0x10) +
                  _DAT_01c00c9c * *(float *)(pbVar3 + 0x14) +
                  _DAT_01c00cac * *(float *)(pbVar3 + 0x18);
      pfVar6[6] = _DAT_01c00c90 * *(float *)(pbVar3 + 0x10) +
                  _DAT_01c00ca0 * *(float *)(pbVar3 + 0x14) +
                  _DAT_01c00cb0 * *(float *)(pbVar3 + 0x18);
      if (extraFloatCount_ != 0) {
        iVar2 = 0x1c - (int)pbVar5;
        iVar7 = extraFloatCount_;
        do {
          iVar7 = iVar7 + -1;
          *(undefined4 *)(pbVar5 + (int)pfVar6 + iVar2) = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
        } while (iVar7 != 0);
      }
      pbVar3 = pbVar3 + srcStride_;
      pfVar6 = (float *)((int)pfVar6 + dstStride_);
    } while (count_ != 0);
  }
  return;
}

