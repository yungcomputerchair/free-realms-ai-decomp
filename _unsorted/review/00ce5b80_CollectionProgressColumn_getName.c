// addr: 0x00ce5b80
// name: CollectionProgressColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CollectionProgressColumn_getName(undefined4 param_1)

{
                    /* Maps collection/progress columns to Id, Name, Total, Completed, and
                       cColumnPercentage. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Total";
  case 3:
    return "Completed";
  case 4:
    return "cColumnPercentage";
  default:
    return "<error>";
  }
}

