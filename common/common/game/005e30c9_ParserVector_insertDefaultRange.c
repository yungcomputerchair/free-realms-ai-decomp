// addr: 0x005e30c9
// name: ParserVector_insertDefaultRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ParserVector_insertDefaultRange(void * begin, void * end, void * out,
   void * allocator) */

void __cdecl ParserVector_insertDefaultRange(void *begin,void *end,void *out,void *allocator)

{
                    /* Thin wrapper around a lower-level vector/range insertion helper, passing the
                       second argument both as range end and insertion source and a zero flag. */
  FUN_005dfb39(begin,end,out,allocator,end,0);
  return;
}

