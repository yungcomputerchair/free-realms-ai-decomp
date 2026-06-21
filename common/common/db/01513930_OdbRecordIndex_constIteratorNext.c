// addr: 0x01513930
// name: OdbRecordIndex_constIteratorNext
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * OdbRecordIndex_constIteratorNext(void * iterator) */

void * __fastcall OdbRecordIndex_constIteratorNext(void *iterator)

{
                    /* Thin wrapper that advances a record-index iterator using the integer-keyed
                       tree successor helper and returns the iterator. */
  FUN_015132b0();
  return iterator;
}

