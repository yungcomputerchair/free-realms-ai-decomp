// addr: 0x00a7f2f0
// name: MatchQueueData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MatchQueueData_getColumnName(undefined4 param_1)

{
                    /* Maps match queue columns including queue id/name, match type, player/team
                       limits, start delay, params, pending requests, wait estimate, encounter
                       metadata, and member-only flag. */
  switch(param_1) {
  case 0:
    return "QueueId";
  case 1:
    return "Name";
  case 2:
    return "MatchType";
  case 3:
    return "MinPlayers";
  case 4:
    return "MaxPlayers";
  case 5:
    return "MinTeams";
  case 6:
    return "MaxTeams";
  case 7:
    return "MaxGameStartDelay";
  case 8:
    return "Param1";
  case 9:
    return "Param2";
  case 10:
    return "Param3";
  case 0xb:
    return "Param4";
  case 0xc:
    return "Param5";
  case 0xd:
    return "Param6";
  case 0xe:
    return "Param7";
  case 0xf:
    return "PendingRequests";
  case 0x10:
    return "AverageWait";
  case 0x11:
    return "EncounterDescription";
  case 0x12:
    return "EncounterIcon";
  case 0x13:
    return "MemberOnly";
  default:
    return "<error>";
  }
}

