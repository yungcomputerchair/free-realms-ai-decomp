// addr: 0x01355c10
// name: VectorRecord8_uninitializedCopy
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VectorRecord8_uninitializedCopy(int ehState, void * first, void * last,
   void * dest) */

void VectorRecord8_uninitializedCopy(int ehState,void *first,void *last,void *dest)

{
                    /* Exception-aware wrapper that copies a range of 8-byte records into
                       uninitialized vector storage. The leading parameter is the compiler EH state
                       value, not semantic data. */
  UninitializedCopy_Record8_range_A((char *)ehState,first,last);
  return;
}

