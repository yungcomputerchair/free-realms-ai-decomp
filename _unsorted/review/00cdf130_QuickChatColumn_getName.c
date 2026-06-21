// addr: 0x00cdf130
// name: QuickChatColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * QuickChatColumn_getName(undefined4 param_1)

{
                    /* Returns QuickChat field names QuickChatNodeId, StringId, String, and
                       IsExactMatch, with empty string for unknown indexes. */
  switch(param_1) {
  case 0:
    return "QuickChatNodeId";
  case 1:
    return "StringId";
  case 2:
    return "String";
  case 3:
    return "IsExactMatch";
  default:
    return "";
  }
}

