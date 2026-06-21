// addr: 0x00c97850
// name: ChapterSticker_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ChapterSticker_getColumnName(int columnIndex_) */

char * ChapterSticker_getColumnName(int columnIndex_)

{
                    /* Returns sticker columns Sticker Id, Sticker Quest Id, Sticker
                       Name/Description, Image Set Id, and Is Complete. */
  switch(columnIndex_) {
  case 0:
    return "Sticker Id";
  case 1:
    return "Sticker Quest Id";
  case 2:
    return "Sticker Name";
  case 3:
    return "Sticker Description";
  case 4:
    return "Image Set Id";
  case 5:
    return "Is Complete";
  default:
    return "<error>";
  }
}

