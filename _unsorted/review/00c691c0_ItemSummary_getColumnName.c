// addr: 0x00c691c0
// name: ItemSummary_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ItemSummary_getColumnName(int columnIndex_) */

char * ItemSummary_getColumnName(int columnIndex_)

{
                    /* Returns compact item columns ItemId, ItemName, ItemQuantity, ItemImageSetId,
                       and ItemTint. */
  switch(columnIndex_) {
  case 0:
    return "ItemId";
  case 1:
    return "ItemName";
  case 2:
    return "ItemQuantity";
  case 3:
    return "ItemImageSetId";
  case 4:
    return "ItemTint";
  default:
    return "<error>";
  }
}

