// addr: 0x00997bb0
// name: StoreItemOfTheDayAlt_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * StoreItemOfTheDayAlt_getColumnName(int columnIndex_) */

char * StoreItemOfTheDayAlt_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Duplicate/alternate item-of-the-day store column mapper adding
                       QuantityAvailable, TimeRemaining, IOTDPrice, and Message before falling back
                       to StoreItem_getColumnName. */
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

