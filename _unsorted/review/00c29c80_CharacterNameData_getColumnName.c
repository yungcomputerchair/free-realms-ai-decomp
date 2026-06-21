// addr: 0x00c29c80
// name: CharacterNameData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CharacterNameData_getColumnName(int param_1)

{
                    /* Returns Name, Online, and Locked column labels for a character/name list. */
  if (param_1 == 0) {
    return "Name";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "Locked";
  }
  return "Online";
}

