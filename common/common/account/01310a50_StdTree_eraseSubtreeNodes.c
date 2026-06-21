// addr: 0x01310a50
// name: StdTree_eraseSubtreeNodes
// subsystem: common/common/account
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_eraseSubtreeNodes(void * node) */

void StdTree_eraseSubtreeNodes(void *node)

{
                    /* Recursively frees non-sentinel std::_Tree nodes, using the sentinel
                       color/isnil byte at offset 0x15 to stop recursion. */
  if (*(char *)((int)node + 0x15) == '\0') {
    StdTree_eraseSubtreeNodes(*(void **)((int)node + 8));
                    /* WARNING: Subroutine does not return */
    _free(node);
  }
  return;
}

