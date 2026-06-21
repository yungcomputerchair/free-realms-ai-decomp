// addr: 0x00cbb1e0
// name: FixtureGuid_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * FixtureGuid_getColumnName(int columnIndex_) */

char * FixtureGuid_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Single-column mapper returning Fixture Guid for index 0 and <error>
                       otherwise. */
  pcVar1 = "<error>";
  if (columnIndex_ == 0) {
    pcVar1 = "Fixture Guid";
  }
  return pcVar1;
}

