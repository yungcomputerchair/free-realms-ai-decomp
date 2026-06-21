// addr: 0x005e1577
// name: StdTree_rotateRight_Node17
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_rotateRight_Node17(void * tree, void * node) */

void __thiscall StdTree_rotateRight_Node17(void *this,void *tree,void *node)

{
  int iVar1;
  int *piVar2;
  
                    /* Performs a red-black tree right rotation for the compact node layout,
                       promoting node->left and relinking parent/child pointers. */
  iVar1 = *(int *)tree;
  *(undefined4 *)tree = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
    *(void **)(*(int *)(iVar1 + 8) + 4) = tree;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)tree + 4);
  if (tree == *(void **)(*(int *)((int)this + 4) + 4)) {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
  }
  else {
    piVar2 = *(int **)((int)tree + 4);
    if (tree == (void *)piVar2[2]) {
      piVar2[2] = iVar1;
    }
    else {
      *piVar2 = iVar1;
    }
  }
  *(void **)(iVar1 + 8) = tree;
  *(int *)((int)tree + 4) = iVar1;
  return;
}

