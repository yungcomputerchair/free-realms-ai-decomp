// addr: 0x00c977a0
// name: ChapterHub_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ChapterHub_getColumnName(int columnIndex_) */

char * ChapterHub_getColumnName(int columnIndex_)

{
                    /* Maps chapter hub columns to hub id/name, image set, current quest
                       id/title/description, completed description, activity/completion flags, and
                       map coordinates. */
  switch(columnIndex_) {
  case 0:
    return "Hub Id";
  case 1:
    return "Hub Name";
  case 2:
    return "Image Set Id";
  case 3:
    return "Current Quest Id";
  case 4:
    return "Current Quest Title";
  case 5:
    return "Current Quest Description";
  case 6:
    return "Completed Description";
  case 7:
    return "Is Active";
  case 8:
    return "Is Complete";
  case 9:
    return "Map X";
  case 10:
    return "Map Y";
  default:
    return "<error>";
  }
}

