// addr: 0x013417b0
// name: StdFill_dwordRange_013417b0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdFill_dwordRange_013417b0(uint * first, uint * last, uint * value) */

void __cdecl StdFill_dwordRange_013417b0(uint *first,uint *last,uint *value)

{
  for (; first != last; first = first + 1) {
    *first = *value;
  }
  return;
}

