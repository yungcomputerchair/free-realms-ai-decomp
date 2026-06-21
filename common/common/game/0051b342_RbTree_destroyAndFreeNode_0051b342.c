// addr: 0x0051b342
// name: RbTree_destroyAndFreeNode_0051b342
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree_destroyAndFreeNode_0051b342(void * node) */

void __fastcall RbTree_destroyAndFreeNode_0051b342(void *node)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Recursively constructs iterators for both child links and frees the node
                       storage. No game class evidence; this is an STL/tree helper used by game
                       code. */
  CheckedTreeIterator_ctor(*(undefined4 *)((int)node + 4),node);
  CheckedTreeIterator_ctor(**(undefined4 **)((int)node + 4),node);
  FUN_005152ac(&local_14,local_14,local_10,local_c,local_8);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)node + 4));
}

