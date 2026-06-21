// addr: 0x00a79c80
// name: EntityStatusData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * EntityStatusData_getColumnName(undefined4 param_1)

{
                    /* Maps entity status columns including Guid, Name, current/max health and mana,
                       Type, and Disposition. */
  switch(param_1) {
  case 0:
    return "Guid";
  case 1:
    return "Name";
  case 2:
    return "CurHealth";
  case 3:
    return "MaxHealth";
  case 4:
    return "CurMana";
  case 5:
    return "MaxMana";
  case 6:
    return "Type";
  case 7:
    return "Disposition";
  default:
    return "<error>";
  }
}

