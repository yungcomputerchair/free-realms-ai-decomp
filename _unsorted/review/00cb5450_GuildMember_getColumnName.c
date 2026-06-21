// addr: 0x00cb5450
// name: GuildMember_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * GuildMember_getColumnName(int columnIndex_) */

char * GuildMember_getColumnName(int columnIndex_)

{
                    /* Returns guild member columns including guid, name, rank, online, world id,
                       profile name/icons/rank, encounter/location/local flags, and Is Friend. */
  switch(columnIndex_) {
  case 0:
    return "Guid";
  case 1:
    return "Name";
  case 2:
    return "Rank";
  case 3:
    return "Online";
  case 4:
    return "World ID";
  case 5:
    return "Profile Name";
  case 6:
    return "Profile Icon ID";
  case 7:
    return "Profile Rank";
  case 8:
    return "Profile Background Image ID";
  case 9:
    return "In Encounter";
  case 10:
    return "Has Location";
  case 0xb:
    return "X Location";
  case 0xc:
    return "Z Location";
  case 0xd:
    return "Is Local";
  case 0xe:
    return "Is Friend";
  default:
    return "<error>";
  }
}

