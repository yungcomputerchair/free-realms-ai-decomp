// addr: 0x012a17c0
// name: MessageDB_RbTreeIterator_next_thunk
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_RbTreeIterator_next_thunk(void * iterator) */

void * __fastcall MessageDB_RbTreeIterator_next_thunk(void *iterator)

{
                    /* Thin wrapper that advances an RB-tree iterator and returns the original
                       iterator pointer. It exists as a compiler-generated iterator operator thunk.
                        */
  MessageDB_RbTreeIterator_next(iterator);
  return iterator;
}

