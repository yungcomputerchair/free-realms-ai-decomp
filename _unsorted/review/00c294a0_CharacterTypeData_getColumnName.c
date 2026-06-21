// addr: 0x00c294a0
// name: CharacterTypeData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CharacterTypeData_getColumnName(undefined4 param_1)

{
                    /* Returns character type columns: CharacterTypeId, CharacterTypeNameStringId,
                       CharacterRace, and CharacterGender. */
  switch(param_1) {
  case 0:
    return "CharacterTypeId";
  case 1:
    return "CharacterTypeNameStringId";
  case 2:
    return "CharacterRace";
  case 3:
    return "CharacterGender";
  default:
    return "<error>";
  }
}

