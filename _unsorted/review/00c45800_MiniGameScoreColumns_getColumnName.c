// addr: 0x00c45800
// name: MiniGameScoreColumns_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MiniGameScoreColumns_getColumnName(int columnIndex_) */

char * MiniGameScoreColumns_getColumnName(int columnIndex_)

{
                    /* Maps a mini-game score column index to labels such as Name, Icon ID, Score
                       Type, Score Count, Score Max, and Score Points; returns <error> out of range.
                        */
  switch(columnIndex_) {
  case 0:
    return "Name";
  case 1:
    return "Icon ID";
  case 2:
    return "Score Type";
  case 3:
    return "Score Count";
  case 4:
    return "Score Max";
  case 5:
    return "Score Points";
  default:
    return "<error>";
  }
}

