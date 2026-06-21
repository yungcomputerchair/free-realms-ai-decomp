// addr: 0x005e8732
// name: StdVectorPair_clearAndFreeStorage_005e8732
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void StdVectorPair_clearAndFreeStorage_005e8732(void) */

void StdVectorPair_clearAndFreeStorage_005e8732(void)

{
  int in_ECX;
  
                    /* Clears/free-stores two vector-like members in sequence. Exact container owner
                       is unknown. */
  StdVector_clearAndFreeStorage_005e4773((void *)(in_ECX + 0x18));
  StdVector_clearStorage((void *)(in_ECX + 8));
  return;
}

