// addr: 0x012c6670
// name: PointerVector_fillRange
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_fillRange(void ** first, void ** last, void ** valuePtr) */

void __cdecl PointerVector_fillRange(void **first,void **last,void **valuePtr)

{
  for (; first != last; first = first + 1) {
    *first = *valuePtr;
  }
  return;
}

