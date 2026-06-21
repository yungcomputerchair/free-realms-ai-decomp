// addr: 0x00cf7a10
// name: QuestJournalColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * QuestJournalColumn_getName(undefined4 param_1)

{
                    /* Maps quest journal row columns to quest id/title/description, start time,
                       completion percentage, job badge/icon/level, objective count, membership,
                       helper text, icon id, and system quest flag. */
  switch(param_1) {
  case 0:
    return "Quest Id";
  case 1:
    return "Quest Title";
  case 2:
    return "Quest Description";
  case 3:
    return "Time Started";
  case 4:
    return "Completed Percentage";
  case 5:
    return "Job Background Badge Id";
  case 6:
    return "Job Icon Id";
  case 7:
    return "Job Level";
  case 8:
    return "Objective Count";
  case 9:
    return "Members Only";
  case 10:
    return "Helper Text";
  case 0xb:
    return "Icon Id";
  case 0xc:
    return "System Quest";
  default:
    return "<error>";
  }
}

