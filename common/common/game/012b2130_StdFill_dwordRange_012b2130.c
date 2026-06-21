// addr: 0x012b2130
// name: StdFill_dwordRange_012b2130
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdFill_dwordRange_012b2130(uint * first, uint * last, uint * value) */

void __cdecl StdFill_dwordRange_012b2130(uint *first,uint *last,uint *value)

{
  for (; first != last; first = first + 1) {
    *first = *value;
  }
  return;
}

