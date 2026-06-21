// addr: 0x00c45760
// name: AchievementCategoryData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * AchievementCategoryData_getColumnName(undefined4 param_1)

{
                    /* Returns achievement/category style columns: ID, Name, Description, Bonus,
                       Status Text, State, Reward Stars, MembersOnly, and CategoryPrefix. */
  switch(param_1) {
  case 0:
    return "ID";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "Bonus";
  case 4:
    return "Status Text";
  case 5:
    return "State";
  case 6:
    return "Reward Stars";
  case 7:
    return "MembersOnly";
  case 8:
    return "CategoryPrefix";
  default:
    return "<error>";
  }
}

