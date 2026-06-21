// addr: 0x01298dd0
// name: RBTree_rotateLeft_flag15
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RBTree_rotateLeft_flag15(void * tree, void * node) */

void __thiscall RBTree_rotateLeft_flag15(void *this,void *tree,void *node)

{
  int *piVar1;
  int *piVar2;
  
                    /* Performs a left rotation in a red-black tree whose nil/sentinel flag is
                       stored at node offset 0x15. Evidence: promotes node's right child, repairs
                       child parent/root links, assigns promoted->left=node, and
                       node->parent=promoted. */
  piVar1 = *(int **)((int)tree + 8);
  *(int *)((int)tree + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
    *(void **)(*piVar1 + 4) = tree;
  }
  piVar1[1] = *(int *)((int)tree + 4);
  if (tree == *(void **)(*(int *)((int)this + 4) + 4)) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar1;
    *piVar1 = (int)tree;
    *(int **)((int)tree + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)((int)tree + 4);
  if (tree == (void *)*piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = (int)tree;
    *(int **)((int)tree + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)tree;
  *(int **)((int)tree + 4) = piVar1;
  return;
}

