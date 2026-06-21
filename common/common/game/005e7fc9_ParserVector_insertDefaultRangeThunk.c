// addr: 0x005e7fc9
// name: ParserVector_insertDefaultRangeThunk
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ParserVector_insertDefaultRangeThunk(void * this, void * begin, void *
   end, void * out) */

void __thiscall ParserVector_insertDefaultRangeThunk(void *this,void *begin,void *end,void *out)

{
                    /* This thunk reorders arguments and delegates to
                       ParserVector_insertDefaultRange. */
  ParserVector_insertDefaultRange(begin,end,out,this);
  return;
}

