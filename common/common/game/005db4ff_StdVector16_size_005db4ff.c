// addr: 0x005db4ff
// name: StdVector16_size_005db4ff
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVector16_size_005db4ff(void * vec) */

int __fastcall StdVector16_size_005db4ff(void *vec)

{
                    /* Returns the number of 16-byte elements in a vector-like storage, or zero when
                       the begin pointer is null. */
  if (*(int *)((int)vec + 4) == 0) {
    return 0;
  }
  return *(int *)((int)vec + 8) - *(int *)((int)vec + 4) >> 4;
}

