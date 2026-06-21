// addr: 0x00c92c10
// name: MarketItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MarketItem_getColumnName(int columnIndex_) */

char * MarketItem_getColumnName(int columnIndex_)

{
                    /* Large marketplace item column mapper covering item definition id, category,
                       requirements, tint/model/effect/stat fields, purchase/sell prices, inventory
                       quantities, wishlist/store ids, item type/class, stack counts, and CanBuy. */
  switch(columnIndex_) {
  case 0:
    return "Item Definition Id";
  case 1:
    return "Icon ID";
  case 2:
    return "Name";
  case 3:
    return "Description";
  case 4:
    return "Category Name";
  case 5:
    return "Members Only";
  case 6:
    return "Tint Value";
  case 7:
    return "Gender Usage";
  case 8:
    return "Equippable State";
  case 9:
    return "Requirements String";
  case 10:
    return "Slot";
  case 0xb:
    return "Model Name";
  case 0xc:
    return "Texture Alias";
  case 0xd:
    return "Tint Id";
  case 0xe:
    return "Power Rating";
  case 0xf:
    return "Composite Effect Id";
  case 0x10:
    return "List View Stat Id";
  case 0x11:
    return "List View Stat Value";
  case 0x12:
    return "Profile Name";
  case 0x13:
    return "Min Profile Rank";
  case 0x14:
    return "Text Color";
  case 0x15:
    return "Data Is Ready";
  case 0x16:
    return "Is Tintable";
  case 0x17:
    return "VIP Rank Requirement";
  case 0x18:
    return "InGamePurchaseType";
  case 0x19:
    return "CoinPurchasePrice";
  case 0x1a:
    return "CoinSellPrice";
  case 0x1b:
    return "QuantityInInventory";
  case 0x1c:
    return "NoSale";
  case 0x1d:
    return "CanPreview";
  case 0x1e:
    return "AvailableTintGroupId";
  case 0x1f:
    return "MemberPurchasePrice";
  case 0x20:
    return "WishList (removed?) ";
  case 0x21:
    return "MarketStoreId";
  case 0x22:
    return "ItemClass";
  case 0x23:
    return "ItemType";
  case 0x24:
    return "IsEquipped";
  case 0x25:
    return "MaxStackSize";
  case 0x26:
    return "StackCount";
  case 0x27:
    return "ConsumedCount";
  case 0x28:
    return "CanBuy";
  default:
    return "<error>";
  }
}

