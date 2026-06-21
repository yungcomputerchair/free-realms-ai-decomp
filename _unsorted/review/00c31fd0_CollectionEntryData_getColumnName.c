// addr: 0x00c31fd0
// name: CollectionEntryData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CollectionEntryData_getColumnName(undefined4 param_1)

{
                    /* Maps collection entry columns: Collection ID, Entry ID, Name, Image Set ID,
                       Index, Is Collected, and Image Tint Value. */
  switch(param_1) {
  case 0:
    return "Collection ID";
  case 1:
    return "Entry ID";
  case 2:
    return "Name";
  case 3:
    return "Image Set ID";
  case 4:
    return "Index";
  case 5:
    return "Is Collected";
  case 6:
    return "Image Tint Value";
  default:
    return "<error>";
  }
}

