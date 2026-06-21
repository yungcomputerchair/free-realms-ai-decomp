// addr: 0x013508b0
// name: Game_logGeneral
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_logGeneral(void * game, char * fmt, undefined4) */

void __cdecl Game_logGeneral(void *game,char *fmt,undefined4 param_3)

{
                    /* Writes a formatted message to the general game log channel when logging is
                       enabled on the game object. */
  if ((*(int *)((int)game + 300) != 0) && (*(char *)((int)game + 0x22c) != '\0')) {
    IndexedLog_vprintf(game,"wa_general",fmt,&param_3);
  }
  return;
}

