// addr: 0x00b8af00
// name: QuickChatMenuItemData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * QuickChatMenuItemData_getColumnName(undefined4 param_1)

{
                    /* Maps quick-chat/menu item fields such as Id, ParentId, MenuText, ChatText,
                       AnimationId, icon, item id/category/count, favorite/recent flags, and
                       RecentIndex. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "ParentId";
  case 2:
    return "MenuText";
  case 3:
    return "ChatText";
  case 4:
    return "AnimationId";
  case 5:
    return "MenuIconId";
  case 6:
    return "ItemId";
  case 7:
    return "ItemCategory";
  case 8:
    return "ItemCount";
  case 9:
    return "IsFavorite";
  case 10:
    return "IsRecentlyUsed";
  case 0xb:
    return "RecentIndex";
  default:
    return "<error>";
  }
}

