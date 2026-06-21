// addr: 0x0098dbd0
// name: RenameStatus_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * RenameStatus_getColumnName(undefined4 param_1)

{
                    /* Maps rename/status table column indexes to names including IsCheckPending,
                       IsRenamePending, Status, and StatusString. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Type";
  case 2:
    return "IsCheckPending";
  case 3:
    return "IsRenamePending";
  case 4:
    return "Name";
  case 5:
    return "Status";
  case 6:
    return "StatusString";
  default:
    return "<error>";
  }
}

