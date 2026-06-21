// addr: 0x01419b50
// name: MTRandom_reloadState
// subsystem: common/common/all
// source (binary assert): common/common/all/MTRandom.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MTRandom_reloadState(void * this) */

void __fastcall MTRandom_reloadState(void *this)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
                    /* Regenerates the 624-word Mersenne Twister state array, seeding with 0x1571
                       first if the generator was not initialized. */
  if (*(int *)((int)this + 0x9c4) == 0) {
    FUN_012f5a60("false","..\\common\\common\\all\\MTRandom.cpp",0x8d);
    MTRandom_seed(this,0x1571);
  }
  *(undefined4 *)((int)this + 0x9c0) = 0x270;
  *(void **)((int)this + 0x9c8) = this;
  iVar1 = 0xe3;
  puVar2 = this;
  do {
    puVar3 = puVar2 + 1;
    iVar1 = iVar1 + -1;
    *puVar2 = ((*puVar2 ^ puVar2[1]) & 0x7ffffffe ^ *puVar2) >> 1 ^
              -(uint)((puVar2[1] & 1) != 0) & 0x9908b0df ^ puVar2[0x18d];
    puVar2 = puVar3;
  } while (iVar1 != 0);
  iVar1 = 0x18c;
  do {
    puVar2 = puVar3;
    puVar3 = puVar2 + 1;
    iVar1 = iVar1 + -1;
    *puVar2 = ((*puVar2 ^ puVar2[1]) & 0x7ffffffe ^ *puVar2) >> 1 ^
              -(uint)((puVar2[1] & 1) != 0) & 0x9908b0df ^ puVar2[-0xe3];
  } while (iVar1 != 0);
  *puVar3 = ((*puVar3 ^ *(uint *)this) & 0x7ffffffe ^ *puVar3) >> 1 ^
            -(uint)((*(uint *)this & 1) != 0) & 0x9908b0df ^ puVar2[-0xe2];
  return;
}

