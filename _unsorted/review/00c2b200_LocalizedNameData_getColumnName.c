// addr: 0x00c2b200
// name: LocalizedNameData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * LocalizedNameData_getColumnName(int param_1)

{
                    /* Returns NameId, Name, and LocalizedName column labels. */
  if (param_1 == 0) {
    return "NameId";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "LocalizedName";
  }
  return "Name";
}

