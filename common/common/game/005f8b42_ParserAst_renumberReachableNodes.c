// addr: 0x005f8b42
// name: ParserAst_renumberReachableNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ParserAst_renumberReachableNodes(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_28 [4];
  undefined4 *local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Builds the reachable-node set for a parser AST, iterates it, and writes
                       sequential indices into each node before clearing the temporary set. Evidence
                       is call to ParserAst_collectReachableNodes and per-node index assignment. */
  RbTree_initHeader(local_28);
  ParserAst_collectReachableNodes(*param_1,local_28);
  CheckedTreeIterator_ctor_nodeFlag21A(local_24,local_28);
  local_14 = local_c;
  local_10 = local_8;
  iVar3 = 0;
  CheckedTreeIterator_ctor_nodeFlag21A(*local_24,local_28);
  local_c = local_1c;
  local_8 = local_18;
  while( true ) {
    bVar1 = CheckedTreeIterator_equals_nodeFlag21A(&local_c,&local_14);
    if (bVar1) break;
    puVar2 = (undefined4 *)RbTreeIterator_getValue();
    *(int *)*puVar2 = iVar3;
    RbTreeIterator_increment(&local_c);
    iVar3 = iVar3 + 1;
  }
  CheckedTreeNode21A_destroyAndFree(local_28);
  return;
}

