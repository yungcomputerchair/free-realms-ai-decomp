// addr: 0x0130b8a0
// name: TradingCardLobby_deletingDtorThunk
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradingCardLobby_deletingDtorThunk(void) */

void TradingCardLobby_deletingDtorThunk(void)

{
                    /* Tiny thunk that forwards to the TradingCard::Lobby scalar deleting
                       destructor. Contains no additional logic. */
  TradingCardLobby_scalarDeletingDtor();
  return;
}

