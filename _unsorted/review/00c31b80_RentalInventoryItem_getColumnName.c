// addr: 0x00c31b80
// name: RentalInventoryItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * RentalInventoryItem_getColumnName(int columnIndex_) */

char * RentalInventoryItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Adds IsRental and RentalSecondsRemaining columns to
                       InventoryItemDetail_getColumnName. */
  if (columnIndex_ == 0x1b) {
    return "IsRental";
  }
  if (columnIndex_ != 0x1c) {
    pcVar1 = InventoryItemDetail_getColumnName(columnIndex_);
    return pcVar1;
  }
  return "RentalSecondsRemaining";
}

