// addr: 0x00c4fcd0
// name: CoordinateTriple_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * CoordinateTriple_getColumnName(int columnIndex_) */

char * CoordinateTriple_getColumnName(int columnIndex_)

{
                    /* Maps indices 0..2 to XCoordinate, YCoordinate, and ZCoordinate; returns
                       <error> outside the coordinate triple. */
  if (columnIndex_ == 0) {
    return "XCoordinate";
  }
  if (columnIndex_ != 1) {
    if (columnIndex_ != 2) {
      return "<error>";
    }
    return "ZCoordinate";
  }
  return "YCoordinate";
}

