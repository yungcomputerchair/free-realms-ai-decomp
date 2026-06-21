// addr: 0x0129a7f0
// name: IntNodeIterator_advance
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int IntNodeIterator_advance(int iterator) */

int __fastcall IntNodeIterator_advance(int iterator)

{
                    /* Advances a tree iterator in place and returns the iterator object. Evidence
                       is the direct call to the known iterator increment helper FUN_01299120 with
                       no other state changes. */
  StdRbTreeIterator32_advance((int *)iterator);
  return iterator;
}

