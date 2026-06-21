// addr: 0x013ed900
// name: TradeCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_registerFactories(void) */

void TradeCommand_registerFactories(void)

{
                    /* Registers all TradeCommand factory classes. */
  TradeCommand_registerFactory();
  TradeCommand_AcceptPostedTrade_registerFactory();
  TradeCommand_AcceptTrade_registerFactory();
  TradeCommand_AcceptTradeRequest_registerFactory();
  TradeCommand_AddCardToTrade_registerFactory();
  TradeCommand_AddPostedTrade_registerFactory();
  TradeCommand_CancelPostedTrade_registerFactory();
  TradeCommand_CancelTradeRequest_registerFactory();
  TradeCommand_ChangeTradeSession_registerFactory();
  TradeCommand_ClearAcceptState_registerFactory();
  TradeCommand_ClearTrade_registerFactory();
  TradeCommand_EndPostedTrades_registerFactory();
  TradeCommand_EndTradeSession_registerFactory();
  TradeCommand_FinalAcceptTrade_registerFactory();
  TradeCommand_IssueTradeRequest_registerFactory();
  TradeCommand_LockTrade_registerFactory();
  TradeCommand_PostedTradeError_registerFactory();
  TradeCommand_RemoveCardFromTrade_registerFactory();
  TradeCommand_RequestPostedTrades_registerFactory();
  TradeCommand_SetListenStatus_registerFactory();
  TradeCommand_SetTradeAllowed_registerFactory();
  TradeCommand_SetupFinalTradeAccept_registerFactory();
  TradeCommand_StartPostedTrades_registerFactory();
  TradeCommand_StartTradeSync_registerFactory();
  TradeCommand_TransferPostedTrade_registerFactory();
  return;
}

