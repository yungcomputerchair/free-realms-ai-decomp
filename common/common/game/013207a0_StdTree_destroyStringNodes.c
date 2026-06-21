// addr: 0x013207a0
// name: StdTree_destroyStringNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_destroyStringNodes(void * node) */

void StdTree_destroyStringNodes(void *node)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively destroys a tree node's right subtree, frees an inline/heap
                       std::string payload, and frees the node unless it is the sentinel. The
                       sentinel test is the byte at offset 0x2d. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678be3;
  local_c = ExceptionList;
  if (*(char *)((int)node + 0x2d) != '\0') {
    return;
  }
  ExceptionList = &local_c;
  StdTree_destroyStringNodes(*(void **)((int)node + 8));
  local_4 = 0xffffffff;
  if (0xf < *(uint *)((int)node + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)node + 0x10));
  }
  *(undefined4 *)((int)node + 0x24) = 0xf;
  *(undefined4 *)((int)node + 0x20) = 0;
  *(undefined1 *)((int)node + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  _free(node);
}

