// addr: 0x005db378
// name: StdVectorDword_size
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVectorDword_size(void * vec) */

int __fastcall StdVectorDword_size(void *vec)

{
                    /* Returns the number of 4-byte elements in a vector-like storage, or zero when
                       the begin pointer is null. */
  if (*(int *)((int)vec + 4) == 0) {
    return 0;
  }
  return *(int *)((int)vec + 8) - *(int *)((int)vec + 4) >> 2;
}

