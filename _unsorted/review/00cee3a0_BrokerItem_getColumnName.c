// addr: 0x00cee3a0
// name: BrokerItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * BrokerItem_getColumnName(int columnIndex_) */

char * BrokerItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Adds broker listing columns: item guid, list price, time-left seconds, seller
                       name, and sale status, after inventory sale item fields. */
  switch(columnIndex_) {
  case 0x1d:
    return "Broker Item Guid";
  case 0x1e:
    return "Broker List Price";
  case 0x1f:
    return "Broker Item Time left Secs";
  case 0x20:
    return "Broker Item Seller Name";
  case 0x21:
    return "Status, 1 = ForSale, 2 = Sold, 3 = Expired";
  default:
    pcVar1 = InventorySaleItem_getColumnName(columnIndex_);
    return pcVar1;
  }
}

