// addr: 0x00cb09d0
// name: InventoryItemDetail_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * InventoryItemDetail_getColumnName(int columnIndex_) */

char * InventoryItemDetail_getColumnName(int columnIndex_)

{
                    /* Returns detailed inventory item columns including Item Guid,
                       icon/name/description, quantity, membership, tint/equippable/slot/new flags,
                       rarity, model/type/tint override, power/stat fields, profile rank, item id,
                       storage/inventory flags, and equipped-on-any-profile state. */
  switch(columnIndex_) {
  case 0:
    return "Item Guid";
  case 1:
    return "Icon ID";
  case 2:
    return "Name";
  case 3:
    return "Description";
  case 4:
    return "Quantity";
  case 5:
    return "Members Only";
  case 6:
    return "Tint Value";
  case 7:
    return "Equippable State";
  case 8:
    return "Slot";
  case 9:
    return "New";
  case 10:
    return "Is Activatable";
  case 0xb:
    return "Rarity";
  case 0xc:
    return "Is Equipped";
  case 0xd:
    return "Model Name";
  case 0xe:
    return "Item Type";
  case 0xf:
    return "Override Tint Id";
  case 0x10:
    return "Activate Enabled";
  case 0x11:
    return "Power Rating";
  case 0x12:
    return "Gender Usage";
  case 0x13:
    return "List View Stat Id";
  case 0x14:
    return "List View Stat Value";
  case 0x15:
    return "Min Profile Rank";
  case 0x16:
    return "Text Color";
  case 0x17:
    return "Item ID";
  case 0x18:
    return "In Storage";
  case 0x19:
    return "In Inventory";
  case 0x1a:
    return "Is Equipped On Any Profile";
  default:
    return "<error>";
  }
}

