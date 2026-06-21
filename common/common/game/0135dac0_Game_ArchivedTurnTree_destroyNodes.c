// addr: 0x0135dac0
// name: Game_ArchivedTurnTree_destroyNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_ArchivedTurnTree_destroyNodes(void * node) */

void Game_ArchivedTurnTree_destroyNodes(void *node)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively destroys an rb-tree node chain unless it reaches the sentinel
                       flag at +0x21, frees a dynamic member at +0x14, then frees the node. In Game
                       destructor this tree is cleared immediately after the archived-turn deletion
                       loop. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167e656;
  local_c = ExceptionList;
  if (*(char *)((int)node + 0x21) != '\0') {
    return;
  }
  ExceptionList = &local_c;
  Game_ArchivedTurnTree_destroyNodes(*(void **)((int)node + 8));
  local_4 = 0xffffffff;
  if (*(void **)((int)node + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)node + 0x14));
  }
  *(undefined4 *)((int)node + 0x14) = 0;
  *(undefined4 *)((int)node + 0x18) = 0;
  *(undefined4 *)((int)node + 0x1c) = 0;
                    /* WARNING: Subroutine does not return */
  _free(node);
}

