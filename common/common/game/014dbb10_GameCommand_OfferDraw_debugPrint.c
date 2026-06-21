// addr: 0x014dbb10
// name: GameCommand_OfferDraw_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_OfferDraw_debugPrint(void * this, void * out) */

void __thiscall GameCommand_OfferDraw_debugPrint(void *this,void *out)

{
                    /* Appends the 'Offer Draw Game Command' header and then emits the base
                       GameCommand game/player id fields. */
  FUN_01241650("Offer Draw Game Command\n",0x18);
  GameCommand_dump(this,out);
  return;
}

