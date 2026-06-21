// addr: 0x013c5d10
// name: PackedId_consumeHighBitFlag
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PackedId_consumeHighBitFlag(uint * value) */

bool __cdecl PackedId_consumeHighBitFlag(uint *value)

{
  uint uVar1;
  
                    /* Tests whether the high bit is set on an integer and, if so, clears it in
                       place. Returns the original high-bit state. */
  uVar1 = *value;
  if ((int)uVar1 < 0) {
    *value = uVar1 & 0x7fffffff;
  }
  return (int)uVar1 < 0;
}

