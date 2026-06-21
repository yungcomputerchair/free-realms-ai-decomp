// addr: 0x01321ec0
// name: PackedActionId_fromLegacyDecimal
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint PackedActionId_fromLegacyDecimal(int param_1)

{
                    /* Converts a decimal-style action id into packed action id form by keeping the
                       low three decimal digits and shifting the quotient into the high packed bits.
                       Evidence is neighboring named PackedActionId_getHighBits/getLow12Bits and use
                       in action-play update code. */
  return param_1 % 1000 | (param_1 / 1000) * 0x1000;
}

