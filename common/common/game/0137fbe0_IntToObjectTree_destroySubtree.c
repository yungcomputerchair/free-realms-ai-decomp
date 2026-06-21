// addr: 0x0137fbe0
// name: IntToObjectTree_destroySubtree
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntToObjectTree_destroySubtree(void * node) */

void IntToObjectTree_destroySubtree(void *node)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively destroys the right subtree of an int-to-object rb-tree node and
                       frees the node when it is not the sentinel. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01682496;
  local_c = ExceptionList;
  if (*(char *)((int)node + 0x1d) == '\0') {
    ExceptionList = &local_c;
    IntToObjectTree_destroySubtree(*(void **)((int)node + 8));
    local_4 = 0xffffffff;
    StdRbTree_destroyAndFree((void *)((int)node + 0x10));
                    /* WARNING: Subroutine does not return */
    _free(node);
  }
  return;
}

