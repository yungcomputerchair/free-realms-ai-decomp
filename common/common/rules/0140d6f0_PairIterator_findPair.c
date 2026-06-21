// addr: 0x0140d6f0
// name: PairIterator_findPair
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PairIterator_findPair(void * outPair, int owner_, int * first, int *
   last, int * needle) */

void __cdecl PairIterator_findPair(void *outPair,int owner_,int *first,int *last,int *needle)

{
  int *in_stack_00000018;
  
                    /* Scans a range of two-int records for a record matching the two-int needle,
                       then returns the owner and found/end iterator in outPair. */
  if (first != needle) {
    do {
      if ((*first == *in_stack_00000018) && (first[1] == in_stack_00000018[1])) break;
      first = first + 2;
    } while (first != needle);
  }
  *(int *)outPair = owner_;
  *(int **)((int)outPair + 4) = first;
  return;
}

