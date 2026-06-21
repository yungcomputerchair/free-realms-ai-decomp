// addr: 0x013d8c20
// name: LobbyCommand_OfferAdjournedGame_setLobbyId
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_OfferAdjournedGame_setLobbyId(void * this, uint lobbyId_) */

void __thiscall LobbyCommand_OfferAdjournedGame_setLobbyId(void *this,uint lobbyId_)

{
                    /* Stores a 32-bit command field at offset 8. The owning class is known from the
                       vtable and constructor/destructor around LobbyCommand_OfferAdjournedGame. */
  *(uint *)((int)this + 8) = lobbyId_;
  return;
}

