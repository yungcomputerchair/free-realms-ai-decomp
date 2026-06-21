// addr: 0x00cc5570
// name: PlayerTitleColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PlayerTitleColumn_getName(undefined4 param_1)

{
                    /* Maps title-selection column indexes to labels such as Title Id, Title Type,
                       String, Is Selected, Preview Name, and Icon Id. */
  switch(param_1) {
  case 0:
    return "Title Id";
  case 1:
    return "Title Type";
  case 2:
    return "String";
  case 3:
    return "Is Selected";
  case 4:
    return "Preview Name";
  case 5:
    return "Icon Id";
  default:
    return "<error>";
  }
}

