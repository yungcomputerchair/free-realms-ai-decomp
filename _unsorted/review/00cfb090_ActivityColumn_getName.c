// addr: 0x00cfb090
// name: ActivityColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ActivityColumn_getName(undefined4 param_1)

{
                    /* Maps activity browser columns including display/name/description ids,
                       category, image set, position, join/featured/preferred flags, reward tooltip,
                       tutorial/app system ids, membership, image filenames, difficulty, and mystery
                       chest icon. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "DisplayNameId";
  case 2:
    return "DisplayDescriptionId";
  case 3:
    return "NameId";
  case 4:
    return "DescriptionId";
  case 5:
    return "Category";
  case 6:
    return "ImageSetId";
  case 7:
    return "ActivityPositionId";
  case 8:
    return "CanPlayerJoin";
  case 9:
    return "IsFeatured";
  case 10:
    return "IsPreferred";
  case 0xb:
    return "FeaturedRewardTooltipStringId";
  case 0xc:
    return "TutorialActivityId";
  case 0xd:
    return "AppSystemId";
  case 0xe:
    return "MembersOnly";
  case 0xf:
    return "DetailImageFilename";
  case 0x10:
    return "ThumbnailImageFilename";
  case 0x11:
    return "Difficulty";
  case 0x12:
    return "MysteryChestIcon";
  default:
    return "<error>";
  }
}

