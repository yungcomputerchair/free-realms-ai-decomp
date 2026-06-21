// addr: 0x012baad0
// name: PropertyTreeIterator15_preIncrement_alt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTreeIterator15_preIncrement_alt(int iterator) */

int __fastcall PropertyTreeIterator15_preIncrement_alt(int iterator)

{
                    /* Alternate wrapper that advances a node-layout-0x15 tree iterator by calling
                       012ba140 and then returns the iterator. The duplicate body suggests a second
                       template instantiation of iterator operator++. */
  PropertyTreeIterator15_increment((int *)iterator);
  return iterator;
}

