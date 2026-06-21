// addr: 0x01419c30
// name: MTRandom_getUInt32
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint MTRandom_getUInt32(void * this) */

uint __fastcall MTRandom_getUInt32(void *this)

{
  int *piVar1;
  uint uVar2;
  
                    /* Returns the next tempered 32-bit value from the Mersenne Twister state,
                       reloading the state when the count reaches zero. Evidence is the standard MT
                       tempering constants and call to MTRandom_reloadState. */
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
  return uVar2 >> 0x12 ^ uVar2;
}

