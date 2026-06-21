// addr: 0x012a1ef0
// name: MessageDB_RbTreeIterator_next_thunk2
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_RbTreeIterator_next_thunk2(void * iterator) */

void * __fastcall MessageDB_RbTreeIterator_next_thunk2(void *iterator)

{
                    /* Second thin wrapper around the red-black-tree iterator increment helper,
                       returning the original iterator. Likely another instantiated iterator
                       operator++ thunk. */
  MessageDB_RbTreeIterator_next(iterator);
  return iterator;
}

