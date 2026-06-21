// addr: 0x00ce37d0
// name: AchievementColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * AchievementColumn_getName(undefined4 param_1)

{
                    /* Returns achievement/trophy column labels including title, description,
                       timing, completion, objective count, member-only flag, icon/trophy fields,
                       points, tint, category, and rewards. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Title";
  case 2:
    return "Description";
  case 3:
    return "Time Started";
  case 4:
    return "Time Finished";
  case 5:
    return "Complete";
  case 6:
    return "Objective Count";
  case 7:
    return "Members Only";
  case 8:
    return "Icon Id";
  case 9:
    return "Trophy Id";
  case 10:
    return "Trophy Name";
  case 0xb:
    return "Trophy Description";
  case 0xc:
    return "Points";
  case 0xd:
    return "Tint Id";
  case 0xe:
    return "Category";
  case 0xf:
    return "Reward ID";
  case 0x10:
    return "Reward Message";
  default:
    return "<error>";
  }
}

