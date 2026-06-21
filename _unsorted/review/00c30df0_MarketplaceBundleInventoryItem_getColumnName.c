// addr: 0x00c30df0
// name: MarketplaceBundleInventoryItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MarketplaceBundleInventoryItem_getColumnName(int columnIndex_) */

char * MarketplaceBundleInventoryItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Adds MarketplaceBundleId at index 0x1b and delegates other fields to
                       InventoryItemDetail_getColumnName. */
  if (columnIndex_ != 0x1b) {
    pcVar1 = InventoryItemDetail_getColumnName(columnIndex_);
    return pcVar1;
  }
  return "MarketplaceBundleId";
}

