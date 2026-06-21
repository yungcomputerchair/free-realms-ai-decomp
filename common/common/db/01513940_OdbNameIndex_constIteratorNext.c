// addr: 0x01513940
// name: OdbNameIndex_constIteratorNext
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * OdbNameIndex_constIteratorNext(void * iterator) */

void * __fastcall OdbNameIndex_constIteratorNext(void *iterator)

{
                    /* Thin wrapper that advances a name-index iterator using the string-keyed tree
                       successor helper and returns the iterator. */
  FUN_01512d40();
  return iterator;
}

