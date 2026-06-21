// addr: 0x013d8c60
// name: LobbyCommand_OfferAdjournedGame_setAccountId
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_OfferAdjournedGame_setAccountId(void * this, uint
   accountId_) */

void __thiscall LobbyCommand_OfferAdjournedGame_setAccountId(void *this,uint accountId_)

{
                    /* Stores a 32-bit account-related field at offset 0x10 for
                       LobbyCommand_OfferAdjournedGame. The value comes from a current-account/lobby
                       id helper before the command is sent. */
  *(uint *)((int)this + 0x10) = accountId_;
  return;
}

