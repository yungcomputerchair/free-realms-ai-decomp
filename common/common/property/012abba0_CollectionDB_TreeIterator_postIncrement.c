// addr: 0x012abba0
// name: CollectionDB_TreeIterator_postIncrement
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CollectionDB_TreeIterator_postIncrement(int iterator) */

int __fastcall CollectionDB_TreeIterator_postIncrement(int iterator)

{
                    /* Iterator wrapper that advances a CollectionDB tree iterator and returns the
                       original iterator object. It directly delegates to
                       CollectionDB_TreeIterator_next. */
  CollectionDB_TreeIterator_next((int *)iterator);
  return iterator;
}

