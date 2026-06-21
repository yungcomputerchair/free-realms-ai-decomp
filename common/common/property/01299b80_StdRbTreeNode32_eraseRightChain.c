// addr: 0x01299b80
// name: StdRbTreeNode32_eraseRightChain
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeNode32_eraseRightChain(void * node) */

void StdRbTreeNode32_eraseRightChain(void *node)

{
                    /* Recursively erases the right subtree/chain for rb-tree nodes using the nil
                       flag at offset 0x1d, then frees the current node. This helper is used during
                       tree destruction for the 32-byte node layout. */
  if (*(char *)((int)node + 0x1d) == '\0') {
    StdRbTreeNode32_eraseRightChain(*(void **)((int)node + 8));
                    /* WARNING: Subroutine does not return */
    _free(node);
  }
  return;
}

