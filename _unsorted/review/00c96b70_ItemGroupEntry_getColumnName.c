// addr: 0x00c96b70
// name: ItemGroupEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ItemGroupEntry_getColumnName(int columnIndex_) */

char * ItemGroupEntry_getColumnName(int columnIndex_)

{
                    /* Returns item group columns GroupId, ItemId, ItemCount, IsEquipped, and
                       IsMarketPlaceItem. */
  switch(columnIndex_) {
  case 0:
    return "GroupId";
  case 1:
    return "ItemId";
  case 2:
    return "ItemCount";
  case 3:
    return "IsEquipped";
  case 4:
    return "IsMarketPlaceItem";
  default:
    return "<error>";
  }
}

