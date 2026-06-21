// addr: 0x01299bf0
// name: StdRbTreeIterator32_preincrement
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdRbTreeIterator32_preincrement(void * iter) */

void * __fastcall StdRbTreeIterator32_preincrement(void *iter)

{
                    /* Pre-increment wrapper for the larger rb-tree iterator layout: advances via
                       01299120 and returns the iterator argument. Used by DB iteration helpers. */
  StdRbTreeIterator32_advance(iter);
  return iter;
}

