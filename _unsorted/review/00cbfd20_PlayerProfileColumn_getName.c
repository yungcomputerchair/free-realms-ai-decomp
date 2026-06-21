// addr: 0x00cbfd20
// name: PlayerProfileColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PlayerProfileColumn_getName(undefined4 param_1)

{
                    /* Maps player profile column indexes to labels such as Player GUID, Guild Name,
                       VIP Rank, currencies, social-account fields, and achievement points. */
  switch(param_1) {
  case 0:
    return "Player GUID";
  case 1:
    return "Player Name";
  case 2:
    return "Guild Name";
  case 3:
    return "Jobs Unlocked";
  case 4:
    return "Levels Gained";
  case 5:
    return "Profile ID";
  case 6:
    return "VIP Rank";
  case 7:
    return "Vip Icon";
  case 8:
    return "Vip Title";
  case 9:
    return "Coins";
  case 10:
    return "CollectionCount";
  case 0xb:
    return "QuestCount";
  case 0xc:
    return "MaxHealth";
  case 0xd:
    return "MaxMana";
  case 0xe:
    return "Defense";
  case 0xf:
    return "StarBoost";
  case 0x10:
    return "CoinBoost";
  case 0x11:
    return "StationCash";
  case 0x12:
    return "IsMale";
  case 0x13:
    return "Birthday";
  case 0x14:
    return "Signature";
  case 0x15:
    return "Interests";
  case 0x16:
    return "QqAccount";
  case 0x17:
    return "MsnAccount";
  case 0x18:
    return "AboutMe";
  case 0x19:
    return "Title";
  case 0x1a:
    return "Age";
  case 0x1b:
    return "City";
  case 0x1c:
    return "ExtraDataPopulated";
  case 0x1d:
    return "AchievementPoints";
  default:
    return "<Error>";
  }
}

