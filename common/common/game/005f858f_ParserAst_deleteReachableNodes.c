// addr: 0x005f858f
// name: ParserAst_deleteReachableNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ParserAst_deleteReachableNodes(int *param_1)

{
  void *_Memory;
  bool bVar1;
  undefined4 *puVar2;
  undefined1 local_28 [4];
  undefined4 *local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Collects all reachable parser AST nodes from a root, destroys each node
                       payload, frees each node, clears the root vector, and nulls the root holder.
                       Evidence is recursive collector call followed by per-node destroy/free loop.
                        */
  if (*param_1 != 0) {
    RbTree_initHeader(local_28);
    ParserAst_collectReachableNodes(*param_1,local_28);
    CheckedTreeIterator_ctor_nodeFlag21A(local_24,local_28);
    local_14 = local_c;
    local_10 = local_8;
    CheckedTreeIterator_ctor_nodeFlag21A(*local_24,local_28);
    local_c = local_1c;
    local_8 = local_18;
    bVar1 = CheckedTreeIterator_equals_nodeFlag21A(&local_c,&local_14);
    while (!bVar1) {
      puVar2 = (undefined4 *)RbTreeIterator_getValue();
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        StdVectorPair_clearAndFreeStorage_005e8732();
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      RbTreeIterator_increment(&local_c);
      bVar1 = CheckedTreeIterator_equals_nodeFlag21A(&local_c,&local_14);
    }
    IndexedTree_destroyNode_005e894c(param_1 + 1);
    *param_1 = 0;
    CheckedTreeNode21A_destroyAndFree(local_28);
  }
  return;
}

