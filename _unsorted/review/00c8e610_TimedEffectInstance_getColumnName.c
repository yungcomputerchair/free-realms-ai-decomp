// addr: 0x00c8e610
// name: TimedEffectInstance_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * TimedEffectInstance_getColumnName(int columnIndex_) */

char * TimedEffectInstance_getColumnName(int columnIndex_)

{
                    /* Returns columns for an instance with icon, Duration, Time Left, and Name. */
  switch(columnIndex_) {
  case 0:
    return "Instance ID";
  case 1:
    return "Icon ID";
  case 2:
    return "Duration";
  case 3:
    return "Time Left";
  case 4:
    return "Name";
  default:
    return "<error>";
  }
}

