// addr: 0x012b9f40
// name: ActionDB_Tree_walkLeftToSentinel
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_Tree_walkLeftToSentinel(void * node) */

void __cdecl ActionDB_Tree_walkLeftToSentinel(void *node)

{
  char cVar1;
  int *piVar2;
  
                    /* Walks left-child links until the node sentinel flag at offset 0x15 is set.
                       The result is not returned in this decompilation, suggesting an optimized
                       iterator helper or discarded traversal result. */
  piVar2 = *(int **)node;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

