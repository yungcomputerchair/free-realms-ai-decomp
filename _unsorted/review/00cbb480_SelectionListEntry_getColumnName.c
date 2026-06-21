// addr: 0x00cbb480
// name: SelectionListEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * SelectionListEntry_getColumnName(int columnIndex_) */

char * SelectionListEntry_getColumnName(int columnIndex_)

{
                    /* Returns selection-list columns String, Id, Part, and Selected. */
  switch(columnIndex_) {
  case 0:
    return "String";
  case 1:
    return "Id";
  case 2:
    return "Part";
  case 3:
    return "Selected";
  default:
    return "<error>";
  }
}

