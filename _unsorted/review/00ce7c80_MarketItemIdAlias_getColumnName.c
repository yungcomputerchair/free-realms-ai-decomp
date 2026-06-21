// addr: 0x00ce7c80
// name: MarketItemIdAlias_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MarketItemIdAlias_getColumnName(int columnIndex_) */

char * MarketItemIdAlias_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Overrides the first market item columns to Id and ItemId before delegating to
                       MarketItem_getColumnName. */
  if (columnIndex_ == 0) {
    return "Id";
  }
  if (columnIndex_ != 1) {
    pcVar1 = MarketItem_getColumnName(columnIndex_);
    return pcVar1;
  }
  return "ItemId";
}

