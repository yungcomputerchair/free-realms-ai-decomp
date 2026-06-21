// addr: 0x00a7f4c0
// name: BuddyData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * BuddyData_getColumnName(int param_1)

{
                    /* Returns BuddyName and BuddyGuid column labels for indices 0 and 1. */
  if (param_1 == 0) {
    return "BuddyName";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "BuddyGuid";
}

