// addr: 0x01330dc0
// name: StdFill_dwordRange_01330dc0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdFill_dwordRange_01330dc0(uint * first, uint * last, uint * value) */

void __cdecl StdFill_dwordRange_01330dc0(uint *first,uint *last,uint *value)

{
  for (; first != last; first = first + 1) {
    *first = *value;
  }
  return;
}

