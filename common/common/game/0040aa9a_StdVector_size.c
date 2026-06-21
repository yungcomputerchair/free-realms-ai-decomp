// addr: 0x0040aa9a
// name: StdVector_size
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVector_size(void * this) */

int __fastcall StdVector_size(void *this)

{
                    /* Returns the number of 4-byte elements in a vector-like object, or zero if the
                       begin pointer is null. */
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
}

