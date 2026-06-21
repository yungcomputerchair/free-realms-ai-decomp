// addr: 0x01419a80
// name: MTRandom_seedByArray
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MTRandom_seedByArray(uint * seedArray, int seedCount_) */

void __thiscall MTRandom_seedByArray(void *this,uint *seedArray,int seedCount_)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int iVar2;
  int iVar3;
  
                    /* Initializes MT19937 state from an array of seed words using the standard
                       init-by-array constants 0x19660d and 0x5d588b65. */
  iVar3 = seedCount_;
  MTRandom_seed(this,0x12bd6aa);
  iVar2 = 0;
  iVar1 = 1;
  if (seedCount_ < 0x270) {
    seedCount_ = 0x270;
  }
  else if (seedCount_ == 0) goto LAB_01419b02;
  do {
    extraout_ECX[iVar1] =
         (((uint)extraout_ECX[iVar1 + -1] >> 0x1e ^ extraout_ECX[iVar1 + -1]) * 0x19660d ^
         extraout_ECX[iVar1]) + seedArray[iVar2] + iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 1;
    if (0x26f < iVar1) {
      *extraout_ECX = extraout_ECX[0x26f];
      iVar1 = 1;
    }
    if (iVar3 <= iVar2) {
      iVar2 = 0;
    }
    seedCount_ = seedCount_ + -1;
  } while (seedCount_ != 0);
LAB_01419b02:
  iVar3 = 0x26f;
  do {
    extraout_ECX[iVar1] =
         (((uint)extraout_ECX[iVar1 + -1] >> 0x1e ^ extraout_ECX[iVar1 + -1]) * 0x5d588b65 ^
         extraout_ECX[iVar1]) - iVar1;
    iVar1 = iVar1 + 1;
    if (0x26f < iVar1) {
      *extraout_ECX = extraout_ECX[0x26f];
      iVar1 = 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  extraout_ECX[0x270] = 1;
  extraout_ECX[0x271] = 1;
  *extraout_ECX = 0x80000000;
  return;
}

