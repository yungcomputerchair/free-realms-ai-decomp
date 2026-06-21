// addr: 0x007db270
// name: CurveKeyList_insertVectorKey
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CurveKeyList_insertVectorKey(void * this, float time_, float * value4) */

int __thiscall CurveKeyList_insertVectorKey(void *this,float time_,float *value4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  
                    /* Finds the segment for a timestamp and inserts a new 0x20-byte curve key with
                       four value components if the time is not a duplicate and preserves ordering.
                        */
  iVar3 = CurveKeyList_findSegmentForTime(this,time_);
  iVar1 = iVar3 + 1;
  if (((iVar3 < 0) ||
      (pfVar2 = (float *)(iVar3 * 0x20 + 4 + *(int *)((int)this + 8)),
      *pfVar2 <= time_ && time_ != *pfVar2)) &&
     ((*(int *)((int)this + 0xc) <= iVar1 ||
      (time_ < *(float *)(iVar1 * 0x20 + 4 + *(int *)((int)this + 8)))))) {
    iVar3 = FUN_007daeb0(iVar1,1);
    *(float *)(iVar3 + 4) = time_;
    *(float *)(iVar3 + 0x10) = *value4;
    *(float *)(iVar3 + 0x14) = value4[1];
    *(float *)(iVar3 + 0x18) = value4[2];
    *(float *)(iVar3 + 0x1c) = value4[3];
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 0x20))();
    }
    return iVar1;
  }
  return -1;
}

