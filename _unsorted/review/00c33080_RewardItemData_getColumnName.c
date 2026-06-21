// addr: 0x00c33080
// name: RewardItemData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * RewardItemData_getColumnName(undefined4 param_1)

{
                    /* Maps reward item columns including Type, Name, Description, Icon ID,
                       Quantity, Tint Value, Item Id, Parameter 2, text color, Members Only, Guid,
                       Hidden, and Show Separated. */
  switch(param_1) {
  case 0:
    return "Type";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "Icon ID";
  case 4:
    return "Quantity";
  case 5:
    return "Tint Value";
  case 6:
    return "Item Id";
  case 7:
    return "Parameter 2";
  case 8:
    return "Item Text Color";
  case 9:
    return "Members Only";
  case 10:
    return "Guid";
  case 0xb:
    return "Hidden";
  case 0xc:
    return "Show Separated";
  default:
    return "<error>";
  }
}

