// addr: 0x00c69cd0
// name: BundleItemList_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * BundleItemList_getColumnName(int columnIndex_) */

char * BundleItemList_getColumnName(int columnIndex_)

{
                    /* Returns bundle/list display columns including Name, Description, ImageSetId,
                       TintValue, ItemListDetails, BundleId, ItemId, and Quantity. */
  switch(columnIndex_) {
  case 0:
  case 8:
    return "Name";
  case 1:
    return "Description";
  case 2:
    return "ImageSetId";
  case 3:
    return "TintValue";
  case 4:
    return "ItemListDetails";
  case 5:
    return "BundleId";
  case 6:
    return "ItemId";
  case 7:
    return "Quantity";
  default:
    return "<error>";
  }
}

