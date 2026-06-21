// addr: 0x00c45860
// name: MiniGameDetails_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MiniGameDetails_getColumnName(int columnIndex_) */

char * MiniGameDetails_getColumnName(int columnIndex_)

{
                    /* Maps mini-game detail/list column indices to display names including
                       MiniGameId, LinkName, stage fields, ratings, help SWF, and price. */
  switch(columnIndex_) {
  case 0:
    return "MiniGameId";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "Icon";
  case 4:
    return "LinkName";
  case 5:
    return "ShortName";
  case 6:
    return "Unlocked";
  case 7:
    return "Allowed";
  case 8:
    return "Members Only";
  case 9:
    return "ParentMiniGamed";
  case 10:
    return "BackgroundSwf";
  case 0xb:
    return "SelectedMiniGame";
  case 0xc:
    return "StageNumber";
  case 0xd:
    return "MinPlayers";
  case 0xe:
    return "MaxPlayers";
  case 0xf:
    return "StageProgression";
  case 0x10:
    return "ShowStartScreenOnPlayNext";
  case 0x11:
    return "MiniGame Type";
  case 0x12:
    return "Help Swf";
  case 0x13:
    return "Start Sound ID";
  case 0x14:
    return "Leaderboard Position";
  case 0x15:
    return "High Score";
  case 0x16:
    return "Challenges Completed";
  case 0x17:
    return "Challenges Available";
  case 0x18:
    return "Overall Rating";
  case 0x19:
    return "Stage Image";
  case 0x1a:
    return "Must Purchase Item ID";
  case 0x1b:
    return "PlayedCount";
  case 0x1c:
    return "New";
  case 0x1d:
    return "Next";
  case 0x1e:
    return "IsMicro";
  case 0x1f:
    return "Price";
  default:
    return "<error>";
  }
}

