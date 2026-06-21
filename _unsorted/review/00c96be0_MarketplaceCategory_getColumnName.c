// addr: 0x00c96be0
// name: MarketplaceCategory_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MarketplaceCategory_getColumnName(int columnIndex_) */

char * MarketplaceCategory_getColumnName(int columnIndex_)

{
                    /* Maps marketplace category/page columns such as Id, Name, Description,
                       SortOrder, Items, IconId, CategoryId, PageId, NumberOfItemsPlayerHas, and
                       IsNew. */
  switch(columnIndex_) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "SortOrder";
  case 4:
    return "Items";
  case 5:
    return "IconId";
  case 6:
    return "CategoryId";
  case 7:
    return "PageId";
  case 8:
    return "NumberOfItemsPlayerHas";
  case 9:
    return "IsNew";
  default:
    return "<error>";
  }
}

