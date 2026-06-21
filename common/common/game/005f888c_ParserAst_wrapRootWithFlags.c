// addr: 0x005f888c
// name: ParserAst_wrapRootWithFlags
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall ParserAst_wrapRootWithFlags(int *param_1,uint param_2)

{
  int *vec;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  bool unaff_SI;
  void *local_10;
  void *local_c;
  uint local_8;
  
                    /* Wraps an existing parser AST root in new nodes depending on bit flags, moves
                       vector children into the wrapper, and attaches metadata from the holder. It
                       frees old child vectors and destroys the temporary node. */
  if (*param_1 != 0) {
    local_c = RbTreeNode_allocWithParent_005f52f1(param_1,(void *)0x0,unaff_SI);
    local_10 = RbTreeNode_allocWithParent_005f52f1(param_1,(void *)0x0,unaff_SI);
    if ((param_2 & 1) != 0) {
      RbTreeNode_link_005f5346(local_c,(void *)0x0,local_10);
    }
    RbTreeNode_link_005f5346(local_c,(void *)0x0,(void *)*param_1);
    vec = param_1 + 1;
    local_8 = 0;
    iVar1 = StdVectorDword_size(vec);
    if (iVar1 != 0) {
      do {
        puVar2 = (undefined4 *)StdVectorDword_at_005db38b(vec,local_8);
        RbTreeNode_link_005f5346((void *)*puVar2,(void *)0x0,local_10);
        if ((param_2 & 2) != 0) {
          puVar2 = (undefined4 *)StdVectorDword_at_005db38b(vec,local_8);
          RbTreeNode_link_005f5346((void *)*puVar2,(void *)0x0,(void *)*param_1);
        }
        piVar3 = (int *)StdVectorDword_at_005db38b(vec,local_8);
        local_8 = local_8 + 1;
        *(undefined4 *)(*piVar3 + 4) = 0;
        uVar4 = StdVectorDword_size(vec);
      } while (local_8 < uVar4);
    }
    IndexedTree_destroyNode_005e894c(vec);
    *param_1 = (int)local_c;
    *(int *)((int)local_10 + 4) = param_1[5];
    StdVectorDword_pushBack(vec,(uint)&local_10);
  }
  return;
}

