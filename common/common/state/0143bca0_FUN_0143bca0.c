// addr: 0x0143bca0
// name: FUN_0143bca0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * FUN_0143bca0(int param_1)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (param_1 < 0x12d) {
    if (param_1 == 300) {
      return "DisplayCardImage";
    }
    switch(param_1) {
    case 1:
      return "Title";
    case 2:
      return "Keywords";
    case 3:
      return "Unique";
    case 5:
      return "Subtitle";
    case 0x1c:
      return "CardType";
    case 0x48:
      return "Block";
    case 0x49:
      return "Set";
    case 0x4a:
      return "CardNumber";
    case 0x4c:
      return "Rarity";
    case 0x9e:
      return "Player";
    }
  }
  else if (param_1 < 0x2fb) {
    if (param_1 == 0x2fa) {
      return "ArchetypeId";
    }
    switch(param_1) {
    case 0x199:
      return "Dead";
    case 0x239:
      return "Parent";
    case 0x23e:
      return "GenericId";
    case 0x240:
      return "Cost";
    case 0x270:
      return "Bearer";
    case 0x273:
      return "Duration";
    case 0x274:
      return "CounterLabel";
    case 0x275:
      return "CounterValue";
    case 0x276:
      return "GameText";
    case 0x283:
      return "Lore";
    }
  }
  else if (param_1 < 0xfa7) {
    if (param_1 == 0xfa6) {
      return "GameTitle";
    }
    if (param_1 < 0x46c) {
      if (param_1 == 0x46b) {
        return "HideFromClient";
      }
      if (param_1 == 0x309) {
        return "CardReady";
      }
      if (param_1 == 0x31d) {
        return "ProductType";
      }
    }
    else {
      if (param_1 == 0x47b) {
        return "ItemGrantSummary";
      }
      if (param_1 == 0x47c) {
        return "CanBeTraded";
      }
    }
  }
  else if (param_1 < 0x22973) {
    if (param_1 == 0x22972) {
      return "Traits";
    }
    switch(param_1) {
    case 0xfa7:
      return "GameType";
    case 0xfa9:
      return "PlayFormat";
    case 0xfaa:
      return "MatchStructure";
    case 0xfad:
      return "Password";
    case 0xfb0:
      return "DeckSelection";
    case 0xfb1:
      return "Timed";
    case 0xfc7:
      return "CollectionNumOwned";
    case 0xff6:
      return "CollectionNumDesired";
    case 0xff7:
      return "CollectionNumExtra";
    case 0xff8:
      return "CollectionNumNeeded";
    case 0x103a:
      return "CardQuantity";
    case 0x1066:
      return "CollectionNumNonTradable";
    case 0x106a:
      return "CollectionNumTradable";
    case 0x1081:
      return "MapName";
    case 0x1082:
      return "DataVersion";
    case 0x1089:
      return "Illustrator";
    }
  }
  else {
    if (param_1 == 0x22973) {
      return "Value";
    }
    if (param_1 == 0x22974) {
      return "Color";
    }
  }
  return (char *)0x0;
}

