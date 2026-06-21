// addr: 0x00cf9d40
// name: HouseDirectoryColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * HouseDirectoryColumn_getName(undefined4 param_1)

{
                    /* Returns house directory/listing labels HouseGuid, OwnerName, HouseName,
                       OwnerGuid, Snapshot, Rating, and NumVotes. */
  switch(param_1) {
  case 0:
    return "HouseGuid";
  case 1:
    return "OwnerName";
  case 2:
    return "HouseName";
  case 3:
    return "OwnerGuid";
  case 4:
    return "Snapshot";
  case 5:
    return "Rating";
  case 6:
    return "NumVotes";
  default:
    return "<error>";
  }
}

