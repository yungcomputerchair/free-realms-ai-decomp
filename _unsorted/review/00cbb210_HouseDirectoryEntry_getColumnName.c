// addr: 0x00cbb210
// name: HouseDirectoryEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * HouseDirectoryEntry_getColumnName(int columnIndex_) */

char * HouseDirectoryEntry_getColumnName(int columnIndex_)

{
                    /* Maps house directory columns including instance/owner ids, owner and house
                       names, icon, fixture count, visit/furniture/lock/member fields, description,
                       keywords, rating/votes, creation time, and flora permission. */
  switch(columnIndex_) {
  case 0:
    return "Instance Guid";
  case 1:
    return "Owner Guid";
  case 2:
    return "Owner Name";
  case 3:
    return "House Name";
  case 4:
    return "Icon Id";
  case 5:
    return "FixtureCount";
  case 6:
    return "LastVisited";
  case 7:
    return "FurnitureScore";
  case 8:
    return "IsLocked";
  case 9:
    return "Is Members Only";
  case 10:
    return "Description";
  case 0xb:
    return "Keyword List";
  case 0xc:
    return "Rating";
  case 0xd:
    return "Votes";
  case 0xe:
    return "HasRating";
  case 0xf:
    return "CanVote";
  case 0x10:
    return "WhenCreated";
  case 0x11:
    return "IsFloraAllowed";
  default:
    return "<error>";
  }
}

