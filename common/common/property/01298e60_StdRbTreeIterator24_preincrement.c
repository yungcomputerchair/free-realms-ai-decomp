// addr: 0x01298e60
// name: StdRbTreeIterator24_preincrement
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdRbTreeIterator24_preincrement(void * iter) */

void * __fastcall StdRbTreeIterator24_preincrement(void *iter)

{
                    /* Pre-increment wrapper for a 0x18-ish rb-tree iterator: advances the iterator
                       and returns it. The actual successor logic is in 01297d60. */
  StdRbTreeIterator24_advance(iter);
  return iter;
}

