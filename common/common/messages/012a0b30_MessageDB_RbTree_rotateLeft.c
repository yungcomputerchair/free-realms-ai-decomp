// addr: 0x012a0b30
// name: MessageDB_RbTree_rotateLeft
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_RbTree_rotateLeft(void * tree, void * node) */

void __thiscall MessageDB_RbTree_rotateLeft(void *this,void *tree,void *node)

{
  int iVar1;
  int *piVar2;
  
                    /* Performs a red-black-tree left rotation around the supplied node, updating
                       parent and header links. This is compiler-generated STL tree support for
                       message maps. */
  iVar1 = *(int *)tree;
  *(undefined4 *)tree = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
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

