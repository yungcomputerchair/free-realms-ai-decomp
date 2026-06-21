// addr: 0x00cbb520
// name: HouseRatingColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * HouseRatingColumn_getName(undefined4 param_1)

{
                    /* Returns display names for a house rating/listing row: HouseGuid, OwnerName,
                       HouseName, OwnerGuid, Snapshot, Rating, and NumVotes. */
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

