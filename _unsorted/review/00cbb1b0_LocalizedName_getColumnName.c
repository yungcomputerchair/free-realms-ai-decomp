// addr: 0x00cbb1b0
// name: LocalizedName_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * LocalizedName_getColumnName(int columnIndex_) */

char * LocalizedName_getColumnName(int columnIndex_)

{
                    /* Two-column mapper returning Name Id and Name. */
  if (columnIndex_ == 0) {
    return "Name Id";
  }
  if (columnIndex_ != 1) {
    return "<error>";
  }
  return "Name";
}

