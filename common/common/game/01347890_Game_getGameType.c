// addr: 0x01347890
// name: Game_getGameType
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_getGameType(void * this) */

int __fastcall Game_getGameType(void *this)

{
                    /* Returns the Game field at offset +0x34c, used by game-turn/setup logging to
                       decide whether game-number context should be included. */
  return *(int *)((int)this + 0x34c);
}

