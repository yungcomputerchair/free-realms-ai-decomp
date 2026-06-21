// addr: 0x012abfe0
// name: CollectionDB_TreeIterator_postIncrementAlt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CollectionDB_TreeIterator_postIncrementAlt(int iterator) */

int __fastcall CollectionDB_TreeIterator_postIncrementAlt(int iterator)

{
                    /* Second iterator wrapper that advances a CollectionDB tree iterator and
                       returns the iterator. The duplicate thunk likely comes from another template
                       instantiation or const/non-const iterator. */
  CollectionDB_TreeIterator_next((int *)iterator);
  return iterator;
}

