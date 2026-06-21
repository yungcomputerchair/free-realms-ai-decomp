// addr: 0x00cfb1a0
// name: ScheduledActivityColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ScheduledActivityColumn_getName(undefined4 param_1)

{
                    /* Returns scheduled activity columns for GMT/local start/end dates and times,
                       epochs, countdowns, display time strings, activity id, and activity metadata
                       fields. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "GmtStartDate";
  case 2:
    return "GmtStartTime";
  case 3:
    return "GmtEndDate";
  case 4:
    return "GmtEndTime";
  case 5:
    return "LocalStartDate";
  case 6:
    return "LocalStartTime";
  case 7:
    return "LocalEndDate";
  case 8:
    return "LocalEndTime";
  case 9:
    return "StartEpoch";
  case 10:
    return "EndEpoch";
  case 0xb:
    return "SecondsUntilStart";
  case 0xc:
    return "SecondsUntilEnd";
  case 0xd:
    return "DisplayStartTime";
  case 0xe:
    return "DisplayEndTime";
  case 0xf:
    return "StartDateNonLocalized";
  case 0x10:
    return "EndDateNonLocalized";
  case 0x11:
    return "ActivityId";
  case 0x12:
    return "DisplayNameId";
  case 0x13:
    return "DisplayDescriptionId";
  case 0x14:
    return "NameId";
  case 0x15:
    return "DescriptionId";
  case 0x16:
    return "Category";
  case 0x17:
    return "ImageSetId";
  case 0x18:
    return "ActivityPositionId";
  case 0x19:
    return "CanPlayerJoin";
  case 0x1a:
    return "IsFeatured";
  case 0x1b:
    return "IsPreferred";
  case 0x1c:
    return "FeaturedRewardTooltipStringId";
  case 0x1d:
    return "TutorialActivityId";
  case 0x1e:
    return "AppSystemId";
  case 0x1f:
    return "MembersOnly";
  case 0x20:
    return "DetailImageFilename";
  case 0x21:
    return "ThumbnailImageFilename";
  default:
    return "<error>";
  }
}

