// addr: 0x005f1d83
// name: RbTree_destroyAndFreeNode_005f1d83
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree_destroyAndFreeNode_005f1d83(void * node) */

void __fastcall RbTree_destroyAndFreeNode_005f1d83(void *node)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Recursively constructs iterators for child links, performs tree-node cleanup,
                       and frees the node. */
  RbTreeIterator_ctorFromNode(*(undefined4 *)((int)node + 4),node);
  RbTreeIterator_ctorFromNode(**(undefined4 **)((int)node + 4),node);
  StdRbTree_node16_eraseRange(&local_14,local_14,local_10,local_c,local_8);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)node + 4));
}

