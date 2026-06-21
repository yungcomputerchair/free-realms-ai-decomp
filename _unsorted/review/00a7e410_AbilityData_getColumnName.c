// addr: 0x00a7e410
// name: AbilityData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * AbilityData_getColumnName(undefined4 param_1)

{
                    /* Returns ability metadata column labels: Ability ID, icon, name, description,
                       and effect count. */
  switch(param_1) {
  case 0:
    return "Ability ID";
  case 1:
    return "Ability Icon";
  case 2:
    return "Ability Name";
  case 3:
    return "Ability Description";
  case 4:
    return "Ability Effect Count";
  default:
    return "<error>";
  }
}

