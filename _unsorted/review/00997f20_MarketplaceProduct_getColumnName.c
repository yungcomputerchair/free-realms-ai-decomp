// addr: 0x00997f20
// name: MarketplaceProduct_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MarketplaceProduct_getColumnName(undefined4 param_1)

{
                    /* Maps product metadata columns such as name, description, local/Station Cash
                       prices, VAT taxable flag, SKU, marketing/legal text, highlight, and sort
                       order. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "PriceLocalCurrency";
  case 4:
    return "PriceStationCash";
  case 5:
    return "IsVatTaxable";
  case 6:
    return "Sku";
  case 7:
    return "MarketingDescription";
  case 8:
    return "ProductLegalText";
  case 9:
    return "Highlight";
  case 10:
    return "SortOrder";
  default:
    return "<error>";
  }
}

