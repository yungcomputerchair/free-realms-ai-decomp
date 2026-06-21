// addr: 0x00cd4420
// name: FishTypeColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * FishTypeColumn_getName(undefined4 param_1)

{
                    /* Returns labels for fish type/catalog fields such as FishType, FishName,
                       FishIcon, FishSpecial, FishCatchable, and lure requirement. */
  switch(param_1) {
  case 0:
    return "FishType";
  case 1:
    return "FishName";
  case 2:
    return "FishIcon";
  case 3:
    return "FishSpecial";
  case 4:
    return "FishCatchable";
  case 5:
    return "FishLureRequirement";
  default:
    return "<error>";
  }
}

