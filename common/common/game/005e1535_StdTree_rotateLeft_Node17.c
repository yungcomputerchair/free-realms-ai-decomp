// addr: 0x005e1535
// name: StdTree_rotateLeft_Node17
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_rotateLeft_Node17(void * tree, void * node) */

void __thiscall StdTree_rotateLeft_Node17(void *this,void *tree,void *node)

{
  int *piVar1;
  int *piVar2;
  
                    /* Performs a red-black tree left rotation for a node layout whose
                       sentinel/color byte is at offset 0x11. */
  piVar1 = *(int **)((int)tree + 8);
  *(int *)((int)tree + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
    *(void **)(*piVar1 + 4) = tree;
  }
  piVar1[1] = *(int *)((int)tree + 4);
  if (tree == *(void **)(*(int *)((int)this + 4) + 4)) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar1;
  }
  else {
    piVar2 = *(int **)((int)tree + 4);
    if (tree == (void *)*piVar2) {
      *piVar2 = (int)piVar1;
    }
    else {
      piVar2[2] = (int)piVar1;
    }
  }
  *piVar1 = (int)tree;
  *(int **)((int)tree + 4) = piVar1;
  return;
}

