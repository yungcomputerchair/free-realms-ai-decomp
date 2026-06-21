// addr: 0x00a7f430
// name: MatchRequestData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MatchRequestData_getColumnName(undefined4 param_1)

{
                    /* Returns request-table columns: RequestId, QueueId, RequestingPlayerGuid,
                       IsGroupRequest, and CreationTime. */
  switch(param_1) {
  case 0:
    return "RequestId";
  case 1:
    return "QueueId";
  case 2:
    return "RequestingPlayerGuid";
  case 3:
    return "IsGroupRequest";
  case 4:
    return "CreationTime";
  default:
    return "<error>";
  }
}

