// addr: 0x01368db0
// name: Game_CommandTree_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_CommandTree_clear(int tree_) */

void __fastcall Game_CommandTree_clear(int tree_)

{
                    /* Clears a command/setup rb-tree by destroying nodes through
                       Game_CommandTree_destroyNodes and resetting header links/count. */
  Game_CommandTree_destroyNodes(*(void **)(*(int *)(tree_ + 4) + 4));
  *(int *)(*(int *)(tree_ + 4) + 4) = *(int *)(tree_ + 4);
  *(undefined4 *)(tree_ + 8) = 0;
  *(undefined4 *)*(undefined4 *)(tree_ + 4) = *(undefined4 *)(tree_ + 4);
  *(int *)(*(int *)(tree_ + 4) + 8) = *(int *)(tree_ + 4);
  return;
}

