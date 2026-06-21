// addr: 0x01399180
// name: PropertyPair_dispatch
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyPair_dispatch(undefined4 first, undefined4 second) */

void PropertyPair_dispatch(void *first,undefined4 second)

{
  int in_ECX;
  
                    /* Builds a two-word local pair from its arguments and passes the pair address
                       to FUN_0051ca73. With no literals or typed callees, this appears to be a
                       small adapter for a pair/callback dispatch. */
  StdRbTree_insertValueMaybeRebalance((void *)(in_ECX + 0x104),&stack0xfffffff8,first);
  return;
}

