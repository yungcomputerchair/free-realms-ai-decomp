// addr: 0x00995ce0
// name: MapCharacterMarker_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MapCharacterMarker_getColumnName(undefined4 param_1)

{
                    /* Returns column names for a character/map marker record: text, icon, screen
                       angle, distance, color, character guid, and IsPc. */
  switch(param_1) {
  case 0:
    return "Text";
  case 1:
    return "Subtext";
  case 2:
    return "IconId";
  case 3:
    return "ScreenAngle";
  case 4:
    return "Distance";
  case 5:
    return "Color";
  case 6:
    return "CharacterGuid";
  case 7:
    return "IsPc";
  default:
    return "<error>";
  }
}

