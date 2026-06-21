// addr: 0x00cc39c0
// name: CurrentMountColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CurrentMountColumn_getName(int param_1)

{
                    /* Returns labels for the current mount summary fields CurrentMountGuid, Name,
                       and ImageSetId. */
  if (param_1 == 0) {
    return "CurrentMountGuid";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "ImageSetId";
  }
  return "Name";
}

