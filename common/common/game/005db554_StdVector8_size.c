// addr: 0x005db554
// name: StdVector8_size
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVector8_size(void * vec) */

int __fastcall StdVector8_size(void *vec)

{
                    /* Returns the number of 8-byte elements in a vector-like storage, or zero when
                       the begin pointer is null. */
  if (*(int *)((int)vec + 4) == 0) {
    return 0;
  }
  return *(int *)((int)vec + 8) - *(int *)((int)vec + 4) >> 3;
}

