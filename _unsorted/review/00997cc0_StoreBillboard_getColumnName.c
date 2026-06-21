// addr: 0x00997cc0
// name: StoreBillboard_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreBillboard_getColumnName(undefined4 param_1)

{
                    /* Returns billboard schema field names including BillboardId, ImageId, member
                       flag, shortcut type/value, and IsVislble. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "BillboardId";
  case 2:
    return "Name";
  case 3:
    return "ImageId";
  case 4:
    return "IsMembersOnly";
  case 5:
    return "ShortcutType";
  case 6:
    return "ShortcutValue";
  case 7:
    return "IsVislble";
  default:
    return "<error>";
  }
}

