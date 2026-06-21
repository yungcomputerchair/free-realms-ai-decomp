// addr: 0x00baf690
// name: NpcData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * NpcData_getColumnName(int param_1)

{
                    /* Returns NPC-related columns NpcName, NpcGuid, and NpcIcon. */
  if (param_1 == 0) {
    return "NpcName";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "NpcIcon";
  }
  return "NpcGuid";
}

