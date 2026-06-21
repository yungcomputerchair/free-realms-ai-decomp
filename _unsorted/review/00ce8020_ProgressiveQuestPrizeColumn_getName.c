// addr: 0x00ce8020
// name: ProgressiveQuestPrizeColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ProgressiveQuestPrizeColumn_getName(undefined4 param_1)

{
                    /* Maps progressive quest prize columns to PrizeSlotId, IconId, ProgressPercent,
                       CanClaimPrizeItem, Tooltip, Name, and ProgressiveQuestId. */
  switch(param_1) {
  case 0:
    return "PrizeSlotId";
  case 1:
    return "IconId";
  case 2:
    return "ProgressPercent";
  case 3:
    return "CanClaimPrizeItem";
  case 4:
    return "Tooltip";
  case 5:
    return "Name";
  case 6:
    return "ProgressiveQuestId";
  default:
    return "<error>";
  }
}

