// addr: 0x00cb2db0
// name: FriendListEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * FriendListEntry_getColumnName(int columnIndex_) */

char * FriendListEntry_getColumnName(int columnIndex_)

{
                    /* Returns friend list columns including FriendName, location X/Z, guid,
                       online/status, profile name/rank/icons, popularity, encounter/local status,
                       high score, current mini-game type/name, and static-zone flag. */
  switch(columnIndex_) {
  case 0:
    return "FriendName";
  case 1:
    return "LocationX";
  case 2:
    return "LocationZ";
  case 3:
    return "Guid";
  case 4:
    return "Online";
  case 5:
    return "Online Status";
  case 6:
    return "Profile Name";
  case 7:
    return "Profile Rank";
  case 8:
    return "Profile Icon ID";
  case 9:
    return "Profile Background Image ID";
  case 10:
    return "Popularity";
  case 0xb:
    return "In Encounter";
  case 0xc:
    return "Is Local";
  case 0xd:
    return "Status";
  case 0xe:
    return "HighScore";
  case 0xf:
    return "Current Mini Game Type";
  case 0x10:
    return "Current Mini Game Name";
  case 0x11:
    return "Is In Static Zone";
  default:
    return "<error>";
  }
}

