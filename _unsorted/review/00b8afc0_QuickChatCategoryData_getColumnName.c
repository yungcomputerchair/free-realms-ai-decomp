// addr: 0x00b8afc0
// name: QuickChatCategoryData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * QuickChatCategoryData_getColumnName(int param_1)

{
                    /* Returns Id and CategoryName columns for a quick-chat/menu category table. */
  if (param_1 == 0) {
    return "Id";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "CategoryName";
}

