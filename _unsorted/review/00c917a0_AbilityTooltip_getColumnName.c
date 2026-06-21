// addr: 0x00c917a0
// name: AbilityTooltip_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * AbilityTooltip_getColumnName(int columnIndex_) */

char * AbilityTooltip_getColumnName(int columnIndex_)

{
                    /* Two-column mapper returning Ability ID and Tooltip Description. */
  if (columnIndex_ == 0) {
    return "Ability ID";
  }
  if (columnIndex_ != 1) {
    return "<error>";
  }
  return "Tooltip Description";
}

