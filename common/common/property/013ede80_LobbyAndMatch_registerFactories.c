// addr: 0x013ede80
// name: LobbyAndMatch_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyAndMatch_registerFactories(void) */

void LobbyAndMatch_registerFactories(void)

{
                    /* Registers TradingCard::Lobby and Match persistent component factories as a
                       grouped initialization step. The called registration wrappers lead to
                       constructors setting TradingCard::Lobby::vftable and Match::vftable. */
  TradingCard_Lobby_registerFactory();
  Match_registerFactory();
  return;
}

