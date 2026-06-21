// addr: 0x013c5d30
// name: PackedId_consumeHighBitFlag_alt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PackedId_consumeHighBitFlag_alt(uint * value) */

bool __cdecl PackedId_consumeHighBitFlag_alt(uint *value)

{
  uint uVar1;
  
                    /* Tests whether the high bit is set on an integer and clears it in place. This
                       duplicate helper is used in dynamic keyword/attribute modifier paths. */
  uVar1 = *value;
  if ((int)uVar1 < 0) {
    *value = uVar1 & 0x7fffffff;
  }
  return (int)uVar1 < 0;
}

