// addr: 0x01297890
// name: RBTree_rotateRight_flag15
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RBTree_rotateRight_flag15(void * tree, void * node) */

void __thiscall RBTree_rotateRight_flag15(void *this,void *tree,void *node)

{
  int iVar1;
  int *piVar2;
  
                    /* Performs a right rotation in a red-black tree whose nil/sentinel flag is
                       stored at node offset 0x15. Evidence: promotes node's left child, repairs
                       parent/root links, assigns promoted->right=node, and node->parent=promoted.
                        */
  iVar1 = *(int *)tree;
  *(undefined4 *)tree = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x15) == '\0') {
    *(void **)(*(int *)(iVar1 + 8) + 4) = tree;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)tree + 4);
  if (tree == *(void **)(*(int *)((int)this + 4) + 4)) {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
    *(void **)(iVar1 + 8) = tree;
    *(int *)((int)tree + 4) = iVar1;
    return;
  }
  piVar2 = *(int **)((int)tree + 4);
  if (tree == (void *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(void **)(iVar1 + 8) = tree;
    *(int *)((int)tree + 4) = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(void **)(iVar1 + 8) = tree;
  *(int *)((int)tree + 4) = iVar1;
  return;
}

