// addr: 0x014de8f0
// name: GameCommand_DiscardCard_setRandomFlag
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DiscardCard_setRandomFlag(void * this, bool randomFlag_) */

void __thiscall GameCommand_DiscardCard_setRandomFlag(void *this,bool randomFlag_)

{
                    /* Sets byte field +0x4c on a GameCommand_DiscardCard.
                       CommandObjectDiscard_doCommand passes its random/discard flag here before
                       dispatching the discard-card game command, and DiscardCardState's discard
                       path also calls it. */
  *(bool *)((int)this + 0x4c) = randomFlag_;
  return;
}

