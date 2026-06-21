// addr: 0x00c45bb0
// name: IconDescriptionEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * IconDescriptionEntry_getColumnName(int columnIndex_) */

char * IconDescriptionEntry_getColumnName(int columnIndex_)

{
                    /* Small column-name mapper for an Id/Name/Description/Icon ID entry, returning
                       <error> for invalid indices. */
  switch(columnIndex_) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "Icon ID";
  default:
    return "<error>";
  }
}

