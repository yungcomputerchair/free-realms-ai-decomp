// addr: 0x00c653b0
// name: FactoryInfo_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * FactoryInfo_getColumnName(int columnIndex_) */

char * FactoryInfo_getColumnName(int columnIndex_)

{
                    /* Maps factory info columns to FactoryName, PlayerName, FactoryLevel, and
                       FactoryProgress. */
  switch(columnIndex_) {
  case 0:
    return "FactoryName";
  case 1:
    return "PlayerName";
  case 2:
    return "FactoryLevel";
  case 3:
    return "FactoryProgress";
  default:
    return "<error>";
  }
}

