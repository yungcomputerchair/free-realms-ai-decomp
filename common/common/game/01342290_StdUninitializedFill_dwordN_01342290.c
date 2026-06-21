// addr: 0x01342290
// name: StdUninitializedFill_dwordN_01342290
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint * StdUninitializedFill_dwordN_01342290(uint * dst, int count, uint *
   value) */

uint * StdUninitializedFill_dwordN_01342290(uint *dst,int count,uint *value)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = dst;
  for (iVar1 = count; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *value;
    puVar2 = puVar2 + 1;
  }
  return dst + count;
}

