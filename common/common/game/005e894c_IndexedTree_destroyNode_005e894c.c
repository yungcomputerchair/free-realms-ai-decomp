// addr: 0x005e894c
// name: IndexedTree_destroyNode_005e894c
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IndexedTree_destroyNode_005e894c(void * node) */

void __fastcall IndexedTree_destroyNode_005e894c(void *node)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Destroys a node with two indexed child/link fields and runs a node cleanup
                       helper. */
  CheckedIndexIterator_ctor(*(undefined4 *)((int)node + 8),node);
  CheckedIndexIterator_ctor(*(undefined4 *)((int)node + 4),node);
  FUN_005e7279(&local_14,local_14,local_10,local_c,local_8);
  return;
}

