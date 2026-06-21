// addr: 0x00c2c080
// name: LoadoutData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * LoadoutData_getColumnName(undefined4 param_1)

{
                    /* Maps loadout/reward style columns: LoadoutId, Name, Description, ImageSetId,
                       tint value, Quantity, MembersOnly, and Active. */
  switch(param_1) {
  case 0:
    return "LoadoutId";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "ImageSetId";
  case 4:
    return "ImageTintValue";
  case 5:
    return "Quantity";
  case 6:
    return "MembersOnly";
  case 7:
    return "Active";
  default:
    return "<error>";
  }
}

