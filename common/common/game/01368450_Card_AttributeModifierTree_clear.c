// addr: 0x01368450
// name: Card_AttributeModifierTree_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_AttributeModifierTree_clear(int tree_) */

void __fastcall Card_AttributeModifierTree_clear(int tree_)

{
                    /* Clears an attribute-modifier rb-tree by destroying all nodes through
                       Card_AttributeModifierTree_destroyNodes and resetting the header links/count
                       to empty. */
  Card_AttributeModifierTree_destroyNodes(*(void **)(*(int *)(tree_ + 4) + 4));
  *(int *)(*(int *)(tree_ + 4) + 4) = *(int *)(tree_ + 4);
  *(undefined4 *)(tree_ + 8) = 0;
  *(undefined4 *)*(undefined4 *)(tree_ + 4) = *(undefined4 *)(tree_ + 4);
  *(int *)(*(int *)(tree_ + 4) + 8) = *(int *)(tree_ + 4);
  return;
}

