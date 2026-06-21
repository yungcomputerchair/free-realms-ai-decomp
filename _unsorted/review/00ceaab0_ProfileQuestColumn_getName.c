// addr: 0x00ceaab0
// name: ProfileQuestColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ProfileQuestColumn_getName(undefined4 param_1)

{
                    /* Returns profile quest/badge column labels including ProfileId, HasQuest,
                       IconId, BadgeId, QuestId, QuestTitle, QuestDescription, and ProfileRank. */
  switch(param_1) {
  case 0:
    return "ProfileId";
  case 1:
    return "HasQuest";
  case 2:
    return "IconId";
  case 3:
    return "BadgeId";
  case 4:
    return "QuestId";
  case 5:
    return "QuestTitle";
  case 6:
    return "QuestDescription";
  case 7:
    return "ProfileRank";
  default:
    return "<error>";
  }
}

