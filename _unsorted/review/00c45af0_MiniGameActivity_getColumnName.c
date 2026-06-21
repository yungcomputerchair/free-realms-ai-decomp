// addr: 0x00c45af0
// name: MiniGameActivity_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * MiniGameActivity_getColumnName(int columnIndex_) */

char * MiniGameActivity_getColumnName(int columnIndex_)

{
                    /* Maps activity/minigame group columns including Id, Type, Description,
                       Difficulty, GroupId, GroupName, GroupIcon, and StartSoundId. */
  switch(columnIndex_) {
  case 0:
    return "Id";
  case 1:
    return "Type";
  case 2:
    return "Name";
  case 3:
    return "Description";
  case 4:
    return "Icon ID";
  case 5:
    return "Difficulty";
  case 6:
    return "Members Only";
  case 7:
    return "GroupId";
  case 8:
    return "GroupName";
  case 9:
    return "GroupIcon";
  case 10:
    return "StartSoundId";
  default:
    return "<error>";
  }
}

