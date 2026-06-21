// addr: 0x013a0500
// name: STLTreeConstIterator_preincrement
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * STLTreeConstIterator_preincrement(void * this) */

void * __fastcall STLTreeConstIterator_preincrement(void *this)

{
                    /* Advances a const/tree iterator in place and returns the iterator
                       object/pointer. It is identical to the non-const iterator wrapper and
                       delegates the actual node walk to FUN_0139fb70. */
  CollectionDataChildIterator_increment(this);
  return this;
}

