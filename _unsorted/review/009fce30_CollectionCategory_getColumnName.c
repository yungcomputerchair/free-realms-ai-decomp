// addr: 0x009fce30
// name: CollectionCategory_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CollectionCategory_getColumnName(int param_1)

{
                    /* Returns collection category field labels for ID, NAME, ICON_ID, and a
                       fallback category label. */
  if (param_1 == 0) {
    return "Collection Category ID";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "Collection Category";
    }
    return "Collection Category ICON_ID";
  }
  return "Collection Category NAME";
}

