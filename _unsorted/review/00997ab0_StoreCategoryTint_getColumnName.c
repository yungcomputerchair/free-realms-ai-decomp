// addr: 0x00997ab0
// name: StoreCategoryTint_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreCategoryTint_getColumnName(int param_1)

{
                    /* Returns field names for a store category tint/count record: CategoryId,
                       StoreBundleCount, and TintValue. */
  if (param_1 == 0) {
    return "CategoryId";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "UNKNOWN";
    }
    return "TintValue";
  }
  return "StoreBundleCount";
}

