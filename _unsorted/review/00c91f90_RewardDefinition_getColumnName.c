// addr: 0x00c91f90
// name: RewardDefinition_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * RewardDefinition_getColumnName(int columnIndex_) */

char * RewardDefinition_getColumnName(int columnIndex_)

{
                    /* Maps reward/definition columns including Id, Title, IconId, DefinitionId,
                       Type, param1, param2, TooltipId, and Tooltip. */
  switch(columnIndex_) {
  case 0:
    return "Id";
  case 1:
    return "Title";
  case 2:
    return "IconId";
  case 3:
    return "DefinitionId";
  case 4:
    return "Type";
  case 5:
    return "param1";
  case 6:
    return "param2";
  case 7:
    return "TooltipId";
  case 8:
    return "Tooltip";
  default:
    return "<error>";
  }
}

