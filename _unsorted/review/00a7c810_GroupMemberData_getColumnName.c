// addr: 0x00a7c810
// name: GroupMemberData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * GroupMemberData_getColumnName(undefined4 param_1)

{
                    /* Maps party/group member columns such as player name/guid/job fields, status
                       message, leader/same-minigame flags, parameters, changing-job flag, and
                       invite status. */
  switch(param_1) {
  case 0:
    return "PlayerName";
  case 1:
    return "PlayerGuid";
  case 2:
    return "PlayerJobId";
  case 3:
    return "PlayerJobBackgroundIconId";
  case 4:
    return "PlayerJobIconId";
  case 5:
    return "PlayerJobRank";
  case 6:
    return "PlayerStatusMessage";
  case 7:
    return "IsGroupLeader";
  case 8:
    return "InSameMinigame";
  case 9:
    return "Parameter1";
  case 10:
    return "Parameter2";
  case 0xb:
    return "Parameter3";
  case 0xc:
    return "Parameter4";
  case 0xd:
    return "Parameter5";
  case 0xe:
    return "Parameter6";
  case 0xf:
    return "IsChangingJob";
  case 0x10:
    return "InviteStatus";
  default:
    return "<error>";
  }
}

