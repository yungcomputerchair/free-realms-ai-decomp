// addr: 0x01357370
// name: VectorRecord8_uninitializedFillN
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * VectorRecord8_uninitializedFillN(int ehState, char * dest, int count,
   void * value) */

char * VectorRecord8_uninitializedFillN(int ehState,char *dest,int count,void *value)

{
                    /* Exception-aware wrapper for filling uninitialized vector storage with count
                       copies of an 8-byte record. Returns dest + count*8. */
  UninitializedFill_Record8_n((char *)ehState,(int)dest,(void *)count);
  return (char *)(ehState + (int)dest * 8);
}

