// addr: 0x00b97c40
// name: MapLocationData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MapLocationData_getColumnName(undefined4 param_1)

{
                    /* Returns map/location notification columns including Id, Name, Zone ID, XYZ,
                       Heading, IconId, NotificationType, SubName, BreadcrumbQuestId, and AtlasName.
                        */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Zone ID";
  case 3:
    return "X";
  case 4:
    return "Y";
  case 5:
    return "Z";
  case 6:
    return "Heading";
  case 7:
    return "IconId";
  case 8:
    return "NotificationType";
  case 9:
    return "SubName";
  case 10:
    return "BreadcrumbQuestId";
  case 0xb:
    return "AtlasName";
  default:
    return "<error>";
  }
}

