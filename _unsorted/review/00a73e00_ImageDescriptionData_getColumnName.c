// addr: 0x00a73e00
// name: ImageDescriptionData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ImageDescriptionData_getColumnName(int param_1)

{
                    /* Returns column labels for a two-field image/description record: Image ID and
                       Description. */
  if (param_1 == 0) {
    return "Image ID";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "Description";
}

