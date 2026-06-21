// addr: 0x00cb7710
// name: AchievementGoal_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * AchievementGoal_getColumnName(int columnIndex_) */

char * AchievementGoal_getColumnName(int columnIndex_)

{
                    /* Maps achievement/goal columns including ID, Text, Icon ID, Is Bonus, Status,
                       MembersOnly, Category Prefix, Goal Count, and Goal Total. */
  switch(columnIndex_) {
  case 0:
    return "ID";
  case 1:
    return "Text";
  case 2:
    return "Icon ID";
  case 3:
    return "Is Bonus";
  case 4:
    return "Status";
  case 5:
    return "MembersOnly";
  case 6:
    return "Category Prefix";
  case 7:
    return "Goal Count";
  case 8:
    return "Goal Total";
  default:
    return "<error>";
  }
}

