// addr: 0x006aea3a
// name: RbTree_destroyAndFreeNode_006aea3a
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree_destroyAndFreeNode_006aea3a(void * node) */

void __fastcall RbTree_destroyAndFreeNode_006aea3a(void *node)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Recursively constructs iterators for child links, cleans up the node payload,
                       and frees the node. */
  RbTreeIterator_ctorFromNode_006a(*(undefined4 *)((int)node + 4),node);
  RbTreeIterator_ctorFromNode_006a(**(undefined4 **)((int)node + 4),node);
  RbTree006a_eraseRange(&local_14,local_14,local_10,local_c,local_8);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)node + 4));
}

