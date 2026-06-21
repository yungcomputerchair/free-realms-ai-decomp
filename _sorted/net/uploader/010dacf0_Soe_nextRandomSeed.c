// addr: 0x010dacf0
// name: Soe_nextRandomSeed
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Soe_nextRandomSeed(int * seed) */

void __cdecl Soe_nextRandomSeed(int *seed)

{
  int iVar1;
  int iVar2;
  
                    /* Advances an integer seed using the Park-Miller 16807 linear congruential
                       generator with modulus 0x7fffffff. Used by UDP manager and encryption setup
                       routines. */
  iVar1 = (*seed % 0x1f31d) * 0x41a7 + (*seed / 0x1f31d) * -0xb14;
  iVar2 = iVar1 + 0x7b;
  if (iVar2 < 1) {
    iVar2 = iVar1 + -0x7fffff86;
  }
  *seed = iVar2;
  return;
}

