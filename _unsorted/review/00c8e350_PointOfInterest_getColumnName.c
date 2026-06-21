// addr: 0x00c8e350
// name: PointOfInterest_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * PointOfInterest_getColumnName(int columnIndex_) */

char * PointOfInterest_getColumnName(int columnIndex_)

{
                    /* Maps point-of-interest columns to POIName, POIId, and AreaId. */
  if (columnIndex_ == 0) {
    return "POIName";
  }
  if (columnIndex_ != 1) {
    if (columnIndex_ != 2) {
      return "<error>";
    }
    return "AreaId";
  }
  return "POIId";
}

