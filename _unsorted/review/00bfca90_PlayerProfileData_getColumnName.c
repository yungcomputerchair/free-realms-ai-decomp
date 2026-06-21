// addr: 0x00bfca90
// name: PlayerProfileData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PlayerProfileData_getColumnName(undefined4 param_1)

{
                    /* Maps player profile/account columns including name/guid, currencies,
                       progression stats, age/play time, membership/gender/race/VIP, social profile
                       fields, city, and ExtraDataPopulated. */
  switch(param_1) {
  case 0:
    return "Name";
  case 1:
    return "Guid";
  case 2:
    return "NumCoins";
  case 3:
    return "Wallet";
  case 4:
    return "JobLevelsGained";
  case 5:
    return "CollectionsCompleted";
  case 6:
    return "QuestsCompleted";
  case 7:
    return "CreationDate";
  case 8:
    return "Age";
  case 9:
    return "PlayTime";
  case 10:
    return "IsMember";
  case 0xb:
    return "Gender";
  case 0xc:
    return "Race";
  case 0xd:
    return "VipRank";
  case 0xe:
    return "VipProgress";
  case 0xf:
    return "VipTitle";
  case 0x10:
    return "CoinCount";
  case 0x11:
    return "StationCashCount";
  case 0x12:
    return "PlayerIsMale";
  case 0x13:
    return "PlayerBirthday";
  case 0x14:
    return "Signature";
  case 0x15:
    return "Interests";
  case 0x16:
    return "QQAccount";
  case 0x17:
    return "MsnAccount";
  case 0x18:
    return "AboutMe";
  case 0x19:
    return "PlayerAge";
  case 0x1a:
    return "City";
  case 0x1b:
    return "ExtraDataPopulated";
  default:
    return "<error>";
  }
}

