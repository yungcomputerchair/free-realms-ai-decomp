// addr: 0x013616f0
// name: Game_ArchivedTurnTree_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_ArchivedTurnTree_clear(int tree) */

void __fastcall Game_ArchivedTurnTree_clear(int tree)

{
                    /* Clears the archived-turn rb-tree by destroying nodes from header->parent and
                       resetting header links and size to empty. */
  Game_ArchivedTurnTree_destroyNodes(*(void **)(*(int *)(tree + 4) + 4));
  *(int *)(*(int *)(tree + 4) + 4) = *(int *)(tree + 4);
  *(undefined4 *)(tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)(tree + 4) = *(undefined4 *)(tree + 4);
  *(int *)(*(int *)(tree + 4) + 8) = *(int *)(tree + 4);
  return;
}

