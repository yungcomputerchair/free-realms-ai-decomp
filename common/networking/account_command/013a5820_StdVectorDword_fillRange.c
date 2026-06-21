// addr: 0x013a5820
// name: StdVectorDword_fillRange
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorDword_fillRange(int * first, int * last, int * value) */

void __cdecl StdVectorDword_fillRange(int *first,int *last,int *value)

{
  for (; first != last; first = first + 1) {
    *first = *value;
  }
  return;
}

