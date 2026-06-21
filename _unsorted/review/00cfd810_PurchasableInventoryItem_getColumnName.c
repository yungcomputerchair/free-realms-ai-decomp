// addr: 0x00cfd810
// name: PurchasableInventoryItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * PurchasableInventoryItem_getColumnName(int columnIndex_) */

char * PurchasableInventoryItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Extends sale inventory columns with available tint group, member purchase
                       price, Can Buy, Tint ID, Max Count, and purchasable quantity fields. */
  switch(columnIndex_) {
  case 0x1d:
    return "Available Tint Group ID";
  case 0x1e:
    return "Member Purchase Price";
  case 0x1f:
    return "Can Buy";
  case 0x20:
    return "Tint ID";
  case 0x21:
    return "Max Count";
  case 0x22:
    return "Purchasable Qty (-1: infin)";
  default:
    pcVar1 = InventorySaleItem_getColumnName(columnIndex_);
    return pcVar1;
  }
}

