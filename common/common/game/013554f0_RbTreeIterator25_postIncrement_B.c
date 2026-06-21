// addr: 0x013554f0
// name: RbTreeIterator25_postIncrement_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RbTreeIterator25_postIncrement_B(void * iterator) */

void * __fastcall RbTreeIterator25_postIncrement_B(void *iterator)

{
                    /* Wrapper around the node+0x25 red-black-tree iterator increment routine,
                       returning the iterator pointer. This is a duplicate template-style wrapper
                       for a different call site. */
  RbTreeIterator25_increment(iterator);
  return iterator;
}

