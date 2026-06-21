// addr: 0x00c2ad60
// name: CharacterCustomizationCategoryData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CharacterCustomizationCategoryData_getColumnName(undefined4 param_1)

{
                    /* Maps customization category columns: CategoryId, CategoryTitleId, data source
                       name/suffix, Race, and Gender. */
  switch(param_1) {
  case 0:
    return "CategoryId";
  case 1:
    return "CategoryTitleId";
  case 2:
    return "DataSourceNameSuffix";
  case 3:
    return "DataSourceName";
  case 4:
    return "Race";
  case 5:
    return "Gender";
  default:
    return "<error>";
  }
}

