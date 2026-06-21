// addr: 0x00cf5d60
// name: TradeInventoryItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * TradeInventoryItem_getColumnName(int columnIndex_) */

char * TradeInventoryItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Extends InventoryItemDetail_getColumnName with Available Count and No Trade
                       Message fields for trading UI. */
  if (columnIndex_ == 0x1b) {
    return "Available Count";
  }
  if (columnIndex_ != 0x1c) {
    pcVar1 = InventoryItemDetail_getColumnName(columnIndex_);
    return pcVar1;
  }
  return "No Trade Message";
}

