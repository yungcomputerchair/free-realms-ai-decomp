// addr: 0x00cf9dc0
// name: HouseLotColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * HouseLotColumn_getName(undefined4 param_1)

{
                    /* Maps house/lot listing columns to System, Guid, OwnerName, Name, OwnerGuid,
                       Snapshot, Rating, and NumVotes. */
  switch(param_1) {
  case 0:
    return "System";
  case 1:
    return "Guid";
  case 2:
    return "OwnerName";
  case 3:
    return "Name";
  case 4:
    return "OwnerGuid";
  case 5:
    return "Snapshot";
  case 6:
    return "Rating";
  case 7:
    return "NumVotes";
  default:
    return "<error>";
  }
}

