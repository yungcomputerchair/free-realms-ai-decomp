// addr: 0x00cfb370
// name: ActivityRewardColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * ActivityRewardColumn_getName(undefined4 param_1)

{
                    /* Maps a compact activity reward/metadata row to Id, NameId, DescriptionId,
                       ThumbnailImageFilename, and MysteryChestIcon. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "NameId";
  case 2:
    return "DescriptionId";
  case 3:
    return "ThumbnailImageFilename";
  case 4:
    return "MysteryChestIcon";
  default:
    return "<error>";
  }
}

