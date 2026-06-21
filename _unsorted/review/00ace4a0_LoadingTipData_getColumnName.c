// addr: 0x00ace4a0
// name: LoadingTipData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * LoadingTipData_getColumnName(int param_1)

{
                    /* Returns loading screen style fields: Treasure Ticket Count and Did You Know.
                        */
  if (param_1 == 0) {
    return "Treasure Ticket Count";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "Did You Know";
}

