// addr: 0x00fd00c0
// name: FUN_00fd00c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00fd00c0(void * this, int index_, int value1_, int value2_) */

void __thiscall FUN_00fd00c0(void *this,int index_,int value1_,int value2_)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  
                    /* Stores per-index values for indices below 3, otherwise generates two
                       randomized float offsets and stores them in a larger indexed table. No class
                       evidence is present; likely graphics/animation state, not uploader. */
  if (index_ < 3) {
    *(int *)((int)this + index_ * 4 + 0x2f0) = value1_;
    *(int *)((int)this + index_ * 4 + 0x300) = value2_;
    return;
  }
  fVar1 = (float10)FUN_00d8d5ba();
  fVar2 = (float)fVar1;
  if ((float10)DAT_0187c02c <= fVar1) {
    if (DAT_0187c028 < fVar2) {
      fVar2 = fVar2 - DAT_017eb268;
    }
  }
  else {
    fVar2 = fVar2 + DAT_017eb268;
  }
  fVar1 = (float10)FUN_00d8d5ba();
  fVar3 = (float)fVar1;
  if ((float10)DAT_0187c02c <= fVar1) {
    if (DAT_0187c028 < fVar3) {
      fVar3 = fVar3 - DAT_017eb268;
    }
  }
  else {
    fVar3 = fVar3 + DAT_017eb268;
  }
  *(float *)(index_ * 0x40 + 0x304 + (int)this) = fVar3;
  *(float *)((index_ + 0xc) * 0x40 + (int)this) = fVar2;
  return;
}

