// addr: 0x01321eb0
// name: PackedActionId_getLow12Bits
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint PackedActionId_getLow12Bits(uint param_1)

{
                    /* Extracts the low 12 bits from a packed action/card identifier. This
                       complements the high-bit helper at 01321ea0 and is used by the same
                       action/game deserialization paths. */
  return param_1 & 0xfff;
}

