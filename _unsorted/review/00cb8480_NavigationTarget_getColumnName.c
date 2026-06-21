// addr: 0x00cb8480
// name: NavigationTarget_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * NavigationTarget_getColumnName(int columnIndex_) */

char * NavigationTarget_getColumnName(int columnIndex_)

{
                    /* Returns navigation target columns Active, Guid, Name, Location X/Z, Zone ID,
                       Target Type, and Screen Angle. */
  switch(columnIndex_) {
  case 0:
    return "Active";
  case 1:
    return "Guid";
  case 2:
    return "Name";
  case 3:
    return "Location X";
  case 4:
    return "Location Z";
  case 5:
    return "Zone ID";
  case 6:
    return "Target Type";
  case 7:
    return "Screen Angle";
  default:
    return "<error>";
  }
}

