// addr: 0x00c69c60
// name: ItemListEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ItemListEntry_getColumnName(int columnIndex_) */

char * ItemListEntry_getColumnName(int columnIndex_)

{
                    /* Maps item list columns to ItemId, Type, Name, Description, ImageSetId, and
                       TintValue. */
  switch(columnIndex_) {
  case 0:
    return "ItemId";
  case 1:
    return "Type";
  case 2:
    return "Name";
  case 3:
    return "Description";
  case 4:
    return "ImageSetId";
  case 5:
    return "TintValue";
  default:
    return "<error>";
  }
}

