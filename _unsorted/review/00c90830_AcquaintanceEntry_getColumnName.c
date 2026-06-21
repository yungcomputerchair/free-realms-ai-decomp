// addr: 0x00c90830
// name: AcquaintanceEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * AcquaintanceEntry_getColumnName(int columnIndex_) */

char * AcquaintanceEntry_getColumnName(int columnIndex_)

{
                    /* Maps acquaintance list columns to Guid, Name, Acquaintance Type, Elapsed
                       Time, and Online. */
  switch(columnIndex_) {
  case 0:
    return "Guid";
  case 1:
    return "Name";
  case 2:
    return "Acquaintance Type";
  case 3:
    return "Elapsed Time";
  case 4:
    return "Online";
  default:
    return "<error>";
  }
}

