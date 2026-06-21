// addr: 0x00c48040
// name: NamedHealthEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * NamedHealthEntry_getColumnName(int columnIndex_) */

char * NamedHealthEntry_getColumnName(int columnIndex_)

{
                    /* Two-column mapper returning Name and Health, with <error> for other indices.
                        */
  if (columnIndex_ == 0) {
    return "Name";
  }
  if (columnIndex_ != 1) {
    return "<error>";
  }
  return "Health";
}

