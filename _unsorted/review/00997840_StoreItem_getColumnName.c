// addr: 0x00997840
// name: StoreItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreItem_getColumnName(undefined4 param_1)

{
                    /* Maps base store item column indexes to field names such as ItemId, StoreId,
                       Price, rental/sale flags, tint info, and VIP requirement. */
  switch(param_1) {
  case 0:
    return "ItemId";
  case 1:
    return "StoreId";
  case 2:
    return "CategoryId";
  case 3:
    return "Name";
  case 4:
    return "Description";
  case 5:
    return "Price";
  case 6:
    return "ImageSetId";
  case 7:
    return "ImageTintValue";
  case 8:
    return "IsMembersOnly";
  case 9:
    return "IsOnSale";
  case 10:
    return "SalePrice";
  case 0xb:
    return "IsRentable";
  case 0xc:
    return "RentalPeriod";
  case 0xd:
    return "RentalPrice";
  case 0xe:
    return "HasTermsAndConditions";
  case 0xf:
    return "TermsAndConditions";
  case 0x10:
    return "MaxPerOrder";
  case 0x11:
    return "NumEntriesTotal";
  case 0x12:
    return "ItemListDetails";
  case 0x13:
    return "FirstItemId";
  case 0x14:
    return "HasContentDefinitions";
  case 0x15:
    return "LimitedEditionId";
  case 0x16:
    return "DisplayUseItNow";
  case 0x17:
    return "EquippableState";
  case 0x18:
    return "CanPreview";
  case 0x19:
    return "MaxPurchasable";
  case 0x1a:
    return "IsNewItem";
  case 0x1b:
    return "IsViewOnly";
  case 0x1c:
    return "IsTintable";
  case 0x1d:
    return "AvailableTintGroupId";
  case 0x1e:
    return "TintId";
  case 0x1f:
    return "GenderUsage";
  case 0x20:
    return "MembersOnlyPrice";
  case 0x21:
    return "VipRankRequirement";
  default:
    return "<error>";
  }
}

