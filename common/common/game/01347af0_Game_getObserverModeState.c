// addr: 0x01347af0
// name: Game_getObserverModeState
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_getObserverModeState(void * this) */

int __fastcall Game_getObserverModeState(void *this)

{
                    /* Returns the Game observer-mode state field at offset +0x18c. */
  return *(int *)((int)this + 0x18c);
}

