// addr: 0x00cc0020
// name: MarketplaceInventoryItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MarketplaceInventoryItem_getColumnName(int columnIndex_) */

char * MarketplaceInventoryItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Adds IsInMarketplace at index 0x1b and delegates other columns to
                       InventoryItemDetail_getColumnName. */
  if (columnIndex_ != 0x1b) {
    pcVar1 = InventoryItemDetail_getColumnName(columnIndex_);
    return pcVar1;
  }
  return "IsInMarketplace";
}

