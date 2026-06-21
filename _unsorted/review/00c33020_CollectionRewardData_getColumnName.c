// addr: 0x00c33020
// name: CollectionRewardData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CollectionRewardData_getColumnName(undefined4 param_1)

{
                    /* Returns collection reward/summary columns: Name, Icon ID, Experience, Num
                       Coins, Num Entries, and Icon Tint Value. */
  switch(param_1) {
  case 0:
    return "Name";
  case 1:
    return "Icon ID";
  case 2:
    return "Experience";
  case 3:
    return "Num Coins";
  case 4:
    return "Num Entries";
  case 5:
    return "Icon Tint Value";
  default:
    return "<error>";
  }
}

