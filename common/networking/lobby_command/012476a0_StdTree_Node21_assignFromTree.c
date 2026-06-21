// addr: 0x012476a0
// name: StdTree_Node21_assignFromTree
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_Node21_assignFromTree(void * param_1, void * param_2) */

void __thiscall StdTree_Node21_assignFromTree(void *this,void *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
                    /* Assigns/copies a red-black tree instance whose sentinel/color byte is at node
                       offset +0x21 by cloning the source subtree and recomputing leftmost/rightmost
                       header links. Evidence: calls StdTree_Node21_cloneSubtree and copies the
                       source count. */
  iVar2 = *(int *)((int)this + 4);
  uVar7 = StdTree_Node21_cloneSubtree(*(undefined4 *)(*(int *)((int)param_1 + 4) + 4),iVar2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = *(int **)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x21) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0x21);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x21);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x21);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x21);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)((int)this + 4) + 8) = iVar2;
  return;
}

