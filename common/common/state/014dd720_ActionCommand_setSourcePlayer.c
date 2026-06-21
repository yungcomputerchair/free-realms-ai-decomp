// addr: 0x014dd720
// name: ActionCommand_setSourcePlayer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionCommand_setSourcePlayer(void * this, int playerId_) */

void __thiscall ActionCommand_setSourcePlayer(void *this,int playerId_)

{
                    /* Stores a 32-bit value at offset +0x28. In the caller, the value comes from a
                       game/player accessor before emitting an action-like command, suggesting a
                       source-player field. */
  *(int *)((int)this + 0x28) = playerId_;
  return;
}

