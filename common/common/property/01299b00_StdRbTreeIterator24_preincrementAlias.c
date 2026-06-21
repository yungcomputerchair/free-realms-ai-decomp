// addr: 0x01299b00
// name: StdRbTreeIterator24_preincrementAlias
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdRbTreeIterator24_preincrementAlias(void * iter) */

void * __fastcall StdRbTreeIterator24_preincrementAlias(void *iter)

{
                    /* Alias/thunk that advances a 24-byte-layout rb-tree iterator and returns it.
                       It forwards entirely to 01297d60. */
  StdRbTreeIterator24_advance(iter);
  return iter;
}

