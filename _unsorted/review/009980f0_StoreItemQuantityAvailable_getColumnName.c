// addr: 0x009980f0
// name: StoreItemQuantityAvailable_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * StoreItemQuantityAvailable_getColumnName(int columnIndex_) */

char * StoreItemQuantityAvailable_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Adds a QuantityAvailable column at index 0x22 and otherwise delegates to
                       StoreItem_getColumnName. */
  if (columnIndex_ != 0x22) {
    pcVar1 = (char *)StoreItem_getColumnName();
    return pcVar1;
  }
  return "QuantityAvailable";
}

