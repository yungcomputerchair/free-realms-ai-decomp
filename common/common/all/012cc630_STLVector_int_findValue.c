// addr: 0x012cc630
// name: STLVector_int_findValue
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void STLVector_int_findValue(void * outIter, void * owner, int * beginIt, void
   * endOwner, int * endIt, int * needlePtr) */

void __cdecl
STLVector_int_findValue
          (void *outIter,void *owner,int *beginIt,void *endOwner,int *endIt,int *needlePtr)

{
                    /* Linear-search helper for an int vector range; returns the owner and iterator
                       where *needlePtr is found, or the end iterator if absent. */
  if (beginIt != endIt) {
    do {
      if (*beginIt == *needlePtr) break;
      beginIt = beginIt + 1;
    } while (beginIt != endIt);
  }
  *(void **)outIter = owner;
  *(int **)((int)outIter + 4) = beginIt;
  return;
}

