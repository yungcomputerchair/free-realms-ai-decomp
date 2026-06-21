// addr: 0x00c48f60
// name: AbilitySlot_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * AbilitySlot_getColumnName(int columnIndex_) */

char * AbilitySlot_getColumnName(int columnIndex_)

{
                    /* Maps ability slot/list columns such as Assigned, Icon ID, Name, Description,
                       Quantity, Mana Cost, Tint Value, and AbilityId. */
  switch(columnIndex_) {
  case 0:
    return "Assigned";
  case 1:
    return "Icon ID";
  case 2:
    return "Name";
  case 3:
    return "Description";
  case 4:
    return "Quantity";
  case 5:
    return "Mana Cost";
  case 6:
    return "Tint Value";
  case 7:
    return "AbilityId";
  default:
    return "<error>";
  }
}

