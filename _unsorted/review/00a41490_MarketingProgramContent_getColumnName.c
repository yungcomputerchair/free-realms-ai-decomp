// addr: 0x00a41490
// name: MarketingProgramContent_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MarketingProgramContent_getColumnName(undefined4 param_1)

{
                    /* Returns marketing/program content fields: program/group/content IDs,
                       start/end dates, delay, icon/title/body/button data, Lua call, params, and
                       tracking fields. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "ProgramId";
  case 2:
    return "GroupId";
  case 3:
    return "ContentId";
  case 4:
    return "StartDate";
  case 5:
    return "EndDate";
  case 6:
    return "DelaySeconds";
  case 7:
    return "IconId";
  case 8:
    return "TitleStringId";
  case 9:
    return "BodyStringId";
  case 10:
    return "ButtonStringId";
  case 0xb:
    return "LuaCall";
  case 0xc:
    return "StringParam1";
  case 0xd:
    return "StringParam2";
  case 0xe:
    return "Param1";
  case 0xf:
    return "Param2";
  case 0x10:
    return "Param3";
  case 0x11:
    return "TrackingType1";
  case 0x12:
    return "TrackingType1Param1";
  case 0x13:
    return "TrackingType2";
  case 0x14:
    return "TrackingType2Param1";
  default:
    return "<error>";
  }
}

