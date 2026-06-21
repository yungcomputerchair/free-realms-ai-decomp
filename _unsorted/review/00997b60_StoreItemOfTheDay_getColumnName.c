// addr: 0x00997b60
// name: StoreItemOfTheDay_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * StoreItemOfTheDay_getColumnName(int columnIndex_) */

char * StoreItemOfTheDay_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Extends StoreItem_getColumnName with QuantityAvailable, TimeRemaining,
                       IOTDPrice, and Message fields for an item-of-the-day/store offer. */
  switch(columnIndex_) {
  case 0x22:
    return "QuantityAvailable";
  case 0x23:
    return "TimeRemaining";
  case 0x24:
    return "IOTDPrice";
  case 0x25:
    return "Message";
  default:
    pcVar1 = (char *)StoreItem_getColumnName();
    return pcVar1;
  }
}

