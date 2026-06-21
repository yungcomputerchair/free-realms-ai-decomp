// addr: 0x00cb1ce0
// name: CombatTarget_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * CombatTarget_getColumnName(int columnIndex_) */

char * CombatTarget_getColumnName(int columnIndex_)

{
                    /* Maps combat target columns to guid/name/description, profile id/icons/rank,
                       current/max health/mana/shields, type, boss flag, disposition, and friend
                       flag. */
  switch(columnIndex_) {
  case 0:
    return "Guid";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "ProfileId";
  case 4:
    return "ProfileBackgroundIcon";
  case 5:
    return "ProfileIconId";
  case 6:
    return "ProfileRank";
  case 7:
    return "CurHealth";
  case 8:
    return "MaxHealth";
  case 9:
    return "CurMana";
  case 10:
    return "MaxMana";
  case 0xb:
    return "CurShields";
  case 0xc:
    return "MaxShields";
  default:
    return "<error>";
  case 0xe:
    return "Type";
  case 0xf:
    return "IsBoss";
  case 0x10:
    return "Disposition";
  case 0x11:
    return "Friend";
  }
}

