// addr: 0x01361720
// name: Game_RbTree_clearNodes21
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_RbTree_clearNodes21(int tree) */

void __fastcall Game_RbTree_clearNodes21(int tree)

{
                    /* Clears an rb-tree whose nodes use a sentinel byte at +0x21, then resets
                       header links and node count. The value type is not identified. */
  FUN_0135db60(*(undefined4 *)(*(int *)(tree + 4) + 4));
  *(int *)(*(int *)(tree + 4) + 4) = *(int *)(tree + 4);
  *(undefined4 *)(tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)(tree + 4) = *(undefined4 *)(tree + 4);
  *(int *)(*(int *)(tree + 4) + 8) = *(int *)(tree + 4);
  return;
}

