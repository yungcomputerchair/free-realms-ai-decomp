// addr: 0x01419a30
// name: MTRandom_seed
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MTRandom_seed(void * this, uint seedValue_) */

void __thiscall MTRandom_seed(void *this,uint seedValue_)

{
  int iVar1;
  uint *puVar2;
  
                    /* Seeds the Mersenne Twister state array using the standard 0x6c078965
                       recurrence and marks the generator initialized. */
  *(uint *)this = seedValue_;
  iVar1 = 1;
  puVar2 = this;
  do {
    puVar2[1] = (*puVar2 >> 0x1e ^ *puVar2) * 0x6c078965 + iVar1;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x270);
  *(undefined4 *)((int)this + 0x9c0) = 1;
  *(undefined4 *)((int)this + 0x9c4) = 1;
  return;
}

