// addr: 0x00ce3980
// name: AchievementObjectiveColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * AchievementObjectiveColumn_getName(undefined4 param_1)

{
                    /* Maps objective/status columns to Name, Description, Status, Completed,
                       NotUsed, and Id. */
  switch(param_1) {
  case 0:
    return "Name";
  case 1:
    return "Description";
  case 2:
    return "Status";
  case 3:
    return "Completed";
  case 4:
    return "NotUsed";
  case 5:
    return "Id";
  default:
    return "<error>";
  }
}

