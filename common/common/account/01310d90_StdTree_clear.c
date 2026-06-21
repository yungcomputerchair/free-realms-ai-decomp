// addr: 0x01310d90
// name: StdTree_clear
// subsystem: common/common/account
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_clear(void * tree) */

void __fastcall StdTree_clear(void *tree)

{
                    /* Clears a std::_Tree-like container by erasing the root subtree and resetting
                       the sentinel's parent/left/right links and element count to the empty state.
                        */
  StdTree_eraseSubtreeNodes(*(void **)(*(int *)((int)tree + 4) + 4));
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  return;
}

