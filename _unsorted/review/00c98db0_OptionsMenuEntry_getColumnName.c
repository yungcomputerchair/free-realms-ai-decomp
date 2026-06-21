// addr: 0x00c98db0
// name: OptionsMenuEntry_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * OptionsMenuEntry_getColumnName(int columnIndex_) */

char * OptionsMenuEntry_getColumnName(int columnIndex_)

{
                    /* Returns option/menu entry columns including section, display name, tooltip,
                       submenu fields, value, option name/type, callback, disabled flag, IntParam1,
                       and default value. */
  switch(columnIndex_) {
  case 0:
    return "Id";
  case 1:
    return "Section";
  case 2:
    return "DisplayName";
  case 3:
    return "Tooltip";
  case 4:
    return "HasSubMenu";
  case 5:
    return "SubMenuName";
  case 6:
    return "Value";
  case 7:
    return "OptionName";
  case 8:
    return "OptionType";
  case 9:
    return "Callback";
  case 10:
    return "Disabled";
  case 0xb:
    return "IntParam1";
  case 0xc:
    return "DefaultValue";
  default:
    return "<error>";
  }
}

