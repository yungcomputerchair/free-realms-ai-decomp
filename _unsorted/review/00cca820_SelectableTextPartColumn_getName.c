// addr: 0x00cca820
// name: SelectableTextPartColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * SelectableTextPartColumn_getName(undefined4 param_1)

{
                    /* Returns labels for a selectable text part entry: String, Id, Part, and
                       Selected. */
  switch(param_1) {
  case 0:
    return "String";
  case 1:
    return "Id";
  case 2:
    return "Part";
  case 3:
    return "Selected";
  default:
    return "<error>";
  }
}

