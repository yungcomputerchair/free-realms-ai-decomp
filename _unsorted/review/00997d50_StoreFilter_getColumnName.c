// addr: 0x00997d50
// name: StoreFilter_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreFilter_getColumnName(int param_1)

{
                    /* Maps filter schema indexes to FilterId and OptionList. */
  if (param_1 == 0) {
    return "FilterId";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "OptionList";
}

