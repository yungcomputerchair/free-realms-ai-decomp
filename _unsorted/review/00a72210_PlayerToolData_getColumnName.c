// addr: 0x00a72210
// name: PlayerToolData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PlayerToolData_getColumnName(undefined4 param_1)

{
                    /* Maps tool-data column indices to labels such as ToolId, Name, IconId,
                       useability, charge counts, and TooltipStringId. */
  switch(param_1) {
  case 0:
    return "ToolId";
  case 1:
    return "Name";
  case 2:
    return "IconId";
  case 3:
    return "IsCurrentlyUseable";
  case 4:
    return "ChargesRemaining";
  case 5:
    return "UsesCharges";
  case 6:
    return "TooltipStringId";
  default:
    return "<error>";
  }
}

