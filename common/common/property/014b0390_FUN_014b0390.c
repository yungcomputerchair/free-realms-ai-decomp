// addr: 0x014b0390
// name: FUN_014b0390
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_014b0390(uint first, uint second) */

void FUN_014b0390(uint first,uint second)

{
  int in_ECX;
  
                    /* Packs two arguments into a local two-dword structure and passes its address
                       to FUN_0051ca73. This looks like a small adapter/thunk, but the target API
                       meaning is not identifiable here. */
  StdRbTree_insertValueMaybeRebalance((void *)(in_ECX + 4),&stack0xfffffff8,(void *)first);
  return;
}

