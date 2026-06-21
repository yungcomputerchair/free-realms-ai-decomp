// addr: 0x00cbb4e0
// name: IdStringColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * IdStringColumn_getName(int param_1)

{
                    /* Maps a two-column Id/String style table column index to its display field
                       name, returning <error> for out-of-range values. */
  if (param_1 == 0) {
    return "Id";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "String";
}

