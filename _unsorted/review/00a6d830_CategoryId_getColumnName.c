// addr: 0x00a6d830
// name: CategoryId_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CategoryId_getColumnName(int param_1)

{
  char *pcVar1;
  
                    /* Returns CategoryId for the sole valid schema column and UNKNOWN otherwise. */
  pcVar1 = "CategoryId";
  if (param_1 != 0) {
    pcVar1 = "UNKNOWN";
  }
  return pcVar1;
}

