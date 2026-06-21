// addr: 0x007d4130
// name: CurveKeyList_findSegmentForTime
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CurveKeyList_findSegmentForTime(void * this, float time_) */

int __thiscall CurveKeyList_findSegmentForTime(void *this,float time_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
                    /* Finds the keyframe segment index for a float time by scanning sorted
                       0x20-byte key records and returning the previous/key segment index. */
  iVar1 = *(int *)((int)this + 0xc);
  iVar3 = 0;
  if (3 < iVar1) {
    pfVar4 = (float *)(*(int *)((int)this + 8) + 0x24);
    do {
      if (time_ < pfVar4[-8]) goto LAB_007d41cb;
      if (time_ < *pfVar4) {
        return iVar3;
      }
      if (time_ < pfVar4[8]) {
        return iVar3 + 1;
      }
      if (time_ < pfVar4[0x10]) {
        iVar3 = iVar3 + 3;
        goto LAB_007d41cb;
      }
      iVar3 = iVar3 + 4;
      pfVar4 = pfVar4 + 0x20;
    } while (iVar3 < iVar1 + -3);
  }
  if (iVar3 < iVar1) {
    pfVar4 = (float *)(iVar3 * 0x20 + 4 + *(int *)((int)this + 8));
    iVar2 = iVar3;
    while (iVar3 = iVar2, *pfVar4 <= time_) {
      pfVar4 = pfVar4 + 8;
      iVar2 = iVar3 + 1;
      if (iVar1 <= iVar3 + 1) {
        return iVar3;
      }
    }
  }
LAB_007d41cb:
  return iVar3 + -1;
}

