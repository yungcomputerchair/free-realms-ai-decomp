// addr: 0x01347950
// name: Game_getGameNumber
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_getGameNumber(void * this) */

int __fastcall Game_getGameNumber(void *this)

{
                    /* Returns the Game field at offset +0x2e8, logged as the game number in
                       turn/match status messages and copied into GameCommand_SetupGame. */
  return *(int *)((int)this + 0x2e8);
}

