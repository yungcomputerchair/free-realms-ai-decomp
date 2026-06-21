// addr: 0x005f8678
// name: ParserAst_assignAsSequenceNode
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall ParserAst_assignAsSequenceNode(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 unaff_EDI;
  undefined1 attachParent;
  
  piVar2 = param_2;
                    /* Moves/assigns parser AST ownership between two small root holders, detaching
                       children from the source vector and linking them under newly allocated nodes.
                       It creates nodes with FUN_005f52f1 and attaches children with FUN_005f5346,
                       then clears the source vector. */
  attachParent = (undefined1)unaff_EDI;
  if (param_1 != param_2) {
    if (*param_1 == 0) {
      if (*param_2 == 0) {
        return;
      }
      *param_1 = *param_2;
    }
    else {
      param_2 = (int *)0x0;
      piVar1 = param_1 + 1;
      iVar4 = StdVectorDword_size(piVar1);
      attachParent = (undefined1)unaff_EDI;
      if (iVar4 != 0) {
        do {
          puVar5 = (undefined4 *)StdVectorDword_at_005db38b(piVar1,(uint)param_2);
          RbTreeNode_link_005f5346((void *)*puVar5,(void *)0x0,(void *)*piVar2);
          piVar6 = (int *)StdVectorDword_at_005db38b(piVar1,(uint)param_2);
          *(undefined4 *)(*piVar6 + 4) = 0;
          param_2 = (int *)((int)param_2 + 1);
          uVar7 = StdVectorDword_size(piVar1);
          attachParent = (undefined1)unaff_EDI;
        } while (param_2 < uVar7);
      }
      IndexedTree_destroyNode_005e894c(piVar1);
    }
    pvVar3 = RbTreeNode_allocWithParent_005f52f1(param_1,(void *)0x0,(bool)attachParent);
    RbTreeNode_link_005f5346(pvVar3,(void *)0x0,(void *)*param_1);
    *param_1 = (int)pvVar3;
    pvVar3 = RbTreeNode_allocWithParent_005f52f1(param_1,(void *)0x1,(bool)attachParent);
    param_2 = (int *)0x0;
    piVar1 = piVar2 + 1;
    iVar4 = StdVectorDword_size(piVar1);
    if (iVar4 != 0) {
      do {
        puVar5 = (undefined4 *)StdVectorDword_at_005db38b(piVar1,(uint)param_2);
        RbTreeNode_link_005f5346((void *)*puVar5,(void *)0x0,pvVar3);
        piVar6 = (int *)StdVectorDword_at_005db38b(piVar1,(uint)param_2);
        *(undefined4 *)(*piVar6 + 4) = 0;
        param_2 = (int *)((int)param_2 + 1);
        uVar7 = StdVectorDword_size(piVar1);
      } while (param_2 < uVar7);
    }
    *piVar2 = 0;
    IndexedTree_destroyNode_005e894c(piVar1);
  }
  return;
}

