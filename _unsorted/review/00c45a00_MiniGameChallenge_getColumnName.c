// addr: 0x00c45a00
// name: MiniGameChallenge_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MiniGameChallenge_getColumnName(int columnIndex_) */

char * MiniGameChallenge_getColumnName(int columnIndex_)

{
                    /* Returns mini-game challenge column labels such as Difficulty, Elapsed Time,
                       Earned Stars, Total Score, MiniGame Id, HowToSwfName, and LeaderboardId. */
  switch(columnIndex_) {
  case 0:
    return "Name";
  case 1:
    return "Icon ID";
  case 2:
    return "Description";
  case 3:
    return "Difficulty";
  case 4:
    return "Type";
  case 5:
    return "Elapsed Time";
  case 6:
    return "Earned Stars";
  case 7:
    return "Members Only";
  case 8:
    return "Profile Type";
  case 9:
    return "Has Action Bar";
  case 10:
    return "Total Score";
  case 0xb:
    return "MiniGame Id";
  case 0xc:
    return "IsFlash";
  case 0xd:
    return "IsMicro";
  case 0xe:
    return "HowToSwfName";
  case 0xf:
    return "Param1";
  case 0x10:
    return "LeaderboardId";
  default:
    return "<error>";
  }
}

