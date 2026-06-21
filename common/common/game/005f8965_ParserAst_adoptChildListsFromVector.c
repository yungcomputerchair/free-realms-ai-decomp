// addr: 0x005f8965
// name: ParserAst_adoptChildListsFromVector
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ParserAst_adoptChildListsFromVector(undefined4 *param_1)

{
  void *parent;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  bool unaff_DI;
  uint uVar5;
  uint uStack00000004;
  
                    /* Creates a new parser AST root, links existing root and each child-list root
                       into it, destroys each child list, and nulls the source holders. Evidence is
                       nested vector iteration with FUN_005f5346 links and FUN_005f4336 destruction.
                        */
  parent = RbTreeNode_allocWithParent_005f52f1(param_1,(void *)0x0,unaff_DI);
  if ((void *)*param_1 != (void *)0x0) {
    RbTreeNode_link_005f5346(parent,(void *)0x0,(void *)*param_1);
  }
  *param_1 = parent;
  uVar5 = 0;
  iVar1 = FUN_005db5e1();
  if (iVar1 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_005db5f4(uVar5);
      RbTreeNode_link_005f5346((void *)*param_1,(void *)0x0,*(void **)*puVar2);
      uStack00000004 = 0;
      piVar3 = (int *)FUN_005db5f4(uVar5);
      iVar1 = StdVectorDword_size((void *)(*piVar3 + 4));
      if (iVar1 != 0) {
        do {
          piVar3 = (int *)FUN_005db5f4(uVar5);
          uVar4 = StdVectorDword_at_005db38b((void *)(*piVar3 + 4),uStack00000004);
          StdVectorDword_pushBack(param_1 + 1,uVar4);
          uStack00000004 = uStack00000004 + 1;
          piVar3 = (int *)FUN_005db5f4(uVar5);
          uVar4 = StdVectorDword_size((void *)(*piVar3 + 4));
        } while (uStack00000004 < uVar4);
      }
      puVar2 = (undefined4 *)FUN_005db5f4(uVar5);
      *(undefined4 *)*puVar2 = 0;
      piVar3 = (int *)FUN_005db5f4(uVar5);
      IndexedTree_destroyNode_005e894c((void *)(*piVar3 + 4));
      uVar5 = uVar5 + 1;
      uVar4 = FUN_005db5e1();
    } while (uVar5 < uVar4);
  }
  return;
}

