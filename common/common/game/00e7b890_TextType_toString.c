// addr: 0x00e7b890
// name: TextType_toString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * TextType_toString(int param_1)

{
                    /* Maps text/markup type bitmask values to names such as Primitive, QString,
                       Variant, Noun, Text, Adjective, Verb, and formats unknown values as hex. */
  if (param_1 < 0x71) {
    if (param_1 == 0x70) {
LAB_00e7b8fc:
      return "Text";
    }
    switch(param_1) {
    case 0:
      return "Unknown";
    case 1:
      return "Void";
    case 6:
      return "Primitive";
    case 8:
      return "Macro";
    case 0x10:
      return "QString";
    case 0x20:
      return "Markup";
    case 0x40:
      return "Variant";
    }
  }
  else if (param_1 < 0x2000001) {
    if (param_1 == 0x2000000) {
      return "Noun";
    }
    if (param_1 == 0x20000) {
      return "Owner";
    }
    if (param_1 == 0x2007e) {
      return "AnyType";
    }
    if (param_1 == 0x1000000) goto LAB_00e7b8fc;
  }
  else {
    if (param_1 == 0x4000000) {
      return "Adjective";
    }
    if (param_1 == 0x8000000) {
      return "Verb";
    }
    if (param_1 == 0x10000000) {
      return "Phrasse";
    }
  }
  _sprintf(&DAT_01bfdbec,"\'0x%X\'",param_1);
  return &DAT_01bfdbec;
}

