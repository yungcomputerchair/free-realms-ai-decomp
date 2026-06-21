// addr: 0x013109c0
// name: RBTreeIterator_postIncrement_013109c0
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RBTreeIterator_postIncrement_013109c0(void * iterator) */

void * __fastcall RBTreeIterator_postIncrement_013109c0(void *iterator)

{
                    /* Increments an RB-tree iterator in place and returns the iterator object
                       pointer for this template instantiation. */
  RBTreeIterator_increment(iterator);
  return iterator;
}

