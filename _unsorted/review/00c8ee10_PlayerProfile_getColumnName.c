// addr: 0x00c8ee10
// name: PlayerProfile_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * PlayerProfile_getColumnName(int columnIndex_) */

char * PlayerProfile_getColumnName(int columnIndex_)

{
                    /* Maps profile columns including Id, activation state, name/description/icon,
                       ProfileId, Experience, Rank, rank experience values, and RequiredLevel. */
  switch(columnIndex_) {
  case 0:
    return "Id";
  case 1:
    return "IsActivateable";
  case 2:
    return "Name";
  case 3:
    return "Description";
  case 4:
    return "Icon";
  case 5:
    return "ProfileId";
  case 6:
    return "Experience";
  case 7:
    return "Rank";
  case 8:
    return "RankExperience";
  case 9:
    return "RankMaxExperience";
  case 10:
    return "RequiredLevel";
  default:
    return "<error>";
  }
}

