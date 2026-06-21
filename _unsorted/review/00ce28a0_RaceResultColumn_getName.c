// addr: 0x00ce28a0
// name: RaceResultColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * RaceResultColumn_getName(undefined4 param_1)

{
                    /* Maps race result columns to Position, Guid, Name, BestLapTime, TotalTime, and
                       Finished. */
  switch(param_1) {
  case 0:
    return "Position";
  case 1:
    return "Guid";
  case 2:
    return "Name";
  case 3:
    return "BestLapTime";
  case 4:
    return "TotalTime";
  case 5:
    return "Finished";
  default:
    return "<error>";
  }
}

