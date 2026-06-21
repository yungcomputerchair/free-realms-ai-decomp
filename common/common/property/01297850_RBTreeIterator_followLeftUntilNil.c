// addr: 0x01297850
// name: RBTreeIterator_followLeftUntilNil
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RBTreeIterator_followLeftUntilNil(void ** iterator) */

void __cdecl RBTreeIterator_followLeftUntilNil(void **iterator)

{
  char cVar1;
  int *piVar2;
  
                    /* Walks through left-child links from the iterator's node until a sentinel
                       marker at offset 0x15 is reached. Evidence: dereferences the iterator to a
                       node, follows the first pointer repeatedly, and tests the node sentinel byte.
                        */
  piVar2 = *iterator;
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

