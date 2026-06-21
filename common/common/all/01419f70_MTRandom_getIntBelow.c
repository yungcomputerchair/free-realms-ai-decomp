// addr: 0x01419f70
// name: MTRandom_getIntBelow
// subsystem: common/common/all
// source (binary assert): common/common/all/MTRandom.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int MTRandom_getIntBelow(void * this, uint upperBound_) */

int __thiscall MTRandom_getIntBelow(void *this,uint upperBound_)

{
  int *piVar1;
  void *this_00;
  uint uVar2;
  int highDword_;
  int iVar3;
  longlong lVar4;
  
                    /* Returns a random integer in [0, upperBound), using a fast multiply path for
                       power-of-two bounds and rejection sampling otherwise; tracks draw count on
                       the wrapper object. */
  if (*(int *)this == 0) {
    FUN_012f5a60("mSource","..\\common\\common\\all\\MTRandom.cpp",0x127);
  }
  if (0 < (int)upperBound_) {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    if ((-upperBound_ & upperBound_) != upperBound_) {
      do {
        this_00 = *(void **)this;
        piVar1 = (int *)((int)this_00 + 0x9c0);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          MTRandom_reloadState(this_00);
        }
        uVar2 = **(uint **)((int)this_00 + 0x9c8);
        uVar2 = uVar2 ^ uVar2 >> 0xb;
        *(uint **)((int)this_00 + 0x9c8) = *(uint **)((int)this_00 + 0x9c8) + 1;
        uVar2 = uVar2 ^ (uVar2 & 0xff3a58ad) << 7;
        uVar2 = uVar2 ^ (uVar2 & 0xffffdf8c) << 0xf;
        uVar2 = (uVar2 >> 0x12 ^ uVar2) >> 1;
        iVar3 = (int)((longlong)(ulonglong)uVar2 % (longlong)(int)upperBound_);
      } while ((int)((uVar2 - iVar3) + -1 + upperBound_) < 0);
      return iVar3;
    }
    uVar2 = MTRandom_getInt31(*(void **)this);
    __allmul(uVar2,0,upperBound_,(int)upperBound_ >> 0x1f);
    lVar4 = __allshr(0x1f,highDword_);
    return (int)lVar4;
  }
  return 0;
}

