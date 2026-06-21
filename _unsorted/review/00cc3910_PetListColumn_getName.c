// addr: 0x00cc3910
// name: PetListColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PetListColumn_getName(undefined4 param_1)

{
                    /* Maps pet or mount list column indexes to labels including Id, ImageSetId,
                       spawn/mount state, tint, membership, and upgrade state. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "ImageSetId";
  case 2:
    return "Name";
  case 3:
    return "IsCurrentlySpawned";
  case 4:
    return "IsCurrentlyMounted";
  case 5:
    return "Tint";
  case 6:
    return "MembersOnly";
  case 7:
    return "IsUpgradable";
  case 8:
    return "IsUpgraded";
  default:
    return "<error>";
  }
}

