// addr: 0x004f0109
// name: Pair8_copyRangeWrapper
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Pair8_copyRangeWrapper(void * first, void * last, void * dest) */

void __cdecl Pair8_copyRangeWrapper(void *first,void *last,void *dest)

{
                    /* Wrapper around the 8-byte pair range copy helper used by vector assignment
                       code. It discards the returned output end. */
  Pair8_copyRangeReturnEnd(first,last,dest,last,last,0);
  return;
}

