// addr: 0x00cf07f0
// name: MarketBundleItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MarketBundleItem_getColumnName(int columnIndex_) */

char * MarketBundleItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Extends MarketItem_getColumnName with bundle/store pricing columns including
                       coin purchase/sell price, item guid list, no-sale, preview, available tints
                       group, and member purchase price. */
  switch(columnIndex_) {
  case 0x29:
    return "Coin Purchase Price";
  case 0x2a:
    return "Coin Sell Price";
  case 0x2b:
    return "Item Guid List";
  case 0x2c:
    return "No Sale";
  case 0x2d:
    return "Can Preview";
  case 0x2e:
    return "Available Tints Group ID";
  case 0x2f:
    return "Member Purchase Price";
  default:
    pcVar1 = MarketItem_getColumnName(columnIndex_);
    return pcVar1;
  }
}

