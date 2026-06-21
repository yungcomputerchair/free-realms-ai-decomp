// addr: 0x00a6d960
// name: InventorySaleItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * InventorySaleItem_getColumnName(int columnIndex_) */

char * InventorySaleItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Extends InventoryItemDetail_getColumnName with Price and NoSale columns. */
  if (columnIndex_ == 0x1b) {
    return "Price";
  }
  if (columnIndex_ != 0x1c) {
    pcVar1 = InventoryItemDetail_getColumnName(columnIndex_);
    return pcVar1;
  }
  return "NoSale";
}

