// addr: 0x00997af0
// name: StoreTintGroup_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreTintGroup_getColumnName(undefined4 param_1)

{
                    /* Maps tint group field indexes to GroupId, Name, ImageSetId, and TintValue. */
  switch(param_1) {
  case 0:
    return "GroupId";
  case 1:
    return "Name";
  case 2:
    return "ImageSetId";
  case 3:
    return "TintValue";
  default:
    return "<error>";
  }
}

