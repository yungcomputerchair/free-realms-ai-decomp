// addr: 0x00cfb3d0
// name: NameDescriptionColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * NameDescriptionColumn_getName(int param_1)

{
                    /* Returns generic metadata labels Id, NameId, and DescriptionId. */
  if (param_1 == 0) {
    return "Id";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "DescriptionId";
  }
  return "NameId";
}

