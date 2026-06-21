// addr: 0x013ef1b0
// name: Exception_getPlayerID
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Exception_getPlayerID(void * this) */

int __fastcall Exception_getPlayerID(void *this)

{
                    /* Returns the player id stored at +0x5c. Game_sendExceptionToPlayer checks it
                       and a known setter, Exception_setPlayerID, writes the same field. */
  return *(int *)((int)this + 0x5c);
}

