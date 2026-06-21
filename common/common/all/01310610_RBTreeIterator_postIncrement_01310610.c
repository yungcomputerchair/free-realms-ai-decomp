// addr: 0x01310610
// name: RBTreeIterator_postIncrement_01310610
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RBTreeIterator_postIncrement_01310610(void * iterator) */

void * __fastcall RBTreeIterator_postIncrement_01310610(void *iterator)

{
                    /* Increments an RB-tree iterator in place and returns the original iterator
                       object pointer. */
  RBTreeIterator_increment(iterator);
  return iterator;
}

