// addr: 0x006acd1a
// name: RbTree_clearAndReturnTrue_006acd1a
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool RbTree_clearAndReturnTrue_006acd1a(void) */

bool RbTree_clearAndReturnTrue_006acd1a(void)

{
  void *in_ECX;
  
                    /* Clears an rb-tree/container and returns true. */
  RbTree_clear_006a((void *)((int)in_ECX + 0x24));
  BlockAllocator8192_trimFreeBlocks(in_ECX);
  return true;
}

