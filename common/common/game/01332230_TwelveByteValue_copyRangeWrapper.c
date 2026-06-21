// addr: 0x01332230
// name: TwelveByteValue_copyRangeWrapper
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TwelveByteValue_copyRangeWrapper(void * first, void * last, void * dst)
    */

void __cdecl TwelveByteValue_copyRangeWrapper(void *first,void *last,void *dst)

{
                    /* Thin wrapper that forwards a 12-byte element range copy to 0132fcc0. It
                       appears to be a generated uninitialized-copy adapter. */
  TwelveByteValue_uninitializedCopyRange(first,last,dst);
  return;
}

