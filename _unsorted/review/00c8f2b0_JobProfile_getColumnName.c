// addr: 0x00c8f2b0
// name: JobProfile_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * JobProfile_getColumnName(int columnIndex_) */

char * JobProfile_getColumnName(int columnIndex_)

{
                    /* Returns job/profile columns such as rank, stars available/earned,
                       badge/button/background image sets, MembersOnly, hint, and trial state. */
  switch(columnIndex_) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "Type";
  case 4:
    return "Rank";
  case 5:
    return "StarsAvailable";
  case 6:
    return "Icon";
  case 7:
    return "BadgeImageSet";
  case 8:
    return "ButtonImageSet";
  case 9:
    return "AbilityBgImageSet";
  case 10:
    return "MembersOnly";
  case 0xb:
    return "StarsEarned";
  case 0xc:
    return "RankPercent";
  case 0xd:
    return "Hint";
  case 0xe:
    return "Trial";
  case 0xf:
    return "TrialExpired";
  default:
    return "<error>";
  }
}

