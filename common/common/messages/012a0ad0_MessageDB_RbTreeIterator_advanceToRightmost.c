// addr: 0x012a0ad0
// name: MessageDB_RbTreeIterator_advanceToRightmost
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_RbTreeIterator_advanceToRightmost(void * iteratorNode) */

void __cdecl MessageDB_RbTreeIterator_advanceToRightmost(void *iteratorNode)

{
  char cVar1;
  int iVar2;
  
                    /* Walks right-child links until a red-black-tree sentinel node is reached. This
                       is an STL tree iterator utility used by message-map code. */
  iVar2 = *(int *)((int)iteratorNode + 8);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  return;
}

