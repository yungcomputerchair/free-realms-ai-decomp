// addr: 0x004d1398
// name: StdRbTree_rotateLeft
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTree_rotateLeft(void * tree, void * nodeRef) */

void __thiscall StdRbTree_rotateLeft(void *this,void *tree,void *nodeRef)

{
  int iVar1;
  int *piVar2;
  
                    /* Performs a left rotation around a red-black tree node, updating child,
                       parent, root, and parent-link pointers. */
  iVar1 = *(int *)tree;
  *(undefined4 *)tree = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x15) == '\0') {
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

