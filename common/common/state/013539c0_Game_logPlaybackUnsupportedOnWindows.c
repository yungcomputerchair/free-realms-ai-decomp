// addr: 0x013539c0
// name: Game_logPlaybackUnsupportedOnWindows
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Game_logPlaybackUnsupportedOnWindows(void * game, char * path) */

uint __thiscall Game_logPlaybackUnsupportedOnWindows(void *this,void *game,char *path)

{
  uint extraout_EAX;
  
                    /* Logs that playback of a log file is unsupported on Windows for the given
                       path. */
  Game_logGeneral(this,"We can\'t play back log files (%s) on Windows yet.",game);
  return extraout_EAX & 0xffffff00;
}

