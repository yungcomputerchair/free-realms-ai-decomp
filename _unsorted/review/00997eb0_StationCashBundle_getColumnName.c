// addr: 0x00997eb0
// name: StationCashBundle_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StationCashBundle_getColumnName(undefined4 param_1)

{
                    /* Returns Station Cash bundle fields including total/promotional amounts,
                       retail price, sale price, and IsOnSale. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "TotalStationCashAmount";
  case 2:
    return "PromotionalStationCashAmount";
  case 3:
    return "PromotionalStationCashGranted";
  case 4:
    return "RetailPrice";
  case 5:
    return "SalePrice";
  case 6:
    return "IsOnSale";
  default:
    return "<error>";
  }
}

