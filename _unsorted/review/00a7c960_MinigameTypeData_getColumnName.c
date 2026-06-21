// addr: 0x00a7c960
// name: MinigameTypeData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MinigameTypeData_getColumnName(int param_1)

{
  char *pcVar1;
  
                    /* Returns the single MinigameType column label for index zero and '<error>'
                       otherwise. */
  pcVar1 = "<error>";
  if (param_1 == 0) {
    pcVar1 = "MinigameType";
  }
  return pcVar1;
}

