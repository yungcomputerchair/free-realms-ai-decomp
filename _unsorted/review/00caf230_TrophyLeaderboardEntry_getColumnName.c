// addr: 0x00caf230
// name: TrophyLeaderboardEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * TrophyLeaderboardEntry_getColumnName(int columnIndex_) */

char * TrophyLeaderboardEntry_getColumnName(int columnIndex_)

{
                    /* Maps leaderboard entry columns including position, guid/name,
                       color/flag/gold, kills, score, and three trophy icon/title/description
                       groups. */
  switch(columnIndex_) {
  case 0:
    return "Position";
  case 1:
    return "Guid";
  case 2:
    return "Name";
  case 3:
    return "Color";
  case 4:
    return "Flag";
  case 5:
    return "Gold";
  case 6:
    return "Kills";
  case 7:
    return "Score";
  case 8:
    return "Trophy1Icon";
  case 9:
    return "Trophy1Title";
  case 10:
    return "Trophy1Desc";
  case 0xb:
    return "Trophy2Icon";
  case 0xc:
    return "Trophy2Title";
  case 0xd:
    return "Trophy2Desc";
  case 0xe:
    return "Trophy3Icon";
  case 0xf:
    return "Trophy3Title";
  case 0x10:
    return "Trophy3Desc";
  default:
    return "<error>";
  }
}

