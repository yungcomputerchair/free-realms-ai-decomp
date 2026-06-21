// addr: 0x00c978c0
// name: QuestJournalQuest_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * QuestJournalQuest_getColumnName(int columnIndex_) */

char * QuestJournalQuest_getColumnName(int columnIndex_)

{
                    /* Maps quest journal columns including Quest Id/Title/Description, time
                       started, completion percentage, job badge/icon/level, objectives, membership,
                       helper/icon, and system quest flag. */
  switch(columnIndex_) {
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

