// addr: 0x00997c80
// name: StorePanelLocation_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StorePanelLocation_getColumnName(int param_1)

{
                    /* Maps indexes to ColumnId, LocationId, and PanelCount for a store
                       panel/location record. */
  if (param_1 == 0) {
    return "ColumnId";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "PanelCount";
  }
  return "LocationId";
}

