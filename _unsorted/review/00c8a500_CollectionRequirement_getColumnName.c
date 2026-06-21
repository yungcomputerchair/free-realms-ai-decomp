// addr: 0x00c8a500
// name: CollectionRequirement_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * CollectionRequirement_getColumnName(int columnIndex_) */

char * CollectionRequirement_getColumnName(int columnIndex_)

{
                    /* Maps collection requirement columns such as Required Count, Count in
                       Inventory, Tint Value, and Item Definition Id. */
  switch(columnIndex_) {
  case 0:
    return "Name";
  case 1:
    return "Icon ID";
  case 2:
    return "Description";
  case 3:
    return "Required Count";
  case 4:
    return "Count in Inventory";
  case 5:
    return "Tint Value";
  case 6:
    return "Item Definition Id";
  default:
    return "<error>";
  }
}

