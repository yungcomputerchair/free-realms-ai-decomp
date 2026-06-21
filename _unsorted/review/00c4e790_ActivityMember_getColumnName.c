// addr: 0x00c4e790
// name: ActivityMember_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ActivityMember_getColumnName(int columnIndex_) */

char * ActivityMember_getColumnName(int columnIndex_)

{
                    /* Maps activity member columns to ActivityId, PlayerName, PlayerGuid,
                       founding-member and same-minigame flags, and InviteStatus. */
  switch(columnIndex_) {
  case 0:
    return "ActivityId";
  case 1:
    return "PlayerName";
  case 2:
    return "PlayerGuid";
  case 3:
    return "IsFoundingMember";
  case 4:
    return "InSameMinigame";
  case 5:
    return "InviteStatus";
  default:
    return "<error>";
  }
}

