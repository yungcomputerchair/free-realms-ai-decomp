// addr: 0x00c2bb20
// name: NameCategoryData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * NameCategoryData_getColumnName(int param_1)

{
                    /* Returns name-category columns CategoryId, NameCategory, and
                       NameCategoryDataSourceName. */
  if (param_1 == 0) {
    return "CategoryId";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "NameCategoryDataSourceName";
  }
  return "NameCategory";
}

