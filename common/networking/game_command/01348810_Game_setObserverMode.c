// addr: 0x01348810
// name: Game_setObserverMode
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setObserverMode(void * this, char enabled) */

void __thiscall Game_setObserverMode(void *this,char enabled)

{
                    /* Stores the observer-mode enabled flag at Game offset 0x14e. The sole observed
                       caller is GameCommandSetObserverMode_execute, passing the command's boolean
                       after invoking the game observer-mode vfunc. */
  *(char *)((int)this + 0x14e) = enabled;
  return;
}

