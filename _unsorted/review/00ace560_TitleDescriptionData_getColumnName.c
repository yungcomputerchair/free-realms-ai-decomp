// addr: 0x00ace560
// name: TitleDescriptionData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * TitleDescriptionData_getColumnName(int param_1)

{
                    /* Returns Title and Description column labels for a two-field record. */
  if (param_1 == 0) {
    return "Title";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "Description";
}

