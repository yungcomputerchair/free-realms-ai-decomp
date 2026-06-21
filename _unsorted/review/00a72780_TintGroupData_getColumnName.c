// addr: 0x00a72780
// name: TintGroupData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * TintGroupData_getColumnName(int param_1)

{
                    /* Returns the two column labels for a tint-group data row: Tint Group ID and
                       Data (<ID> - <Value>[,...]). */
  if (param_1 == 0) {
    return "Tint Group ID";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "Data (<ID> - <Value>[,...])";
}

