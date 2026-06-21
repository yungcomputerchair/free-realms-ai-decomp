// addr: 0x0133b510
// name: StdTree_clearNestedListNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_clearNestedListNodes(void * tree) */

void __fastcall StdTree_clearNestedListNodes(void *tree)

{
                    /* Clears a tree by destroying all non-sentinel nodes with 01336630, then resets
                       the header links and node count. The node destroyer also clears an embedded
                       list before freeing each node. */
  FUN_01336630(*(undefined4 *)(*(int *)((int)tree + 4) + 4));
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  return;
}

