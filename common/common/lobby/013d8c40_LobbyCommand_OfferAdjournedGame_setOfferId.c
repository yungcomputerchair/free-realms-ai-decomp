// addr: 0x013d8c40
// name: LobbyCommand_OfferAdjournedGame_setOfferId
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_OfferAdjournedGame_setOfferId(void * this, uint offerId_) */

void __thiscall LobbyCommand_OfferAdjournedGame_setOfferId(void *this,uint offerId_)

{
                    /* Stores a 32-bit command field at offset 0xc for
                       LobbyCommand_OfferAdjournedGame. The exact semantic name is inferred from
                       command-building context. */
  *(uint *)((int)this + 0xc) = offerId_;
  return;
}

