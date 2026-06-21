// addr: 0x013ef1c0
// name: Exception_setFatal
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_setFatal(void * this, char fatal) */

void __thiscall Exception_setFatal(void *this,char fatal)

{
                    /* Sets the Exception fatal flag at offset 0x60. The matching getter controls
                       whether exception handling continues the game or emits 'FATAL ERROR CAUGHT!
                       ENDING GAME.'. */
  *(char *)((int)this + 0x60) = fatal;
  return;
}

