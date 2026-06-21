// addr: 0x00c65d90
// name: CombatLeaderboardEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * CombatLeaderboardEntry_getColumnName(int columnIndex_) */

char * CombatLeaderboardEntry_getColumnName(int columnIndex_)

{
                    /* Returns ranking entry columns Position, Guid, Name, Score, and Damage. */
  switch(columnIndex_) {
  case 0:
    return "Position";
  case 1:
    return "Guid";
  case 2:
    return "Name";
  case 3:
    return "Score";
  case 4:
    return "Damage";
  default:
    return "<error>";
  }
}

