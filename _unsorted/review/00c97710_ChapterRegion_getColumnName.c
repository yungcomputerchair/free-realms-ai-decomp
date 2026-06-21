// addr: 0x00c97710
// name: ChapterRegion_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ChapterRegion_getColumnName(int columnIndex_) */

char * ChapterRegion_getColumnName(int columnIndex_)

{
                    /* Returns chapter/region columns including Region Id/Name/Description, tab and
                       chapter map image ids, selection state, completed string id, and hidden flag.
                        */
  switch(columnIndex_) {
  case 0:
    return "Region Id";
  case 1:
    return "Region Name";
  case 2:
    return "Region Description";
  case 3:
    return "Tab Image Id";
  case 4:
    return "Chapter Map Image Id";
  case 5:
    return "Is Selected";
  case 6:
    return "CompletedStringId";
  case 7:
    return "Should Be Hidden";
  default:
    return "<error>";
  }
}

