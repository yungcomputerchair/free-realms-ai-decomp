// addr: 0x00cf7ae0
// name: QuestObjectiveColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * QuestObjectiveColumn_getName(undefined4 param_1)

{
                    /* Returns quest objective/status labels Name, Description, Status, NotUsed, and
                       Id. */
  switch(param_1) {
  case 0:
    return "Name";
  case 1:
    return "Description";
  case 2:
    return "Status";
  case 3:
  case 4:
    return "NotUsed";
  case 5:
    return "Id";
  default:
    return "<error>";
  }
}

