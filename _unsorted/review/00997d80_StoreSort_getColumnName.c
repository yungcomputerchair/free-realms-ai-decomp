// addr: 0x00997d80
// name: StoreSort_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreSort_getColumnName(int param_1)

{
  char *pcVar1;
  
                    /* Returns SortId for the only valid sort schema column. */
  pcVar1 = "<error>";
  if (param_1 == 0) {
    pcVar1 = "SortId";
  }
  return pcVar1;
}

