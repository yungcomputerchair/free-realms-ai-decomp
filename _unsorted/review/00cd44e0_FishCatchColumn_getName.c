// addr: 0x00cd44e0
// name: FishCatchColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * FishCatchColumn_getName(undefined4 param_1)

{
                    /* Maps fish catch/result column indexes to FishName, icon id, difficulty,
                       rarity, size, score, and time-to-catch labels. */
  switch(param_1) {
  case 0:
    return "FishName";
  case 1:
    return "FishIconId";
  case 2:
    return "FishDifficulty";
  case 3:
    return "FishRarity";
  case 4:
    return "FishSize";
  case 5:
    return "FishScore";
  case 6:
    return "TimeToCatch";
  default:
    return "<error>";
  }
}

