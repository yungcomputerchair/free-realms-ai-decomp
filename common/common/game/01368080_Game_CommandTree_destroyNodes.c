// addr: 0x01368080
// name: Game_CommandTree_destroyNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_CommandTree_destroyNodes(void * node) */

void Game_CommandTree_destroyNodes(void *node)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively destroys rb-tree nodes with sentinel byte at +0x25, frees a
                       dynamic member at +0x18, zeroes its bounds, then frees the node. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167fcf1;
  local_c = ExceptionList;
  if (*(char *)((int)node + 0x25) != '\0') {
    return;
  }
  ExceptionList = &local_c;
  Game_CommandTree_destroyNodes(*(void **)((int)node + 8));
  local_4 = 0xffffffff;
  if (*(void **)((int)node + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)node + 0x18));
  }
  *(undefined4 *)((int)node + 0x18) = 0;
  *(undefined4 *)((int)node + 0x1c) = 0;
  *(undefined4 *)((int)node + 0x20) = 0;
                    /* WARNING: Subroutine does not return */
  _free(node);
}

