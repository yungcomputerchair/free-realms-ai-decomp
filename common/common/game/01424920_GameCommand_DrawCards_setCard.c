// addr: 0x01424920
// name: GameCommand_DrawCards_setCard
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DrawCards_setCard(void * this, void * card) */

void __thiscall GameCommand_DrawCards_setCard(void *this,void *card)

{
                    /* Stores a card pointer/id at offset +0x24 in a GameCommand_DrawCards object.
                       Player.cpp draw-card logic calls it after obtaining the drawn card before
                       sending draw commands. */
  *(void **)((int)this + 0x24) = card;
  return;
}

