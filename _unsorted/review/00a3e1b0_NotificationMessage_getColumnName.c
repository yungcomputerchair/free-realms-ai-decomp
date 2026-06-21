// addr: 0x00a3e1b0
// name: NotificationMessage_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * NotificationMessage_getColumnName(undefined4 param_1)

{
                    /* Maps notification/message fields including priority, icon, title/body/button
                       string IDs, LuaCall, numeric params, and string params. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Priority";
  case 2:
    return "IconId";
  case 3:
    return "TitleStringId";
  case 4:
    return "BodyStringId";
  case 5:
    return "ButtonStringId";
  case 6:
    return "LuaCall";
  case 7:
    return "Param1";
  case 8:
    return "Param2";
  case 9:
    return "Param3";
  case 10:
    return "StringParam1";
  case 0xb:
    return "StringParam2";
  default:
    return "<error>";
  }
}

