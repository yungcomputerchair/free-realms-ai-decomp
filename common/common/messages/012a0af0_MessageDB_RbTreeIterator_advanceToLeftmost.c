// addr: 0x012a0af0
// name: MessageDB_RbTreeIterator_advanceToLeftmost
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_RbTreeIterator_advanceToLeftmost(void * iteratorNode) */

void __cdecl MessageDB_RbTreeIterator_advanceToLeftmost(void *iteratorNode)

{
  char cVar1;
  int *piVar2;
  
                    /* Walks left-child links until a red-black-tree sentinel node is reached. This
                       is a small STL tree iterator helper. */
  piVar2 = *(int **)iteratorNode;
  cVar1 = *(char *)((int)piVar2 + 0x2d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}

