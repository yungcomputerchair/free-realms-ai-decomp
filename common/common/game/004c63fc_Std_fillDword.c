// addr: 0x004c63fc
// name: Std_fillDword
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Std_fillDword(uint * dst, uint value, int count) */

void __cdecl Std_fillDword(uint *dst,uint value,int count)

{
                    /* Fills count 32-bit slots at dst with the supplied value. */
  for (; count != 0; count = count + -1) {
    *dst = value;
    dst = dst + 1;
  }
  return;
}

