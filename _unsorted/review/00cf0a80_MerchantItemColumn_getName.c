// addr: 0x00cf0a80
// name: MerchantItemColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MerchantItemColumn_getName(undefined4 param_1)

{
                    /* Maps merchant item row columns to Id, Type, MerchantGuid, ItemId, Quantity,
                       TintId, Price, BoughtBack, and QuantityRemaining. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Type";
  case 2:
    return "MerchantGuid";
  case 3:
    return "ItemId";
  case 4:
    return "Quantity";
  case 5:
    return "TintId";
  case 6:
    return "Price";
  case 7:
    return "BoughtBack";
  case 8:
    return "QuantityRemaining";
  default:
    return "<error>";
  }
}

