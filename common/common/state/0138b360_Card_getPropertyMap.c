// addr: 0x0138b360
// name: Card_getPropertyMap
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall Card_getPropertyMap(int param_1)

{
                    /* Returns a pointer to the card's embedded structure at offset 0x124, used by
                       property, text, and command handlers. This appears to expose the card
                       property map/table. */
  return param_1 + 0x124;
}

