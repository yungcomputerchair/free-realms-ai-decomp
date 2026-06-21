// addr: 0x00c69150
// name: ItemReward_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ItemReward_getColumnName(int columnIndex_) */

char * ItemReward_getColumnName(int columnIndex_)

{
                    /* Maps item reward columns including ItemId, StackCount, ImageSetId,
                       ImageTintValue, NameId, and DescriptionId. */
  switch(columnIndex_) {
  case 0:
    return "ItemId";
  case 1:
    return "StackCount";
  case 2:
    return "ImageSetId";
  case 3:
    return "ImageTintValue";
  case 4:
    return "NameId";
  case 5:
    return "DescriptionId";
  default:
    return "<error>";
  }
}

