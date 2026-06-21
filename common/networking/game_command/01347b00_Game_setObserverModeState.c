// addr: 0x01347b00
// name: Game_setObserverModeState
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setObserverModeState(void * this, int state) */

void __thiscall Game_setObserverModeState(void *this,int state)

{
                    /* Stores an observer-mode state value at Game offset 0x18c. The observed caller
                       GameCommandSetObserverMode_execute writes value 2 after enabling observer
                       mode on the game. */
  *(int *)((int)this + 0x18c) = state;
  return;
}

