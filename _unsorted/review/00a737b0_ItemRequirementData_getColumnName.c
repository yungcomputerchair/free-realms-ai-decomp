// addr: 0x00a737b0
// name: ItemRequirementData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ItemRequirementData_getColumnName(undefined4 param_1)

{
                    /* Maps requirement/equipment columns including Required, Members Only, Min
                       Profile Rank, Is Equippable, Is Required, and Slot Name. */
  switch(param_1) {
  case 0:
    return "Required";
  case 1:
    return "Members Only";
  case 2:
    return "Min Profile Rank";
  case 3:
    return "Is Equippable";
  case 4:
    return "Is Required";
  case 5:
    return "Slot Name";
  default:
    return "<error>";
  }
}

