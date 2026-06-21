// addr: 0x01351a50
// name: RbTreeNode21_freeRightSpine
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeNode21_freeRightSpine(void * node) */

void RbTreeNode21_freeRightSpine(void *node)

{
                    /* Recursively frees the right-child chain/subtree for a red-black tree node
                       layout whose sentinel flag is at offset 0x15. It stops when the node is the
                       header/sentinel. */
  if (*(char *)((int)node + 0x15) == '\0') {
    RbTreeNode21_freeRightSpine(*(void **)((int)node + 8));
                    /* WARNING: Subroutine does not return */
    _free(node);
  }
  return;
}

