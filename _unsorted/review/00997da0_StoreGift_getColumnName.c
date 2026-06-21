// addr: 0x00997da0
// name: StoreGift_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreGift_getColumnName(undefined4 param_1)

{
                    /* Maps gift/purchase record indexes to purchaser guid/name, gift message,
                       timestamp, and item entry count. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "PurchaserGuid";
  case 2:
    return "PurchaserName";
  case 3:
    return "GiftMessage";
  case 4:
    return "TimeStamp";
  case 5:
    return "ItemEntryCount";
  default:
    return "<error>";
  }
}

