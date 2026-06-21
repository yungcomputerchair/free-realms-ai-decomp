// addr: 0x00c64940
// name: InventoryItemSummary_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * InventoryItemSummary_getColumnName(int columnIndex_) */

char * InventoryItemSummary_getColumnName(int columnIndex_)

{
                    /* Returns inventory item summary columns including ItemId, ItemGuid, IconId,
                       Description, Quantity, MembersOnly, TintValue, OverrideTintId,
                       FoundationGuid, and IsAllowed. */
  switch(columnIndex_) {
  case 0:
    return "ItemId";
  case 1:
    return "ItemGuid";
  case 2:
    return "IconId";
  case 3:
    return "Name";
  case 4:
    return "Description";
  case 5:
    return "Quantity";
  case 6:
    return "MembersOnly";
  case 7:
    return "TintValue";
  case 8:
    return "New";
  case 9:
    return "OverrideTintId";
  case 10:
    return "TextColor";
  case 0xb:
    return "FoundationGuid";
  case 0xc:
    return "IsAllowed";
  default:
    return "<error>";
  }
}

