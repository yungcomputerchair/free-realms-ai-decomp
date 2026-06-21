// addr: 0x013a01c0
// name: STLTreeIterator_preincrement
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * STLTreeIterator_preincrement(void * this) */

void * __fastcall STLTreeIterator_preincrement(void *this)

{
                    /* Advances a tree iterator in place and returns the iterator object/pointer. It
                       is a thin wrapper around the red-black-tree increment routine FUN_0139fb70,
                       whose body walks parent/child links and sentinel flags. */
  CollectionDataChildIterator_increment(this);
  return this;
}

