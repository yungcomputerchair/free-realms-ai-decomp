// addr: 0x01419c80
// name: MTRandom_getInt31
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint MTRandom_getInt31(void * this) */

uint __fastcall MTRandom_getInt31(void *this)

{
  int *piVar1;
  uint uVar2;
  
                    /* Returns the next non-negative 31-bit random integer by taking a tempered
                       Mersenne Twister output and shifting off the sign bit. Used by
                       MTRandom_getIntBelow. */
  piVar1 = (int *)((int)this + 0x9c0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    MTRandom_reloadState(this);
  }
  uVar2 = **(uint **)((int)this + 0x9c8);
  *(uint **)((int)this + 0x9c8) = *(uint **)((int)this + 0x9c8) + 1;
  uVar2 = uVar2 ^ uVar2 >> 0xb;
  uVar2 = uVar2 ^ (uVar2 & 0xff3a58ad) << 7;
  uVar2 = uVar2 ^ (uVar2 & 0xffffdf8c) << 0xf;
  return (uVar2 >> 0x12 ^ uVar2) >> 1;
}

