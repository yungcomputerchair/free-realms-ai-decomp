// addr: 0x0137fe60
// name: IntToObjectTree_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntToObjectTree_clear(int tree_) */

void __fastcall IntToObjectTree_clear(int tree_)

{
                    /* Clears an rb-tree by destroying all nodes via FUN_0137fbe0 and resetting
                       header links/count. */
  IntToObjectTree_destroySubtree(*(void **)(*(int *)(tree_ + 4) + 4));
  *(int *)(*(int *)(tree_ + 4) + 4) = *(int *)(tree_ + 4);
  *(undefined4 *)(tree_ + 8) = 0;
  *(undefined4 *)*(undefined4 *)(tree_ + 4) = *(undefined4 *)(tree_ + 4);
  *(int *)(*(int *)(tree_ + 4) + 8) = *(int *)(tree_ + 4);
  return;
}

