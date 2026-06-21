// addr: 0x005f876d
// name: ParserAst_mergeRoots
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall ParserAst_mergeRoots(int *param_1,int *param_2)

{
  void *parent;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  bool unaff_DI;
  void *local_c;
  uint local_8;
  
                    /* Combines two parser AST root holders under newly allocated wrapper nodes,
                       detaching all children from the source roots and clearing the second root. It
                       allocates nodes and links children with FUN_005f52f1/FUN_005f5346. */
  if ((param_1 != param_2) && ((*param_1 != 0 || (*param_2 != 0)))) {
    parent = RbTreeNode_allocWithParent_005f52f1(param_1,(void *)0x0,unaff_DI);
    local_c = RbTreeNode_allocWithParent_005f52f1(param_1,(void *)0x0,unaff_DI);
    if ((void *)*param_1 != (void *)0x0) {
      RbTreeNode_link_005f5346(parent,(void *)0x0,(void *)*param_1);
      piVar5 = param_1 + 1;
      local_8 = 0;
      iVar1 = StdVectorDword_size(piVar5);
      if (iVar1 != 0) {
        do {
          puVar2 = (undefined4 *)StdVectorDword_at_005db38b(piVar5,local_8);
          RbTreeNode_link_005f5346((void *)*puVar2,(void *)0x0,local_c);
          piVar3 = (int *)StdVectorDword_at_005db38b(piVar5,local_8);
          local_8 = local_8 + 1;
          *(undefined4 *)(*piVar3 + 4) = 0;
          uVar4 = StdVectorDword_size(piVar5);
        } while (local_8 < uVar4);
      }
      IndexedTree_destroyNode_005e894c(piVar5);
    }
    if ((void *)*param_2 != (void *)0x0) {
      RbTreeNode_link_005f5346(parent,(void *)0x0,(void *)*param_2);
      piVar5 = param_2 + 1;
      local_8 = 0;
      iVar1 = StdVectorDword_size(piVar5);
      if (iVar1 != 0) {
        do {
          puVar2 = (undefined4 *)StdVectorDword_at_005db38b(piVar5,local_8);
          RbTreeNode_link_005f5346((void *)*puVar2,(void *)0x0,local_c);
          piVar3 = (int *)StdVectorDword_at_005db38b(piVar5,local_8);
          local_8 = local_8 + 1;
          *(undefined4 *)(*piVar3 + 4) = 0;
          uVar4 = StdVectorDword_size(piVar5);
        } while (local_8 < uVar4);
      }
      IndexedTree_destroyNode_005e894c(piVar5);
    }
    *param_1 = (int)parent;
    *(int *)((int)local_c + 4) = param_1[5];
    StdVectorDword_pushBack(param_1 + 1,(uint)&local_c);
    *param_2 = 0;
  }
  return;
}

