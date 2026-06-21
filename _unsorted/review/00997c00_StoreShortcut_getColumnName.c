// addr: 0x00997c00
// name: StoreShortcut_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreShortcut_getColumnName(undefined4 param_1)

{
                    /* Returns column names for a store shortcut record, including Id, Name,
                       Description, ImageSetId, TintValue, ShortcutType, ShortcutValue, and
                       ShortcutStoreId. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "ImageSetId";
  case 4:
    return "TintValue";
  case 5:
    return "ShortcutType";
  case 6:
    return "ShortcutValue";
  case 7:
    return "ShortcutStoreId";
  default:
    return "<error>";
  }
}

