// addr: 0x00c2c000
// name: VehicleInventoryItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * VehicleInventoryItem_getColumnName(int columnIndex_) */

char * VehicleInventoryItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Adds an Active Vehicle column while delegating all other columns to
                       InventoryItemDetail_getColumnName. */
  if (columnIndex_ != 6) {
    pcVar1 = InventoryItemDetail_getColumnName(columnIndex_);
    return pcVar1;
  }
  return "Active Vehicle";
}

