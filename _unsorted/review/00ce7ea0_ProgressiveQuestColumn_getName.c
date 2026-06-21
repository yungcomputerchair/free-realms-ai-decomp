// addr: 0x00ce7ea0
// name: ProgressiveQuestColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ProgressiveQuestColumn_getName(undefined4 param_1)

{
                    /* Maps progressive quest summary columns including quest id, name, remaining
                       seconds, active slot, icon, objective string ids, small-window flag, and
                       button string ids. */
  switch(param_1) {
  case 0:
    return "ProgressiveQuestId";
  case 1:
    return "Name";
  case 2:
    return "SecondsRemaining";
  case 3:
    return "ActiveSlotId";
  case 4:
    return "IconId";
  case 5:
    return "ObjectiveStringId1";
  case 6:
    return "ObjectiveStringId2";
  case 7:
    return "ObjectiveStringId3";
  case 8:
    return "UseSmallWindow";
  case 9:
    return "ButtonStringIdOpen";
  case 10:
    return "ButtonStringIdOpened";
  case 0xb:
    return "ButtonStringIdBuy";
  default:
    return "<error>";
  }
}

