// addr: 0x012ba6e0
// name: PropertyTreeIterator15_preIncrement
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTreeIterator15_preIncrement(int iterator) */

int __fastcall PropertyTreeIterator15_preIncrement(int iterator)

{
                    /* Wrapper for the tree iterator increment helper that advances the iterator in
                       place and returns the original iterator object/address. The only callee is
                       PropertyTreeIterator15_increment at 012ba140. */
  PropertyTreeIterator15_increment((int *)iterator);
  return iterator;
}

