// addr: 0x01331fd0
// name: TwelveByteValue_fillNReturnEnd
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TwelveByteValue_fillNReturnEnd(void * dst, int count, void * value) */

void * TwelveByteValue_fillNReturnEnd(void *dst,int count,void *value)

{
                    /* Fills count consecutive 12-byte destination elements from one source value
                       and returns the end pointer. It forwards to the uninitialized fill helper
                       01330e20. */
  TwelveByteValue_uninitializedFillN(dst,count,value);
  return (void *)((int)dst + count * 0xc);
}

