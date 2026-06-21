// addr: 0x00cd6ee0
// name: SoccerTeamStatsColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * SoccerTeamStatsColumn_getName(undefined4 param_1)

{
                    /* Returns team match statistics labels including Name, Color, Score, shots,
                       knockdowns, pickups, and steals split by half. */
  switch(param_1) {
  case 0:
    return "Name";
  case 1:
    return "Color";
  case 2:
    return "Score";
  case 3:
    return "Shots1stHalf";
  case 4:
    return "Shots2ndHalf";
  case 5:
    return "Knockdowns1stHalf";
  case 6:
    return "Knockdowns2ndHalf";
  case 7:
    return "Pickups1stHalf";
  case 8:
    return "Pickups2ndHalf";
  case 9:
    return "Steals1stHalf";
  case 10:
    return "Steals2ndHalf";
  default:
    return "<error>";
  }
}

