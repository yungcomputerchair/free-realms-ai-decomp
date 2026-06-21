// addr: 0x00a6db10
// name: InventoryRentalSaleItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * InventoryRentalSaleItem_getColumnName(int columnIndex_) */

char * InventoryRentalSaleItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Extends inventory sale item columns with Price, NoSale, IsRental, and
                       RentalSecondsRemaining. */
  if (columnIndex_ == 0x1d) {
    return "IsRental";
  }
  if (columnIndex_ == 0x1e) {
    return "RentalSecondsRemaining";
  }
  if (columnIndex_ == 0x1b) {
    return "Price";
  }
  if (columnIndex_ != 0x1c) {
    pcVar1 = InventoryItemDetail_getColumnName(columnIndex_);
    return pcVar1;
  }
  return "NoSale";
}

