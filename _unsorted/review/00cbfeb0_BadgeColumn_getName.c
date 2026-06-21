// addr: 0x00cbfeb0
// name: BadgeColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * BadgeColumn_getName(undefined4 param_1)

{
                    /* Returns badge/rank column labels including ID, Rank, Name, Icon ID, and Badge
                       Image ID. */
  switch(param_1) {
  case 0:
    return "ID";
  case 1:
    return "Rank";
  case 2:
    return "Name";
  case 3:
    return "Icon ID";
  case 4:
    return "Badge Image ID";
  default:
    return "<error>";
  }
}

