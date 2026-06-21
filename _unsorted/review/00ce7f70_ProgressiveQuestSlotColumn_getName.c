// addr: 0x00ce7f70
// name: ProgressiveQuestSlotColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ProgressiveQuestSlotColumn_getName(undefined4 param_1)

{
                    /* Returns labels for progressive quest slot/key state fields including SlotId,
                       IconId, item possession, quest eligibility, key bundle data, claim state,
                       tooltip, name, and ProgressiveQuestId. */
  switch(param_1) {
  case 0:
    return "SlotId";
  case 1:
    return "IconId";
  case 2:
    return "HasSlotItem";
  case 3:
    return "HasKeyItem";
  case 4:
    return "CanDoQuest";
  case 5:
    return "CanPurchaseKeyItem";
  case 6:
    return "KeyBundleId";
  case 7:
    return "KeyBundlePrice";
  case 8:
    return "CanClaimSlotItem";
  case 9:
    return "Tooltip";
  case 10:
    return "Name";
  case 0xb:
    return "ProgressiveQuestId";
  default:
    return "<error>";
  }
}

