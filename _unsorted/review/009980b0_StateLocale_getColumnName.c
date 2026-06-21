// addr: 0x009980b0
// name: StateLocale_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StateLocale_getColumnName(int param_1)

{
                    /* Returns state/region locale schema fields Id, StateCode, and StateName. */
  if (param_1 == 0) {
    return "Id";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "StateName";
  }
  return "StateCode";
}

