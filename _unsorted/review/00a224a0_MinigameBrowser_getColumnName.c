// addr: 0x00a224a0
// name: MinigameBrowser_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * __thiscall MinigameBrowser_getColumnName(int param_1,undefined4 param_2)

{
                    /* If the minigame/browser context is available, returns columns GameId,
                       NumberOfPlayers, OwnerName, EncounterName, Difficulty, and TimeElapsed;
                       otherwise returns an empty string. */
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x224) + 0x44) + 0x6f4) != 0) {
    switch(param_2) {
    case 0:
      return "GameId";
    case 1:
      return "NumberOfPlayers";
    case 2:
      return "OwnerName";
    case 3:
      return "EncounterName";
    case 4:
      return "Difficulty";
    case 5:
      return "TimeElapsed";
    }
  }
  return "";
}

