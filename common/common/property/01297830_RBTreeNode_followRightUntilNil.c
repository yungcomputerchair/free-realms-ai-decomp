// addr: 0x01297830
// name: RBTreeNode_followRightUntilNil
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RBTreeNode_followRightUntilNil(void * node) */

void __cdecl RBTreeNode_followRightUntilNil(void *node)

{
  char cVar1;
  int iVar2;
  
                    /* Walks through right-child links until it reaches a sentinel/black nil marker
                       at offset 0x15. Evidence: starts at node+8 and repeatedly follows +8 while
                       the sentinel byte is zero. */
  iVar2 = *(int *)((int)node + 8);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  return;
}

