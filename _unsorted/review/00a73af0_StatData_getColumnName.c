// addr: 0x00a73af0
// name: StatData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StatData_getColumnName(undefined4 param_1)

{
                    /* Returns stat-definition column labels: Stat ID, Icon ID, Name, and
                       Description. */
  switch(param_1) {
  case 0:
    return "Stat ID";
  case 1:
    return "Icon ID";
  case 2:
    return "Name";
  case 3:
    return "Description";
  default:
    return "<error>";
  }
}

