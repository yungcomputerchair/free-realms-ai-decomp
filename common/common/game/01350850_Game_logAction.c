// addr: 0x01350850
// name: Game_logAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_logAction(void * this, char * fmt, undefined4) */

void __cdecl Game_logAction(void *this,char *fmt,undefined4 param_3)

{
                    /* Logs a formatted message to the indexed log channel 'wa_action' when the Game
                       object's log member at offset 300 is enabled. Used by Game.cpp send-message
                       logic. */
  if (*(int *)((int)this + 300) != 0) {
    IndexedLog_vprintf(this,"wa_action",fmt,&param_3);
  }
  return;
}

