// addr: 0x00c477c0
// name: MiniGameType_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MiniGameType_getColumnName(int columnIndex_) */

char * MiniGameType_getColumnName(int columnIndex_)

{
                    /* Returns mini-game type/category column labels such as TypeId, TypeName,
                       MiniGameGroupId, lock state, category fields, and game-of-the-day flags. */
  switch(columnIndex_) {
  case 0:
    return "TypeId";
  case 1:
    return "TypeName";
  case 2:
    return "TypeDescription";
  case 3:
    return "MiniGameGroupId";
  case 4:
    return "IconId";
  case 5:
    return "BackgroundIconId";
  case 6:
    return "IsMembersOnly";
  case 7:
    return "IsMicro";
  case 8:
    return "LockStatus";
  case 9:
    return "IsActive";
  case 10:
    return "CategoryId";
  case 0xb:
    return "CategoryName";
  case 0xc:
    return "HasPlayedBefore";
  case 0xd:
    return "HasNewStages";
  case 0xe:
    return "IsNew";
  case 0xf:
    return "IsGameOfTheDay";
  case 0x10:
    return "IsPopular";
  default:
    return "<error>";
  }
}

