// addr: 0x00ccacc0
// name: InventoryItemColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * InventoryItemColumn_getName(undefined4 param_1)

{
                    /* Maps inventory item column indexes to labels for guid, icon, name,
                       description, quantity, membership, tint, equipment state, model/texture
                       aliases, abilities, power rating, and effects. */
  switch(param_1) {
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
    return "Is Equippable";
  case 8:
    return "Slot";
  case 9:
    return "New";
  case 10:
    return "Level";
  case 0xb:
    return "Rarity";
  case 0xc:
    return "Is Equipped";
  case 0xd:
    return "Model Name";
  case 0xe:
    return "Texture Alias";
  case 0xf:
    return "Tint Alias";
  case 0x10:
    return "Activate Enabled";
  case 0x11:
    return "Activatable Ability Id";
  case 0x12:
    return "Passive Ability Id";
  case 0x13:
    return "Power Rating";
  case 0x14:
    return "Composite Effect Id";
  default:
    return "<error>";
  }
}

