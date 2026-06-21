// addr: 0x01485c20
// name: StdRbTreeNode_findRightmost
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeNode_findRightmost(int node) */

void __cdecl StdRbTreeNode_findRightmost(int node)

{
  char cVar1;
  int iVar2;
  
                    /* Walks from node->right through right-child links until the sentinel/nil flag
                       at offset 0x15 is reached. The decompiler lost the returned node, but the
                       traversal is a red-black-tree extremum helper. */
  iVar2 = *(int *)(node + 8);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  return;
}

