// addr: 0x00cd6f90
// name: SoccerPlayerStatsColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * SoccerPlayerStatsColumn_getName(undefined4 param_1)

{
                    /* Maps player match statistics columns to Name, Guid, Goals, Steals,
                       Knockdowns, Dodges, and Score. */
  switch(param_1) {
  case 0:
    return "Name";
  case 1:
    return "Guid";
  case 2:
    return "Goals";
  case 3:
    return "Steals";
  case 4:
    return "Knockdowns";
  case 5:
    return "Dodges";
  case 6:
    return "Score";
  default:
    return "<error>";
  }
}

