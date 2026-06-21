// addr: 0x00997e00
// name: StoreGiftItemEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreGiftItemEntry_getColumnName(int param_1)

{
                    /* Returns StoreId, StoreBundleId, and Quantity for a store gift/item entry
                       schema. */
  if (param_1 == 0) {
    return "StoreId";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "Quantity";
  }
  return "StoreBundleId";
}

