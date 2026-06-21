// addr: 0x012b9f20
// name: ActionDB_Tree_walkRightToSentinel
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_Tree_walkRightToSentinel(void * nodeHolder) */

void __cdecl ActionDB_Tree_walkRightToSentinel(void *nodeHolder)

{
  char cVar1;
  int iVar2;
  
                    /* Walks through right-child links from the node at holder+8 until it reaches a
                       sentinel node flagged at offset 0x15. The function returns no value, so it is
                       likely an inlined/optimized iterator helper with discarded result. */
  iVar2 = *(int *)((int)nodeHolder + 8);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  return;
}

