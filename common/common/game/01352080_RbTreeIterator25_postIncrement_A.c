// addr: 0x01352080
// name: RbTreeIterator25_postIncrement_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RbTreeIterator25_postIncrement_A(void * iterator) */

void * __fastcall RbTreeIterator25_postIncrement_A(void *iterator)

{
                    /* Wrapper around the node+0x25 red-black-tree iterator increment helper,
                       returning the iterator pointer. No concrete template type is visible. */
  RbTreeIterator25_increment(iterator);
  return iterator;
}

