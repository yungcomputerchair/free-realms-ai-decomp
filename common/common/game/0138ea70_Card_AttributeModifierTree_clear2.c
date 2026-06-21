// addr: 0x0138ea70
// name: Card_AttributeModifierTree_clear2
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_AttributeModifierTree_clear(int tree_) */

void __fastcall Card_AttributeModifierTree_clear2(int tree_)

{
                    /* Clears a Card attribute-modifier rb-tree by destroying nodes with
                       FUN_0138d8c0 and resetting header links/count. [QA: distinct instantiation;
                       clears via different element dtor than Card_AttributeModifierTree_clear] */
  FUN_0138d8c0(*(undefined4 *)(*(int *)(tree_ + 4) + 4));
  *(int *)(*(int *)(tree_ + 4) + 4) = *(int *)(tree_ + 4);
  *(undefined4 *)(tree_ + 8) = 0;
  *(undefined4 *)*(undefined4 *)(tree_ + 4) = *(undefined4 *)(tree_ + 4);
  *(int *)(*(int *)(tree_ + 4) + 8) = *(int *)(tree_ + 4);
  return;
}

