// addr: 0x009c6e10
// name: DailyChest_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * DailyChest_getColumnName(undefined4 param_1)

{
                    /* Maps chest reward/activity fields including ChestId, detail/chest image and
                       string IDs, seconds left, member-only flag, random activity/image, and
                       IsAllowed. */
  switch(param_1) {
  case 0:
    return "ChestId";
  case 1:
    return "DetailStringId";
  case 2:
    return "DetailImageId";
  case 3:
    return "ChestImageId";
  case 4:
    return "ChestNameId";
  case 5:
    return "ChestDescriptionId";
  case 6:
    return "SecondsLeft";
  case 7:
    return "MemberOnly";
  case 8:
    return "RandomActivity";
  case 9:
    return "RandomImageSetId";
  case 10:
    return "IsAllowed";
  default:
    return "<error>";
  }
}

