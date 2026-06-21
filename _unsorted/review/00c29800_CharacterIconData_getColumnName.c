// addr: 0x00c29800
// name: CharacterIconData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CharacterIconData_getColumnName(undefined4 param_1)

{
                    /* Maps character icon/appearance fields: Guid, IconId, IconTint, ItemId, Race,
                       Gender, Name, and Description. */
  switch(param_1) {
  case 0:
    return "Guid";
  case 1:
    return "IconId";
  case 2:
    return "IconTint";
  case 3:
    return "ItemId";
  case 4:
    return "Race";
  case 5:
    return "Gender";
  case 6:
    return "Name";
  case 7:
    return "Description";
  default:
    return "<error>";
  }
}

