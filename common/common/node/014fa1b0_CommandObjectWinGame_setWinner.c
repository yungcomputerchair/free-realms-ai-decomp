// addr: 0x014fa1b0
// name: CommandObjectWinGame_setWinner
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectWinGame_setWinner(void * this, int playerId_) */

void __thiscall CommandObjectWinGame_setWinner(void *this,int playerId_)

{
                    /* Stores the winning player id/value at offset 0x124 on a win-game command
                       object. */
  *(int *)((int)this + 0x124) = playerId_;
  return;
}

