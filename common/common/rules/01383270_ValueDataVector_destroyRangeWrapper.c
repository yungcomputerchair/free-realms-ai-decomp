// addr: 0x01383270
// name: ValueDataVector_destroyRangeWrapper
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueDataVector_destroyRangeWrapper(void * thisPtr, void * first, void *
   last) */

void ValueDataVector_destroyRangeWrapper(void *thisPtr,void *first,void *last)

{
                    /* Wrapper around the 0x10-byte element destroy-range helper, used as a
                       compiler-generated vector cleanup thunk. */
  ValueDataVector_destroyRange16(thisPtr,first);
  return;
}

