// addr: 0x00a85900
// name: NearbyPlayerData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * NearbyPlayerData_getColumnName(undefined4 param_1)

{
                    /* Returns nearby/player-list columns: Guid, Name, X/Z location,
                       friend/group-member flags, and encounter flag. */
  switch(param_1) {
  case 0:
    return "Guid";
  case 1:
    return "Name";
  case 2:
    return "X Location";
  case 3:
    return "Z Location";
  case 4:
    return "Is Friend";
  case 5:
    return "Is Group Member";
  case 6:
    return "Is In Encounter";
  default:
    return "<error>";
  }
}

