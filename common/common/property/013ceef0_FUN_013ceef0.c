// addr: 0x013ceef0
// name: FUN_013ceef0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_013ceef0(void * arg) */

void FUN_013ceef0(void *arg)

{
  int in_ECX;
  
                    /* Initializes a small two-word stack object from the argument and passes it to
                       FUN_0051ca73. The purpose of the helper is not identifiable from this
                       isolated thunk. */
  StdRbTree_insertValueMaybeRebalance((void *)(in_ECX + 0x78),&stack0xfffffff8,arg);
  return;
}

