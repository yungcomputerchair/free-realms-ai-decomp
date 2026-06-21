// addr: 0x00c8e970
// name: StatValue_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * StatValue_getColumnName(int columnIndex_) */

char * StatValue_getColumnName(int columnIndex_)

{
                    /* Two-column mapper returning Stat ID and Stat Value. */
  if (columnIndex_ == 0) {
    return "Stat ID";
  }
  if (columnIndex_ != 1) {
    return "<error>";
  }
  return "Stat Value";
}

