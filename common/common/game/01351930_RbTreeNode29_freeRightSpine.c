// addr: 0x01351930
// name: RbTreeNode29_freeRightSpine
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeNode29_freeRightSpine(void * node) */

void RbTreeNode29_freeRightSpine(void *node)

{
                    /* Recursively frees the right-child chain/subtree for a red-black tree node
                       layout whose sentinel flag is at offset 0x1d. It stops at sentinel nodes and
                       frees each visited node. */
  if (*(char *)((int)node + 0x1d) == '\0') {
    RbTreeNode29_freeRightSpine(*(void **)((int)node + 8));
                    /* WARNING: Subroutine does not return */
    _free(node);
  }
  return;
}

