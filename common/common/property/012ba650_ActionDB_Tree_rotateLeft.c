// addr: 0x012ba650
// name: ActionDB_Tree_rotateLeft
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_Tree_rotateLeft(void * this, void * node) */

void __thiscall ActionDB_Tree_rotateLeft(void *this,void *node)

{
  int *piVar1;
  int *piVar2;
  
                    /* Performs a left rotation in a red-black/tree structure, moving the right
                       child up and adjusting parent/root links. Evidence is the mirror of 012b9f80
                       using child pointers and sentinel flag offset 0x15. */
  piVar1 = *(int **)((int)node + 8);
  *(int *)((int)node + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
    *(void **)(*piVar1 + 4) = node;
  }
  piVar1[1] = *(int *)((int)node + 4);
  if (node == *(void **)(*(int *)((int)this + 4) + 4)) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar1;
    *piVar1 = (int)node;
    *(int **)((int)node + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)((int)node + 4);
  if (node == (void *)*piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = (int)node;
    *(int **)((int)node + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)node;
  *(int **)((int)node + 4) = piVar1;
  return;
}

