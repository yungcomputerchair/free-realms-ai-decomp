// addr: 0x00998050
// name: CountryLocale_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CountryLocale_getColumnName(undefined4 param_1)

{
                    /* Maps country/locale table fields to Id, CountryCode, LanguageLocale,
                       CountryLocale, and CountryName. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "CountryCode";
  case 2:
    return "LanguageLocale";
  case 3:
    return "CountryLocale";
  case 4:
    return "CountryName";
  default:
    return "<error>";
  }
}

