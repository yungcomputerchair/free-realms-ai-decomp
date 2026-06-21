// addr: 0x00cbb420
// name: FixtureAppearance_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * FixtureAppearance_getColumnName(int columnIndex_) */

char * FixtureAppearance_getColumnName(int columnIndex_)

{
                    /* Maps fixture appearance columns to Fixture Guid, Texture Alias, and Tint
                       Alias. */
  if (columnIndex_ == 0) {
    return "Fixture Guid";
  }
  if (columnIndex_ != 1) {
    if (columnIndex_ != 2) {
      return "<error>";
    }
    return "Tint Alias";
  }
  return "Texture Alias";
}

