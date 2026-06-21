// addr: 0x00a85140
// name: LocaleData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * LocaleData_getColumnName(undefined4 param_1)

{
                    /* Maps locale/language columns including ID, LanguageID, Location, Language,
                       flags, codes, Allowed, and IsChatLanguage. */
  switch(param_1) {
  case 0:
    return "ID";
  case 1:
    return "LanguageID";
  case 2:
    return "Location";
  case 3:
    return "Language";
  case 4:
    return "LocationFlag";
  case 5:
    return "LanguageFlag";
  case 6:
    return "LocationCode";
  case 7:
    return "LanguageCode";
  case 8:
    return "Allowed";
  case 9:
    return "IsChatLanguage";
  default:
    return "<error>";
  }
}

